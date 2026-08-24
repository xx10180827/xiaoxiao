// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MySceneComponent"));
	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMeshComponent"));
	MyAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("MyAudioComponent"));
	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxComponent"));
	MyParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticleSystemComponent"));
    
	RootComponent = MySceneComponent;
	MyMeshComponent->SetupAttachment(MySceneComponent);
	MyBoxComponent->SetupAttachment(MySceneComponent);
	MyAudioComponent->SetupAttachment(MyBoxComponent);
	MyParticleSystemComponent->SetupAttachment(MySceneComponent);
        
    //静态加载资源
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MyStaticMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	MyMeshComponent->SetStaticMesh(MyStaticMesh.Object);		//必须添加Object; 通过 .Object 成员获取资源指针
	static ConstructorHelpers::FObjectFinder<USoundWave> MyStaticAudio(TEXT("/Script/Engine.SoundWave'/Game/StarterContent/Audio/Collapse01.Collapse01'"));
	MyAudioComponent->SetSound(MyStaticAudio.Object);		//静态加载声音资源
	static ConstructorHelpers::FObjectFinder<UParticleSystem> MyStaticParticSystem(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	MyParticleSystemComponent->SetTemplate(MyStaticParticSystem.Object);
        
	//加载静态类
	static ConstructorHelpers::FClassFinder<AActor>  MyStaticClass(TEXT("/Script/Engine.Blueprint'/Game/StarterContent/Blueprints/Blueprint_CeilingLight.Blueprint_CeilingLight_C'"));
	MyActor = MyStaticClass.Class;

    //碰撞设置
    MyBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);		//仅查询碰撞（如射线检测）
    //MyBoxComponent->SetCollisionEnabled(ECollisionEnabled::ProbeOnly);		//仅探测碰撞（如触发器）
    //MyBoxComponent->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);		//仅物理碰撞（如刚体模拟）
    //MyBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndProbe);		//同时启用查询和探测碰撞

	//碰撞对象类型设置
	//MyBoxComponent->SetCollisionObjectType(ECC_Pawn);	//碰撞对象类型设置为Pawn
	//MyBoxComponent->SetCollisionObjectType(ECC_Destructible);	//碰撞对象类型设置为Destructible
	MyBoxComponent->SetCollisionObjectType(ECC_WorldDynamic);//碰撞对象类型设置为世界动态

	//碰撞响应设置
	MyBoxComponent->SetCollisionResponseToAllChannels(ECR_Overlap);	//所有通道重叠检测
	//MyBoxComponent->SetCollisionResponseToAllChannels(ECR_Block);		//所有通道阻挡
	//MyBoxComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore); //忽略Pawn通道
	//MyBoxComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);//阻挡WorldStatic通道
	//MyBoxComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Ignore);//忽略WorldDynamic通道
	
	//设置BoxComponent的大小
	MyBoxComponent->SetBoxExtent(FVector(64, 64, 64));	//设置碰撞盒的大小为64
    
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	//判断粒子特效是否激活 如果激活则停止激活
	if (MyParticleSystemComponent)
	{
		MyParticleSystemComponent->Deactivate();
	}

	if (MyActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("MyActor is %s"), *MyActor->GetName());//判断MyActor是否为空，如果不为空则输出MyActor的名字
	}
	
	//动态加载资源
	UStaticMesh* MyMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MyMesh)
	{
		MyMeshComponent->SetStaticMesh(MyMesh);		//动态加载类挂载到模型
	}
    //动态加载类
	UClass* MyTempclass = LoadClass<AActor>(this, TEXT("/Script/Engine.Blueprint'/Game/StarterContent/Blueprints/Blueprint_WallSconce.Blueprint_WallSconce_C'"));
	if (MyTempclass) 
	{
		AActor* MyTempActor = GetWorld()->SpawnActor<AActor>(MyTempclass, FVector::ZeroVector, FRotator::ZeroRotator);
	}
	
	MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AMyActor::BeginOverlap);//检测碰撞盒组件的重叠事件
	MyBoxComponent->OnComponentEndOverlap.AddDynamic(this, &AMyActor::EndOverlap);		//检测碰撞盒组件的结束重叠事件
	MyBoxComponent->OnComponentHit.AddDynamic(this, &AMyActor::HitFunction);//检测碰撞盒组件的碰撞事件
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	

	//关于自身坐标和世界坐标的移动
	FVector MyLocation = FVector(1, 0, 0);
	FHitResult MyHitResult;
	//AddActorLocalOffset(MyLocation, false, &MyHitResult);	//跟随自身坐标移动 并且不检测碰撞
	AddActorWorldOffset(MyLocation, false, &MyHitResult);	//跟随世界坐标移动

}

void AMyActor::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//激活粒子特效
	if (MyParticleSystemComponent)
	{
		MyParticleSystemComponent->Activate();
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("BeginOverlap"));
}

void AMyActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//停止粒子特效
	if (MyParticleSystemComponent)
	{
		MyParticleSystemComponent->Deactivate();
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("EndOverlap"));
}

void AMyActor::HitFunction(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("HitFunction"));
}


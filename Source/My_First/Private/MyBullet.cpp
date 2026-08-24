// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBullet.h"

// Sets default values
AMyBullet::AMyBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//初始化子弹的各个组件
	MyBulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyBulletMesh"));	//创建子弹Mesh
	MySphere = CreateDefaultSubobject<USphereComponent>(TEXT("MySphere"));	 //创建子弹碰撞体
	MyBulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MyBulletMovement"));	//创建子弹移动组件
	//静态加载各组件
	static ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	MyBulletMesh->SetStaticMesh(TempMesh.Object);		//必须添加Object; 通过 .Object 成员获取资源指针
	MyBulletMesh->SetRelativeScale3D(FVector(0.4, 0.4, 0.4));	//设置子弹的缩放比例
	RootComponent = MyBulletMesh;
	MySphere->SetupAttachment(MyBulletMesh);
	MyBulletMovement->SetUpdatedComponent(MyBulletMesh);
	MyBulletMovement->InitialSpeed = 1200.f;	//设置子弹的初始速度
	MyBulletMovement->MaxSpeed = 2400.0f;		//设置子弹最大速度
	MyBulletMovement->bRotationFollowsVelocity = true;	//设置旋转
	MyBulletMovement->bIsHomingProjectile = true;		//跟随组件
	MyBulletMovement->ProjectileGravityScale = 1.5f;	//设置重力

}

// Called when the game starts or when spawned
void AMyBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


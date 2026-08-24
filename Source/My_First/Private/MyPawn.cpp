// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRootComponent"));
	MySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArmComponent"));
	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCameraComponent"));
	RootComponent = MyRoot;
	//设置摇臂的父组件为根组件
	MySpringArm->SetupAttachment(MyRoot);
	//设置摄像机的父组件为摇臂组件
	MyCamera->SetupAttachment(MySpringArm);
	MySpringArm->bDoCollisionTest = false;//设置摇臂组件不进行碰撞检测
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	//TestA();
	TSubclassOf<UMyObject>	MyObjectClass = UMyObject::StaticClass();
	MyTsetObjectClass = NewObject<UMyObject>(GetWorld(), MyObjectClass);//创建UObject实例化对象
	if (MyTsetObjectClass)//判断是否创建成功
	{
		UE_LOG(LogTemp, Warning, TEXT("Mytestobject is %s"), *MyTsetObjectClass->GetName()); 
		UE_LOG(LogTemp, Warning, TEXT("My UserID is %d"), MyTsetObjectClass->MyDataTableStruct.ID);
		UE_LOG(LogTemp, Warning, TEXT("My Name is %d"), *MyTsetObjectClass->MyDataTableStruct.Name);
		UE_LOG(LogTemp, Warning, TEXT("My Value is %f"), MyTsetObjectClass->MyDataTableStruct.Value);
	}
	
	MyGameInstance = Cast<UMyGameInstance>(GetWorld()->GetFirstPlayerController()->GetGameInstance());//获取游戏实例
	if (MyGameInstance)//判断是否创建成功
	{
		UE_LOG(LogTemp, Warning, TEXT("MyGameInstance is %s"), *MyGameInstance->GetName());
		UE_LOG(LogTemp, Warning, TEXT("My ID is %s"), *MyGameInstance->MyAPPID);
		UE_LOG(LogTemp, Warning, TEXT("My Name is %s"), *MyGameInstance->MyName);
		UE_LOG(LogTemp, Warning, TEXT("My UserId is %s"), *MyGameInstance->MyUserID);
	}
	FVector MyLocation = FVector(0, 0, 0);		//初始化Vector数组用于设置初始位置
	FRotator MyRotator = FRotator(-50, 0, 0);
	FVector MyScale = FVector(1, 1, 1);
	SetActorLocation(MyLocation);		//设置初始位置
	SetActorRotation(MyRotator);
	SetActorScale3D(MyScale);
}

// Called every frame 
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawn::PrintF1()
{
        
}

bool AMyPawn::PrintF2()
{
	return false;
}

void AMyPawn::TestA_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("This is TestA"));
}

int AMyPawn::TestB_Implementation()
{
	return 0;
}

void AMyPawn::TestC_Implementation(const FString& mystring)
{
}

int AMyPawn::TestD_Implementation(const FString& mystring)
{
	return 0;
}

void AMyPawn::PrintTest()
{
}

void AMyPawn::Zoom(bool Direction, float ZoomSpeed)
{
	if (Direction)	//为真增加
	{
		if (MySpringArm->TargetArmLength >= 300 && MySpringArm->TargetArmLength < 5000)
		{
			MySpringArm->TargetArmLength += (ZoomSpeed * 2);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("MyArmLength is %f"), MySpringArm->TargetArmLength));
		}
	}
	else			//为假减少
	{
		if (MySpringArm->TargetArmLength > 300 && MySpringArm->TargetArmLength <= 5000)
		{
			MySpringArm->TargetArmLength -= (ZoomSpeed * 2);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("MyArmLength is %f"), MySpringArm->TargetArmLength));
		}
	}
}

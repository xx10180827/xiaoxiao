// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	TestA();	
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

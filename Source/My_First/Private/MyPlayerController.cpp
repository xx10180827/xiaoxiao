// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "MyPlayerController.h"
#include "Blueprint/UserWidget.h"

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();		//继承父类的函数防止识别不到
	InputComponent->BindAction("Wheelup", IE_Pressed, this, &AMyPlayerController::WheelupFunction);		//将蓝图中 按键绑定
	InputComponent->BindAction("Wheeldown", IE_Pressed, this, &AMyPlayerController::WheeldownFunction);
}

void AMyPlayerController::WheelupFunction()
{
	if (GetPawn())
	{
		AMyPawn* MyCameraPawn = Cast<AMyPawn>(GetPawn());
		if (MyCameraPawn)
		{
			MyCameraPawn->Zoom(1, 10);
		}
	}
}

void AMyPlayerController::WheeldownFunction()
{
	AMyPawn* MyCameraPawn = GetPawn<AMyPawn>(); 
	if (MyCameraPawn)
	{
		MyCameraPawn->Zoom(0, 10);
	}
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UClass* MyWidget = LoadClass<UUserWidget>(NULL, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BP_MyUMG.BP_MyUMG_C'"));
	UUserWidget* MyWidgetClass = CreateWidget<UUserWidget>(GetWorld(), MyWidget);//创建UMG
	MyWidgetClass->AddToViewport();
}

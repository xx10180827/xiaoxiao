// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDelegateActor.generated.h"

//单播代理的实现--声名代理类型
DECLARE_DELEGATE(NoneDelegate);
DECLARE_DELEGATE_OneParam(OneDelegate, FString);
DECLARE_DELEGATE_TwoParams(TwoDelegate,FString,int32);
DECLARE_DELEGATE_ThreeParams(ThreeDelegate, FString, int32, float);
DECLARE_DELEGATE_RetVal(FString, ReturnDelegate);

//多播代理的实现--声名代理类型
DECLARE_MULTICAST_DELEGATE_OneParam(MultiOneDelegate, FString);

//动态多播代理的实现--声名代理类型
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicMultiOneDelegate, FString, MyString);

UCLASS()
class MY_FIRST_API AMyDelegateActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDelegateActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//单播代理声名代理变量
	NoneDelegate NoneDelegate;
	OneDelegate OneDelegate;
	TwoDelegate TwoDelegate;
	ThreeDelegate ThreeDelegate;
	ReturnDelegate ReturnDelegate;

	//多播代理声名代理变量
	MultiOneDelegate MultiDelegate;

	//动态多播代理声名变量
	UPROPERTY(BlueprintAssignable, Category = "MyDelegate")//让该代理在蓝图中可见
		FDynamicMultiOneDelegate DynamicMultiDelegate;
	//声名函数
	void NoneDelegateFunction();
	void OneDelegateFunction(FString InString);
	void TwoDelegateFunction(FString InString, int32 InInt);
	void ThreeDelegateFunction(FString InString, int32 InInt, float InFloat);
	FString ReturnDelegateFunction();
	//多播代理声明函数
	void MultiOneDelegateFunction1(FString Str);
	void MultiOneDelegateFunction2(FString Str);
	void MultiOneDelegateFunction3(FString Str);
};

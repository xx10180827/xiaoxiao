// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDelegateActor.h"

// Sets default values
AMyDelegateActor::AMyDelegateActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//绑定代理函数
	NoneDelegate.BindUObject(this, &AMyDelegateActor::NoneDelegateFunction);
	OneDelegate.BindUObject(this, &AMyDelegateActor::OneDelegateFunction);
	TwoDelegate.BindUObject(this, &AMyDelegateActor::TwoDelegateFunction);
	ThreeDelegate.BindUObject(this, &AMyDelegateActor::ThreeDelegateFunction);
	ReturnDelegate.BindUObject(this,&AMyDelegateActor::ReturnDelegateFunction);

	//多播代理绑定函数
	MultiDelegate.AddUObject(this, &AMyDelegateActor::MultiOneDelegateFunction1);
	MultiDelegate.AddUObject(this, &AMyDelegateActor::MultiOneDelegateFunction2);
	MultiDelegate.AddUObject(this, &AMyDelegateActor::MultiOneDelegateFunction3);
}

// Called when the game starts or when spawned
void AMyDelegateActor::BeginPlay()
{
	Super::BeginPlay();
	//如果生成成功则执行代理函数
	NoneDelegate.ExecuteIfBound();
	OneDelegate.ExecuteIfBound(TEXT("OneDelegateFunction"));
	TwoDelegate.ExecuteIfBound(TEXT("TwoDelegateFunction"), 2);
	ThreeDelegate.ExecuteIfBound(TEXT("ThreeDelegateFunction"), 3, 3.0f); 
	FString ReturnStrong = ReturnDelegate.Execute();

	//执行多播代理函数
	MultiDelegate.Broadcast(TEXT("MultiOneDelegateFunction"));

	//执行动态多播代理		不需要绑定函数可以在蓝图中绑定函数
	DynamicMultiDelegate.Broadcast(TEXT("DynamicMultiDelegate"));
}

// Called every frame
void AMyDelegateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//----------------------------代理函数实现---------------------------------
void AMyDelegateActor::NoneDelegateFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NoneDelegateFunction"));
}

void AMyDelegateActor::OneDelegateFunction(FString InString)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s"),*InString));
}

void AMyDelegateActor::TwoDelegateFunction(FString InString, int32 InInt)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s,%d"), *InString,InInt));
}

void AMyDelegateActor::ThreeDelegateFunction(FString InString, int32 InInt, float InFloat)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s ,%d ,%f"), *InString,InInt,InFloat));
}


FString AMyDelegateActor::ReturnDelegateFunction()
{
	FString MyString = TEXT("MyReturnDelegate");
	return MyString;
}

void AMyDelegateActor::MultiOneDelegateFunction1(FString Str)
{
	Str = Str.Append(TEXT("1"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s"), *Str));
}

void AMyDelegateActor::MultiOneDelegateFunction2(FString Str)
{
	Str = Str.Append(TEXT("2"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s"), *Str));
}

void AMyDelegateActor::MultiOneDelegateFunction3(FString Str)
{
	Str = Str.Append(TEXT("3"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s"), *Str));
}



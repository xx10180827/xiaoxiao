// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include"MyPawn.h"
#include "MyPlayerController.h"
#include "MyGameState.h"
#include "MyPlayerState.h"
#include "MyHUD.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MY_FIRST_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	AMyGameMode();
public:
	virtual void BeginPlay() override;	
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; 

	//创建数组 UEc++的动态数组 所有元素类型都是一样的 速度快内存消耗少
	TArray<int32>MyArray;
	void Print();

	//TMap- 是一种键值对容器  而且key唯一
	TMap<int32, int32> MyMap;
	void PrintMap();

	//TSet-  是一种快速容器类冗长用于在排序不重要的情况下存储唯一元素 
	//TSet类似于 TMap 和 TMultiMap 但是一个重要区别  TSet是通过元素求值的可覆盖函数 使用数据本身作为键(数组默认键) 而不是键和值独立关联
	//TSet 可以快速地添,查,删元素  并且对于元素具有较强的所有权
	TSet<FString>MySet;
	void PrintMySet();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MY_FIRST_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UMyGameInstance();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyIstance")
		FString	MyAPPID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyIstance")
		FString	MyUserID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyIstance")
		FString	MyName;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "MyObject.generated.h"

USTRUCT(BlueprintType)
struct FMyDataTableStruct : public FTableRowBase
{
    GENERATED_BODY()

    FMyDataTableStruct();
    // 一个用于定义数据表行结构的示例
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyItem")
    int32 ID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyItem")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyItem")
    float Value;
};


   
/**
 * 
 */
UCLASS()
class MY_FIRST_API UMyObject : public UObject
{
	GENERATED_BODY()
public:
    UPROPERTY()
        FMyDataTableStruct MyDataTableStruct;
};

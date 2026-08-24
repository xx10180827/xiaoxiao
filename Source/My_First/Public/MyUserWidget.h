// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MY_FIRST_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))	//绑定蓝图变量名称
		UButton* MyButtonStart;
	UPROPERTY(meta = (BindWidget))
		UButton* MyButtonExit;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyHealth")	
		float MyHealth = 100.0f;	//声明一个浮点数变量MyHealth
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyHealth")
		float MyMaxHealth = 100.0f;	//声明一个浮点数变量MyMaxHealth
		void MyHealthFunction();

	virtual bool Initialize() override;	//重写初始化函数

	UFUNCTION()
	//声明函数
	void OnMyButtonStart();	//按钮点击事件
	UFUNCTION()
	void OnMyButtonExit();
};

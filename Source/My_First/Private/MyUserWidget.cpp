// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

void UMyUserWidget::MyHealthFunction()
{
	if (MyHealth <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("MyHealth is 0"));
	}
	else
	{
		MyHealth -= 10.0f;
	}
}

bool UMyUserWidget::Initialize()
{

	if (!Super::Initialize())	//判断是否成功初始化父类
	{
		return false;
	}

	//绑定按钮点击事件
	MyButtonStart->OnClicked.AddDynamic(this, &UMyUserWidget::OnMyButtonStart);
	MyButtonExit->OnClicked.AddDynamic(this, &UMyUserWidget::OnMyButtonExit);
	return true;
}

void UMyUserWidget::OnMyButtonStart()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Start Button Clicked"));
	MyHealthFunction();	//调用函数
}

void UMyUserWidget::OnMyButtonExit()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Start Button Clicked"));
}

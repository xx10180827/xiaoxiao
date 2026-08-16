// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"MyObject.h"
#include"MyGameInstance.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "MyPawn.generated.h"

//UEö������
UENUM(BlueprintType)
namespace MyEnumType
{
	enum MyEnum
	{
		Type1,
		Type2,
		Type3,
	};
}

//UE结构体的使用
USTRUCT(BlueprintType)
struct FMyTeststruct
{
	GENERATED_USTRUCT_BODY()
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MytestStruct")
	int32 Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MytestStruct")
	FString Name;
};

UCLASS()
class MY_FIRST_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//������Ĭ�����ÿɼ�
	UPROPERTY(VisibleDefaultsOnly)
		int32 VisibleDefaultOnlyInt;
	//����ʵ����ϸ�����ɼ�
	UPROPERTY(VisibleInstanceOnly)
		FString  VisibleInstanceOnlyFstirng;
	//���κεط����ɼ�
	UPROPERTY(VisibleAnywhere)
		FVector VisibleAnywhereVector;
	
	//������Ĭ����������༭
	UPROPERTY(EditDefaultsOnly)
		int32 EditDefaultOnlyInt;
	//����ʵ����ϸ������п��Ա༭
	UPROPERTY(EditInstanceOnly)
		FString EditInstanceOnlystring;
	//����Ĭ����������������ɱ༭
	UPROPERTY(EditAnywhere)
		FVector EditAnywhereVector;

	//������ͼ�п��Զ�
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
		int32 BluePrintReadOnlyInt;
	//����ͼ�п���д���Զ�  �����Ի�ȡ(get)������(set)����
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		int32 BluePrintReadWriteInt;

	//����Ŀ¼category (��ͼ�ڵ�Ŀ¼)
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MyIntValue")
		int32 value1;
	//������Ŀ¼
	UPROPERTY(EditAnywhere,BlueprintReadWrite,category = "MyIntValue|MySubIntValue")
		int32 value2;

	//meta Ԫ����˵����
	//DisPlayName �����
	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta = (DisplayName = "isController"))
		bool isController;
	//EditCondition�������Ʊ༭
	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta = (EditCondition = "isController"))
		float Value3;
	//Tooltip ����˵�����ǵı���
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta = (Tooltip = "IsTrue"))
		bool istrue;
    
    //�����ǵĺ�����¶����ͼ 
	UFUNCTION(BlueprintCallable, Category = "Myfunction")
	void PrintF1();
	//���麯������
	UFUNCTION(BlueprintCallable,BlueprintPure , Category = "Myfunction")
	bool PrintF2();

    //BlueprintImplementableEvent��c++���������ܶ���  ֮������ͼ�н�������
    UFUNCTION(BlueprintImplementableEvent)
	void Test1();
    UFUNCTION(BlueprintImplementableEvent)
	int Test2();
    UFUNCTION(BlueprintImplementableEvent)
	void Test3(const FString& MyString);
        
	//BlueprintNativeEvent��c++��������ʵ�� ��ͼ�������ػ��߲�����
    UFUNCTION(BlueprintNativeEvent)
		void TestA();
    UFUNCTION(BlueprintNativeEvent)
		int TestB();
    UFUNCTION(BlueprintNativeEvent)
		void TestC(const FString& mystring);
    UFUNCTION(BlueprintNativeEvent)
		int TestD(const FString& mystring);
   
    //metaԪ���ݽ��н���˵��(�����)
	UFUNCTION(BlueprintCallable, category = "MyFunction", meta = (DisplayName = "MyPrintTest"))
	void PrintTest();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyEnum")
	TEnumAsByte<MyEnumType::MyEnum> MyEnum;
        
	//UE创建一个结构体变量
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMyTeststruct MyStruct;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyExposeOnSpawn",meta = (ExposeOnspawn = "ExposeOnSpawnValue"))
		float MyHealth;
       
    UPROPERTY()
	UMyObject* MyTsetObjectClass;
    
    UPROPERTY()
	UMyGameInstance* MyGameInstance;

	public:
	//创建摄像机摇臂
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent");
	USpringArmComponent* MySpringArm;	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent");
	UCameraComponent* MyCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent");
	USceneComponent* MyRoot;

	//滚轮实现摄像机缩放
	void Zoom(bool Direction, float ZoomSpeed);
};
 
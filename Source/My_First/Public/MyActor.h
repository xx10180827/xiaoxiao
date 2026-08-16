// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"			//场景组件
#include "Components/StaticMeshComponent.h"		//静态网格组件
#include "Components/BoxComponent.h"			//碰撞盒组件
#include "Particles/ParticleSystemComponent.h"	//粒子系统组件
#include "Components/AudioComponent.h"			//声音组件
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MY_FIRST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponents")
	class USceneComponent* MySceneComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponents")
	class UStaticMeshComponent* MyMeshComponent;//静态网格组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponents")
	class UBoxComponent* MyBoxComponent;//碰撞盒组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponents")
	class UParticleSystemComponent* MyParticleSystemComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponents")
	class UAudioComponent* MyAudioComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Myclass")
	TSubclassOf<AActor> MyActor;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//设置碰撞函数
	UFUNCTION()
	void HitFunction(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

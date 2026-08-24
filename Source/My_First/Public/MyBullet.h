// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"	//
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MyBullet.generated.h"

UCLASS()
class MY_FIRST_API AMyBullet : public AActor
{
	GENERATED_BODY()
		
public:	
	// Sets default values for this actor's properties
	AMyBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//完成子弹设置
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mycomponent")
		UStaticMeshComponent* MyBulletMesh;	//创建子弹Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mycomponent")	
	USphereComponent* MySphere;	 //创建子弹碰撞体
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mycomponent")
		UProjectileMovementComponent* MyBulletMovement;	//创建子弹移动组件
};

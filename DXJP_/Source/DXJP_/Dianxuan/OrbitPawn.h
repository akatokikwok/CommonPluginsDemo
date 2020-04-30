// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OrbitingMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DXJP_/Jieping/CustomGameInstance.h"
#include "OrbitPawn.generated.h"


DECLARE_EVENT(AOrbitPawn, FWhenIPress_keyboard_1)

UCLASS()
class DXJP__API AOrbitPawn : public APawn
{
	GENERATED_BODY()

public:
	//按键触发事件
	FWhenIPress_keyboard_1 WhenIPress_keyboard_1;
	// Sets default values for this pawn's properties
	AOrbitPawn();
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gins)
		UCustomGameInstance* tempGIns;

	void Zhixingpaizhao();
	void XunHuanpaizhao();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public://////////////////////////////////////////////////////////////////////////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = XuanZhuanZuJian)
		UOrbitingMovementComponent* cusOrbitComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = XuanZhuanZuJian)
		UStaticMeshComponent* cusZhuCube;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = XuanZhuanZuJian)
		float Gaodu;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = XuanZhuanZuJian)
		FRotator SheXiangjiFuYangjiao;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = XuanZhuanZuJian)
		float PaizhaoJiangeInternavl;

	 void OncePaizhao() 
	{
		UCustomGameInstance* cusIns = Cast<UCustomGameInstance>(tempGIns);
		cusIns->TakeScreenShot("Jietu", EImageFormatType::PNG, 100, true, true, true);
	};

};

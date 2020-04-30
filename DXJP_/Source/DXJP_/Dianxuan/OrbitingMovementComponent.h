// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "OrbitingMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DXJP__API UOrbitingMovementComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOrbitingMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public://////////////////////////////////////////////////////////////////////////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XuanZhuanCustom")
		float RotationRate;
	UPROPERTY()
		bool bRotateToFaceOutside;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XuanZhuanCustom")
		float OrbitDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XuanZhuanCustom")
		UCameraComponent* cusSubCamera;

	float CurrJiaodu;


		
};

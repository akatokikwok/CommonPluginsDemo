// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitingMovementComponent.h"
#include "Components/SceneComponent.h"

// Sets default values for this component's properties
UOrbitingMovementComponent::UOrbitingMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	RotationRate = 60;
	OrbitDistance = 500;
	CurrJiaodu = 0;
	bRotateToFaceOutside = true;

	cusSubCamera = CreateDefaultSubobject<UCameraComponent>("cusSubCamera");
	cusSubCamera->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform, NAME_None);
}


// Called when the game starts
void UOrbitingMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UOrbitingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	float CurrJiaoduRadins = FMath::DegreesToRadians<float>(CurrJiaodu);

	SetRelativeLocation(
		FVector(OrbitDistance * FMath::Cos(CurrJiaoduRadins),
			OrbitDistance * FMath::Sin(CurrJiaoduRadins),
			RelativeLocation.Z)
	);

	if (bRotateToFaceOutside == true)
	{
		FVector LookDir = RelativeLocation.GetSafeNormal();
		FRotator LookRot = LookDir.Rotation();

		SetRelativeRotation(LookRot);
	}

	CurrJiaodu = FMath::Fmod((CurrJiaodu + (RotationRate*DeltaTime)), 360);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "T_JieTuCharacter.h"

// Sets default values
AT_JieTuCharacter::AT_JieTuCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AT_JieTuCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AT_JieTuCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AT_JieTuCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


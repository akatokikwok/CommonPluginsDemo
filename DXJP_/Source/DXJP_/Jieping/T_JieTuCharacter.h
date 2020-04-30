// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CustomGameInstance.h"
#include "Components/InputComponent.h"
#include "T_JieTuCharacter.generated.h"

//DECLARE_EVENT(AT_JieTuCharacter, FWhenIPress_keyboard_1)

UCLASS()
class DXJP__API AT_JieTuCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	////按键1事件
	//FWhenIPress_keyboard_1 WhenIPress_keyboard_1;
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gins)
	//	UCustomGameInstance* tempGIns;
	////拍照函数执行
	//void Zhixingpaizhao();
	//void XunHuanpaizhao();

public:
	// Sets default values for this character's properties
	AT_JieTuCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

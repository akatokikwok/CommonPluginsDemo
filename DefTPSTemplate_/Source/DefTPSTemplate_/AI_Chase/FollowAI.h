// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "..\Runtime\AIModule\Classes\BehaviorTree\BehaviorTreeComponent.h"
#include "..\Runtime\AIModule\Classes\BehaviorTree\BlackboardComponent.h"
#include "..\Runtime\AIModule\Classes\BehaviorTree\BehaviorTree.h"
#include "FollowAI.generated.h"

/**
 * 
 */
UCLASS()
class DEFTPSTEMPLATE__API AFollowAI : public AAIController
{
	GENERATED_BODY()
public:
	AFollowAI();

	UPROPERTY( EditAnywhere, Category="FollowAI")
	class UBehaviorTreeComponent* BehaviorComp;
	UPROPERTY(EditAnywhere, Category = "FollowAI")
	class UBlackboardComponent* BlackboardComp;

	uint8 TargetActorKeyID;
public:
	virtual void OnPossess(APawn* InPawn) override;

	
};

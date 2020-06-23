// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include <BehaviorTree/BehaviorTreeTypes.h>
#include "BTTask_MoveToMyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class DEFTPSTEMPLATE__API UBTTask_MoveToMyPlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};

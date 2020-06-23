// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_MoveToMyPlayer.h"
#include "FollowAI.h"
#include <../Default/DefTPSCharacter.h>
#include "BrainComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeTypes.h"

EBTNodeResult::Type UBTTask_MoveToMyPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AFollowAI* _FollowAI=Cast<AFollowAI>(OwnerComp.GetAIOwner());
	ADefTPSCharacter* _Wanjia=
		Cast<ADefTPSCharacter>( OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(_FollowAI->TargetActorKeyID) );
	if (_Wanjia!=nullptr)
	{
		_FollowAI->MoveToActor(_Wanjia,5,true,true,true,0,true);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
	EBTNodeResult::Failed;
}

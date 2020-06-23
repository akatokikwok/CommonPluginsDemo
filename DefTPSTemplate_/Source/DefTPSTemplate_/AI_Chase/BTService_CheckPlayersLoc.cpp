// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_CheckPlayersLoc.h"
#include "FollowAI.h"
#include <../Default/DefTPSCharacter.h>
#include "..\Runtime\AIModule\Classes\BehaviorTree\Blackboard\BlackboardKeyType_Object.h"
#include <Engine/Engine.h>
#include <BehaviorTree/BTNode.h>
#include <Engine/World.h>
#include <GameFramework/Controller.h>
#include "..\Runtime\Engine\Classes\GameFramework\PlayerController.h"

UBTService_CheckPlayersLoc::UBTService_CheckPlayersLoc()
{
	bCreateNodeInstance=true;
}

void UBTService_CheckPlayersLoc::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AFollowAI* FollowAIPC=Cast<AFollowAI>(OwnerComp.GetAIOwner());
	if (FollowAIPC!=nullptr)
	{
		ADefTPSCharacter* _Wanjia=Cast<ADefTPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn() );
		if (_Wanjia!=nullptr)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(FollowAIPC->TargetActorKeyID, _Wanjia);
			GEngine->AddOnScreenDebugMessage(-1,5,FColor::Green,"正在聚焦 being looking into player" );

		}
	}

}

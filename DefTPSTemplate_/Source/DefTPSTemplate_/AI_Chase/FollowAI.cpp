// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowAI.h"
#include "..\Runtime\AIModule\Classes\BehaviorTree\BehaviorTreeComponent.h"
#include "..\Runtime\AIModule\Classes\BehaviorTree\BlackboardComponent.h"
#include "..\Runtime\AIModule\Classes\BehaviorTree\BehaviorTree.h"
#include "FollowCharacter.h"

AFollowAI::AFollowAI()
{
	BehaviorComp= CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp=CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
}

void AFollowAI::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AFollowCharacter* _FollowChar = Cast<AFollowCharacter>(InPawn);
	if (_FollowChar&&_FollowChar->BotBehaviorTree)
	{
		BlackboardComp->InitializeBlackboard(*_FollowChar->BotBehaviorTree->BlackboardAsset);
		TargetActorKeyID=BlackboardComp->GetKeyID(FName("TargetPlayer"));
		BehaviorComp->StartTree(*_FollowChar->BotBehaviorTree);
	}


}

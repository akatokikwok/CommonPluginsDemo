// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitPawn.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Engine\Classes\Engine\StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "OrbitingMovementComponent.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "GameFramework/Actor.h"
#include "Components/InputComponent.h"
#include "DXJP_/Jieping/CustomGameInstance.h"
#include "Engine/Engine.h"
#include "../Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Engine/World.h"
#include "../Source/Runtime/Engine/Public/TimerManager.h"
// Sets default values
AOrbitPawn::AOrbitPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Gaodu = 300;
	SheXiangjiFuYangjiao = FRotator(0, 180, 0);
	PaizhaoJiangeInternavl=2;

	cusZhuCube = CreateDefaultSubobject<UStaticMeshComponent>("cusZhuCube");

	auto meshasset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	if (meshasset.Object != nullptr)
	{
		cusZhuCube->SetStaticMesh(meshasset.Object);
		cusZhuCube->SetRelativeScale3D(FVector(1, 1, 1));
	}
	RootComponent = cusZhuCube;
	RootComponent->SetHiddenInGame(false);

	cusOrbitComp = CreateDefaultSubobject<UOrbitingMovementComponent>("cusOrbitComp");


	UOrbitingMovementComponent* myXZcomp = Cast<UOrbitingMovementComponent>(cusOrbitComp);
	if (myXZcomp != nullptr)
	{
		myXZcomp->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepRelativeTransform,NAME_None);
		myXZcomp->cusSubCamera->SetRelativeRotation(SheXiangjiFuYangjiao);
	}
}
// void OncePaizhao()
//{
//	UCustomGameInstance* cusIns = Cast<UCustomGameInstance>(tempGIns);
//	cusIns->TakeScreenShot("Jietu", EImageFormatType::PNG, 100, true, true, true);
//
//}
void AOrbitPawn::Zhixingpaizhao()
{
	/*AOrbitPawn::OncePaizhao();
	AOrbitPawn::OncePaizhao();
	AOrbitPawn::OncePaizhao();
	AOrbitPawn::OncePaizhao();
	AOrbitPawn::OncePaizhao();
	AOrbitPawn::OncePaizhao();*/
	TArray<int32> YicipaizhaoShuZu;
	for (int32 a=1;a<=6;a++)
	{	
		YicipaizhaoShuZu.Add(a);
	}

	for (auto a : YicipaizhaoShuZu)
	{
		AOrbitPawn::OncePaizhao();
	}

}

void AOrbitPawn::XunHuanpaizhao()
{
	FTimerHandle timehandle;
	GetWorld()->GetTimerManager().SetTimer(timehandle, this, &AOrbitPawn::Zhixingpaizhao, PaizhaoJiangeInternavl, true);
	GEngine->AddOnScreenDebugMessage(-1,0.5,FColor::Green,"ScreenShotExcuted");

}

// Called when the game starts or when spawned
void AOrbitPawn::BeginPlay()
{
	Super::BeginPlay();

	WhenIPress_keyboard_1.AddUObject(this,&AOrbitPawn::XunHuanpaizhao);

	WhenIPress_keyboard_1.Broadcast();
	
}

// Called every frame
void AOrbitPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UOrbitingMovementComponent* myXZcomp = Cast<UOrbitingMovementComponent>(cusOrbitComp);
	if (myXZcomp != nullptr)
	{
		myXZcomp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform, NAME_None);
		myXZcomp->cusSubCamera->SetRelativeLocation(FVector(0, 0, Gaodu));
		myXZcomp->cusSubCamera->SetRelativeRotation(SheXiangjiFuYangjiao);
	}


}

// Called to bind functionality to input
void AOrbitPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	if (PlayerInputComponent != nullptr)
	{
		PlayerInputComponent->BindAction("DXJP", IE_Pressed, this, &AOrbitPawn::XunHuanpaizhao);

		//WhenIPress_keyboard_1.Broadcast();
	}

}


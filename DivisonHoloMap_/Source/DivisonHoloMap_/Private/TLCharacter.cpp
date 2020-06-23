// Fill out your copyright notice in the Description page of Project Settings.


#include "TLCharacter.h"

#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "..\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "..\Runtime\Engine\Classes\Engine\StaticMesh.h"
#include <Components/StaticMeshComponent.h>
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include <Engine/EngineTypes.h>
#include <UObject/UnrealNames.h>
#include "..\Runtime\Engine\Classes\Kismet\KismetMathLibrary.h"
#include "..\Runtime\Engine\Classes\Kismet\KismetMaterialLibrary.h"
#include "..\Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h"
#include "..\Runtime\Engine\Classes\Materials\MaterialParameterCollection.h"
#include <Kismet/GameplayStatics.h>
#include "Components/TimelineComponent.h"
#include "..\Runtime\Engine\Classes\Materials\MaterialInstance.h"
#include <Math/Vector.h>
#include <Engine/Engine.h>



void ATLCharacter::SetVisibilityForComp()
{
	MapMeshComp->SetVisibility(true);
	DirectionMeshComp->SetVisibility(true);
	GridComp->SetVisibility(true);
	HoloGraphicMapMeshComp->SetVisibility(true);
}

void ATLCharacter::ControlMapOpenScale()
{
	float TimelineValue=TL_MapOpenScale.GetPlaybackPosition();//拿到X轴
	float CurveFloatValue=Curve_MapOpenScale->GetFloatValue(TimelineValue);//根据X轴拿到Y轴值
	FVector NewScale=FVector(CurveFloatValue,CurveFloatValue,CurveFloatValue);
	
	Scene->SetRelativeScale3D(NewScale);
	HoloGraphicMapMeshComp->SetRelativeScale3D(NewScale);

	//TL_MapOpenScale.PlayFromStart();
}

void ATLCharacter::ControlMapOpenRadius()
{
	float TimelineValue = TL_MapOpenRadius.GetPlaybackPosition();//拿到X轴
	float CurveFloatValue = Curve_MapOpenRadius->GetFloatValue(TimelineValue);//根据X轴拿到Y轴值

	if (_ScalarParameter)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, _ScalarParameter, FName("Radius"), CurveFloatValue);
	}

	//TL_MapOpenRadius.PlayFromStart();
}

void ATLCharacter::ControlMapOpenSpringArm()
{
	float TimelineValue = TL_MapOpenSpringArm.GetPlaybackPosition();//拿到X轴
	float Length = Curve_MapOpenSpringArm->GetFloatValue(TimelineValue);//根据X轴拿到Y轴值
	CameraBoom->TargetArmLength=Length;
	GEngine->AddOnScreenDebugMessage(-1,3,FColor::Yellow, FString::Printf(TEXT("相机长度---- %f"), CameraBoom->TargetArmLength) );
	//TL_MapOpenSpringArm.PlayFromStart();
}

void ATLCharacter::TurnOffMapTransite()
{
	MapTransitioning=false;
}


void ATLCharacter::ControlMapCloseScale()
{
	float TimelineValue = TL_MapOpenScale.GetPlaybackPosition();//拿到X轴
	float CurveFloatValue = Curve_MapOpenScale->GetFloatValue(TimelineValue);//根据X轴拿到Y轴值
	FVector NewScale = FVector(CurveFloatValue, CurveFloatValue, CurveFloatValue);

	Scene->SetRelativeScale3D(NewScale);
	HoloGraphicMapMeshComp->SetRelativeScale3D(NewScale);
}


void ATLCharacter::ControlMapCloseRadius()
{
	float TimelineValue = TL_MapOpenRadius.GetPlaybackPosition();//拿到X轴
	float CurveFloatValue = Curve_MapOpenRadius->GetFloatValue(TimelineValue);//根据X轴拿到Y轴值

	if (_ScalarParameter)
	{
		UKismetMaterialLibrary::SetScalarParameterValue(this, _ScalarParameter, FName("Radius"), CurveFloatValue);
	}
}


void ATLCharacter::OnMapCloseRadiusFinished()
{
	HoloGraphicMapMeshComp->SetVisibility(false);
	DirectionMeshComp->SetVisibility(false);
	MapMeshComp->SetVisibility(false);
	GridComp->SetVisibility(false);
	MapTransitioning=false;
}

void ATLCharacter::ControlMapCloseSpringArm()
{
	//CameraBoom->TargetArmLength=800;
	float TimelineValue2 = TL_MapOpenSpringArm.GetPlaybackPosition();//拿到X轴
	float Length2 = Curve_MapOpenSpringArm->GetFloatValue(TimelineValue2);//根据X轴拿到Y轴值
	CameraBoom->TargetArmLength = Length2;
	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, FString::Printf(TEXT("结束时相机长度---- %f"), CameraBoom->TargetArmLength));

}

void ATLCharacter::OnMapCloseSpringArmFinished()
{
	MapTransitioning=false;
}

void ATLCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (Curve_MapOpenScale!=nullptr)
	{
		FOnTimelineFloatStatic MapOpenScaleCallback;
		MapOpenScaleCallback.BindUFunction(this,FName("ControlMapOpenScale"));
		TL_MapOpenScale.AddInterpFloat(Curve_MapOpenScale,MapOpenScaleCallback);
	}

	if (Curve_MapOpenRadius!=nullptr)
	{
		FOnTimelineFloatStatic MapOpenRadiusCallback;
		MapOpenRadiusCallback.BindUFunction(this,FName("ControlMapOpenRadius"));
		TL_MapOpenRadius.AddInterpFloat(Curve_MapOpenRadius,MapOpenRadiusCallback);
	}

	if (Curve_MapOpenSpringArm!=nullptr)
	{
		FOnTimelineFloatStatic MapOpenSpringArmCallback;
		FOnTimelineEventStatic MapOpenSpringArmFinishedCallback;
		MapOpenSpringArmCallback.BindUFunction(this, FName("ControlMapOpenSpringArm"));
		MapOpenSpringArmFinishedCallback.BindUFunction(this,FName("TurnOffMapTransite"));
		TL_MapOpenSpringArm.AddInterpFloat(Curve_MapOpenSpringArm, MapOpenSpringArmCallback);
		TL_MapOpenSpringArm.SetTimelineFinishedFunc(MapOpenSpringArmFinishedCallback);	
	}

	if (Curve_MapCloseScale!=nullptr)
	{
		FOnTimelineFloatStatic MapCloseScaleCallback;
		MapCloseScaleCallback.BindUFunction(this,FName("ControlMapCloseScale"));
		TL_MapCloseScale.AddInterpFloat(Curve_MapCloseScale,MapCloseScaleCallback);
	}

	if (Curve_MapCloseRadius!=nullptr)
	{
		FOnTimelineFloatStatic MapCloseRadiusCallback;
		FOnTimelineEventStatic MapCloseRadiusFinishedCallback;
		MapCloseRadiusCallback.BindUFunction(this,FName("ControlMapCloseRadius"));
		MapCloseRadiusFinishedCallback.BindUFunction(this,FName("OnMapCloseRadiusFinished"));
		TL_MapCloseRadius.AddInterpFloat(Curve_MapCloseRadius,MapCloseRadiusCallback);
		TL_MapCloseRadius.SetTimelineFinishedFunc(MapCloseRadiusFinishedCallback);
	}

	if (Curve_MapCloseSpringArm!=nullptr)
	{
		FOnTimelineFloatStatic MapCloseSpringArmCallback;
		FOnTimelineEventStatic MapCloseSpringArmFinishedCallback;
		MapCloseSpringArmCallback.BindUFunction(this, FName("ControlMapCloseSpringArm"));
		MapCloseSpringArmFinishedCallback.BindUFunction(this, FName("OnMapCloseSpringArmFinished"));
		TL_MapCloseSpringArm.AddInterpFloat(Curve_MapCloseSpringArm, MapCloseSpringArmCallback);
		TL_MapCloseSpringArm.SetTimelineFinishedFunc(MapCloseSpringArmFinishedCallback);
	}
}

void ATLCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);



	//
	FVector _1st=FVector((Scene->GetComponentLocation().X),(Scene->GetComponentLocation().Y), 0 );
	FVector _2nd=FVector( UKismetMathLibrary::NegateVector( _1st*0.015 ) );
	FVector _FinalVec=_2nd+FVector(0,0,-90);
	MapMeshComp->SetRelativeLocation(_FinalVec);
	////const FLinearColor& ParameterValue=Cast<FLinearColor&>(GetActorLocation());
	UKismetMaterialLibrary::SetVectorParameterValue(this,_VectorParameter, FName("Location"), GetActorLocation() );


	TL_MapCloseScale.TickTimeline(DeltaSeconds);
	TL_MapCloseRadius.TickTimeline(DeltaSeconds);
	TL_MapCloseSpringArm.TickTimeline(DeltaSeconds);

	//使timelineTL_MapOpenScale具备Tick功能
	TL_MapOpenScale.TickTimeline(DeltaSeconds);
	TL_MapOpenRadius.TickTimeline(DeltaSeconds);
	TL_MapOpenSpringArm.TickTimeline(DeltaSeconds);


}

void ATLCharacter::ToggleHoloMapDisplayAndSilent()
{
	
	FVector TempVec =UGameplayStatics::GetPlayerPawn(this,0)->GetVelocity();
	if (TempVec.Size()<=5.0f )
	{
		if (MapTransitioning==false&&MapOpen==false)
		{
			OpenMap();
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, "Execute 'OpenMap' In ToggleFun");
		}
		if (MapTransitioning == false && MapOpen == true)
		{
			_CloseMap();			
			GEngine->AddOnScreenDebugMessage(-1,5,FColor::Green,"Execute 'CloseMap' In ToggleFun");
		}
	}
}

void ATLCharacter::OpenMap()
{

	//APlayerController* myController=UGameplayStatics::GetPlayerController();
	//myController->
	//UGameplayStatics::GetPlayerPawn(this,0)->SetActorRelativeScale3D(FVector(2,2,2));

	MapOpen=true;
	MapTransitioning=true;
	SetVisibilityForComp();
	
	//ControlMapOpenScale();
	TL_MapOpenScale.PlayFromStart();
	//ControlMapOpenRadius();
	TL_MapOpenRadius.PlayFromStart();

	TL_MapOpenSpringArm.PlayFromStart();
	//ControlMapOpenSpringArm();

	//AController* myController=UGameplayStatics::GetPlayerController();
	//if (myController!=nullptr)
	//{
	//	auto TempPawn=myController->GetPawn();	
	//	ATLCharacter* MyControllingPawn=Cast<ATLCharacter>(TempPawn);
	//ATLCharacter* myRen=Cast<ATLCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	//if (myRen!=nullptr)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Castchenggong");

	//	//if (myRen->SetVisibilityForComp())
	//	//{
	//	//	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Black, "SetVischeng");
	//	//}
	//	//myRen->ControlMapOpenScale();
	//	//myRen->ControlMapOpenRadius();
	//	//myRen->ControlMapOpenSpringArm();
	//}		
}


void ATLCharacter::_CloseMap()
{
	MapTransitioning=true;
	MapOpen=false;	

	TL_MapCloseScale.PlayFromStart();
	TL_MapCloseRadius.PlayFromStart();
	//TL_MapCloseSpringArm.PlayFromStart();
	TL_MapOpenSpringArm.Reverse();	
}

//////////////////////////////////////////////////////////////////////////
// ATLCharacter

ATLCharacter::ATLCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	CameraBoom->SetMobility(EComponentMobility::Movable);

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)


	DirectionMeshComp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DirectionMeshComp"));
	DirectionMeshComp->SetupAttachment(RootComponent);
	DirectionMeshComp->SetMobility(EComponentMobility::Movable);
	DirectionMeshComp->SetRelativeLocation(FVector(0,0,-90));
	DirectionMeshComp->SetRelativeRotation(FRotator(0,-19.9,0));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaicMesh1(TEXT("StaticMesh'/DivisonHoloMap_/ThirdPersonBP/静态网格/compass.compass'"));
	DirectionMeshComp->SetStaticMesh(StaicMesh1.Object);

	Scene=CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	Scene->SetupAttachment(RootComponent);
	Scene->SetMobility(EComponentMobility::Movable);
	Scene->SetVisibility(true);

	MapMeshComp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MapMeshComp"));
	MapMeshComp->AttachToComponent(Scene,FAttachmentTransformRules::KeepRelativeTransform,NAME_None);
	MapMeshComp->SetRelativeLocation(FVector(0,0,-70));
	MapMeshComp->SetMobility(EComponentMobility::Movable);
	MapMeshComp->SetRelativeScale3D(FVector(0.015,0.015,0.015));
	MapMeshComp->SetVisibility(false);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaicMesh2(TEXT("StaticMesh'/DivisonHoloMap_/ThirdPerson/Meshes/Ramp_StaticMesh.Ramp_StaticMesh'"));
	MapMeshComp->SetStaticMesh(StaicMesh2.Object);
	static  ConstructorHelpers::FObjectFinder<UMaterialInstance> MatIntance1(TEXT("MaterialInstanceConstant'/DivisonHoloMap_/ThirdPersonBP/材质/M_NYC_Map_Inst.M_NYC_Map_Inst'"));
	MapMeshComp->SetMaterial(0, MatIntance1.Object);

	GridComp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GridComp"));
	GridComp->SetupAttachment(RootComponent);
	GridComp->SetRelativeLocation(FVector(0,0,-90));
	GridComp->SetRelativeRotation(FRotator(0,-20,0));
	GridComp->SetMobility(EComponentMobility::Movable);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMesh3(TEXT("StaticMesh'/DivisonHoloMap_/ThirdPersonBP/静态网格/compass_grid.compass_grid'"));
	GridComp->SetStaticMesh(StaticMesh3.Object);


	HoloGraphicMapMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HoloGraphicMapMeshComp"));
	HoloGraphicMapMeshComp->SetupAttachment(RootComponent);
	HoloGraphicMapMeshComp->SetRelativeLocation(FVector(0, 0, -90));
	HoloGraphicMapMeshComp->SetMobility(EComponentMobility::Movable);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMesh4(TEXT("StaticMesh'/DivisonHoloMap_/ThirdPersonBP/静态网格/DynamicMap01.DynamicMap01'"));
	HoloGraphicMapMeshComp->SetStaticMesh(StaticMesh4.Object);
	HoloGraphicMapMeshComp->SetVisibility(false);

	MapOpen=false;
	MapTransitioning=false;
	static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> _Collection1(TEXT("MaterialParameterCollection'/DivisonHoloMap_/ThirdPersonBP/Blueprints/PlayerLocation.PlayerLocation'"));
	_ScalarParameter=_Collection1.Object;

	static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> _Collection2(TEXT("MaterialParameterCollection'/DivisonHoloMap_/ThirdPersonBP/Blueprints/PlayerLocation.PlayerLocation'"));
	_VectorParameter=_Collection2.Object;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATLCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	//PlayerInputComponent->BindAction("FangDaRen", IE_Pressed, this, &ATLCharacter::OpenMap);
	PlayerInputComponent->BindAction("ToggleMapDisplay",IE_Pressed,this,&ATLCharacter::ToggleHoloMapDisplayAndSilent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATLCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATLCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ATLCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ATLCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ATLCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ATLCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ATLCharacter::OnResetVR);
}


void ATLCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATLCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ATLCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ATLCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ATLCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ATLCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ATLCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

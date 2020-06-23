// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Components/StaticMeshComponent.h>
#include <Components/SceneComponent.h>
#include <Curves/CurveFloat.h>
#include <Components/TimelineComponent.h>
#include "TLCharacter.generated.h"

UCLASS(config = Game)
class DIVISONHOLOMAP__API ATLCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

public:
	//两个在构造方法里给定值的变量资源，便于后期方法使用Uasset
	UPROPERTY()
	UMaterialParameterCollection* _ScalarParameter;
	UPROPERTY()
	UMaterialParameterCollection* _VectorParameter;



	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AMyProperty")
	UStaticMeshComponent* DirectionMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AMyProperty")
	USceneComponent* Scene;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AMyProperty")
	UStaticMeshComponent* MapMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AMyProperty")
	UStaticMeshComponent* GridComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AMyProperty")
	UStaticMeshComponent* HoloGraphicMapMeshComp;

	//自带布尔值
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ZiDai")
	bool MapOpen;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "ZiDai")
	bool MapTransitioning;

	//设置各组件显示
	UFUNCTION(BlueprintCallable,Category = "Events|OpenMap|Sub")
	void SetVisibilityForComp();

	//TimeLine MapOpenScale
	FTimeline TL_MapOpenScale;
	UFUNCTION(BlueprintCallable,/*BlueprintNativeEvent,*/Category = "Events|OpenMap|Sub")
	void ControlMapOpenScale();
	UPROPERTY(EditAnywhere, Category = "CurveSeries")
	UCurveFloat* Curve_MapOpenScale;


	//Timeline MapOpenRadius
	FTimeline TL_MapOpenRadius;
	UFUNCTION(BlueprintCallable, Category = "Events|OpenMap|Sub")
	void ControlMapOpenRadius();
	UPROPERTY(EditAnywhere, Category = "CurveSeries")
	UCurveFloat* Curve_MapOpenRadius;

	//Timeline MapOpenSpringArm
	FTimeline TL_MapOpenSpringArm;
	UFUNCTION(BlueprintCallable, Category = "Events|OpenMap|Sub")
	void ControlMapOpenSpringArm();
	UFUNCTION(BlueprintCallable, Category = "Events|OpenMap|Sub")
	void TurnOffMapTransite();
	UPROPERTY(EditAnywhere, Category = "CurveSeries")
	UCurveFloat* Curve_MapOpenSpringArm;

	//Timeline MapCloseScale
	FTimeline TL_MapCloseScale;
	UFUNCTION(BlueprintCallable,Category="Events|CloseMap|Sub")
	void ControlMapCloseScale();
	UPROPERTY(EditAnywhere,Category="CurveSeries")
	UCurveFloat* Curve_MapCloseScale;

	//Timeline MapCloseRadius
	FTimeline TL_MapCloseRadius;
	UFUNCTION(BlueprintCallable, Category = "Events|CloseMap|Sub")
		void ControlMapCloseRadius();
	UPROPERTY(EditAnywhere, Category = "CurveSeries")
		UCurveFloat* Curve_MapCloseRadius;
	UFUNCTION(BlueprintCallable, Category = "Events|CloseMap|Sub")
	void OnMapCloseRadiusFinished();

	//Timeline MapCloseSpringArm
	FTimeline TL_MapCloseSpringArm;
	UFUNCTION(BlueprintCallable,Category= "Events|CloseMap|Sub")
	void ControlMapCloseSpringArm();
	UPROPERTY(EditAnywhere,Category="CurveSeries")
	UCurveFloat* Curve_MapCloseSpringArm;
	UFUNCTION(BlueprintCallable, Category = "Events|CloseMap|Sub")
	void OnMapCloseSpringArmFinished();

public:
	TSubclassOf<ATLCharacter> _ren; 

public:
	virtual void BeginPlay() override;
	//UFUNCTION(BlueprintCallable,BlueprintNativeEvent,Category="OriginalEvents")
	virtual void Tick(float DeltaSeconds) override;
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface
public:

	/*大功能函数,按键事件*/
	UFUNCTION()
	void ToggleHoloMapDisplayAndSilent();

public:
	/*全息开关调用的子函数*/
	UFUNCTION(BlueprintCallable,/*BlueprintNativeEvent,*/Category="Events|OpenMap")
	void OpenMap();
	UFUNCTION(BlueprintCallable,Category = "Events|CloseMap")
	void _CloseMap();	

public:
	//构造函数
	ATLCharacter();
	

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

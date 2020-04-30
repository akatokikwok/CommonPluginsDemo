// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
 //照片类型枚举
UENUM(BlueprintType)
enum class EImageFormatType : uint8
{
	PNG,
	JPEG,
	EXR,
};

UCLASS()
class DXJP__API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	static void OnScreenshotCapturedInternal(int32 Width, int32 Height, const TArray<FColor>& Bitmap);

	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = "1"), Category = "TalkCameraDebug")
		void TakeScreenShot(const FString fineName = FString(TEXT("ScreenShot")), EImageFormatType _format = EImageFormatType::PNG, int32 _quality = 100, bool bInsertTimeStampToFileName = false, bool bInShowUI = false, bool bAddFilenameSuffix = false);

	UFUNCTION(BlueprintCallable, Category = "OpenFlie")
		TArray<FString> ReturnWOpenFlies();

	static  UTexture2D* GetTexture2DFromDiskFile(const FString& FilePath);
	//载入图像
	UFUNCTION(Category = "ExtendedContent|File", BlueprintCallable)
		UTexture2D* LoadTexture2D(const FString& ImagePath, bool& IsValid, int32& OutWidth, int32& OutHeight);
	
};

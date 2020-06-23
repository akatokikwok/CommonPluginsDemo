// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivisonHoloMap_/Public/TLCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTLCharacter() {}
// Cross Module References
	DIVISONHOLOMAP__API UClass* Z_Construct_UClass_ATLCharacter_NoRegister();
	DIVISONHOLOMAP__API UClass* Z_Construct_UClass_ATLCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DivisonHoloMap_();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATLCharacter::exec_CloseMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->_CloseMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execOpenMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execToggleHoloMapDisplayAndSilent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleHoloMapDisplayAndSilent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execOnMapCloseSpringArmFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapCloseSpringArmFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execControlMapCloseSpringArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlMapCloseSpringArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execOnMapCloseRadiusFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapCloseRadiusFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execControlMapCloseRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlMapCloseRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execControlMapCloseScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlMapCloseScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execTurnOffMapTransite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnOffMapTransite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execControlMapOpenSpringArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlMapOpenSpringArm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execControlMapOpenRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlMapOpenRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execControlMapOpenScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlMapOpenScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATLCharacter::execSetVisibilityForComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityForComp();
		P_NATIVE_END;
	}
	void ATLCharacter::StaticRegisterNativesATLCharacter()
	{
		UClass* Class = ATLCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "_CloseMap", &ATLCharacter::exec_CloseMap },
			{ "ControlMapCloseRadius", &ATLCharacter::execControlMapCloseRadius },
			{ "ControlMapCloseScale", &ATLCharacter::execControlMapCloseScale },
			{ "ControlMapCloseSpringArm", &ATLCharacter::execControlMapCloseSpringArm },
			{ "ControlMapOpenRadius", &ATLCharacter::execControlMapOpenRadius },
			{ "ControlMapOpenScale", &ATLCharacter::execControlMapOpenScale },
			{ "ControlMapOpenSpringArm", &ATLCharacter::execControlMapOpenSpringArm },
			{ "OnMapCloseRadiusFinished", &ATLCharacter::execOnMapCloseRadiusFinished },
			{ "OnMapCloseSpringArmFinished", &ATLCharacter::execOnMapCloseSpringArmFinished },
			{ "OpenMap", &ATLCharacter::execOpenMap },
			{ "SetVisibilityForComp", &ATLCharacter::execSetVisibilityForComp },
			{ "ToggleHoloMapDisplayAndSilent", &ATLCharacter::execToggleHoloMapDisplayAndSilent },
			{ "TurnOffMapTransite", &ATLCharacter::execTurnOffMapTransite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATLCharacter__CloseMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter__CloseMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|CloseMap" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter__CloseMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "_CloseMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter__CloseMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter__CloseMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter__CloseMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter__CloseMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|CloseMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ControlMapCloseRadius", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|CloseMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ControlMapCloseScale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|CloseMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ControlMapCloseSpringArm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|OpenMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ControlMapOpenRadius", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|OpenMap|Sub" },
		{ "Comment", "/*BlueprintNativeEvent,*/" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "BlueprintNativeEvent," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ControlMapOpenScale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|OpenMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ControlMapOpenSpringArm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|CloseMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "OnMapCloseRadiusFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|CloseMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "OnMapCloseSpringArmFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_OpenMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_OpenMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|OpenMap" },
		{ "Comment", "/*BlueprintNativeEvent,*/" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "BlueprintNativeEvent," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_OpenMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "OpenMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_OpenMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_OpenMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_OpenMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_OpenMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|OpenMap|Sub" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe5\x90\x84\xe7\xbb\x84\xe4\xbb\xb6\xe6\x98\xbe\xe7\xa4\xba\n" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\x90\x84\xe7\xbb\x84\xe4\xbb\xb6\xe6\x98\xbe\xe7\xa4\xba" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "SetVisibilityForComp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\xe5\xa4\xa7\xe5\x8a\x9f\xe8\x83\xbd\xe5\x87\xbd\xe6\x95\xb0,\xe6\x8c\x89\xe9\x94\xae\xe4\xba\x8b\xe4\xbb\xb6*/" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "\xe5\xa4\xa7\xe5\x8a\x9f\xe8\x83\xbd\xe5\x87\xbd\xe6\x95\xb0,\xe6\x8c\x89\xe9\x94\xae\xe4\xba\x8b\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "ToggleHoloMapDisplayAndSilent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events|OpenMap|Sub" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATLCharacter, nullptr, "TurnOffMapTransite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATLCharacter_NoRegister()
	{
		return ATLCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATLCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MapCloseSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve_MapCloseSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MapCloseRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve_MapCloseRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MapCloseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve_MapCloseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MapOpenSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve_MapOpenSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MapOpenRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve_MapOpenRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MapOpenScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve_MapOpenScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTransitioning_MetaData[];
#endif
		static void NewProp_MapTransitioning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MapTransitioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapOpen_MetaData[];
#endif
		static void NewProp_MapOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MapOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloGraphicMapMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoloGraphicMapMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectionMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__VectorParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__VectorParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ScalarParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ScalarParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATLCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DivisonHoloMap_,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATLCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATLCharacter__CloseMap, "_CloseMap" }, // 1090325685
		{ &Z_Construct_UFunction_ATLCharacter_ControlMapCloseRadius, "ControlMapCloseRadius" }, // 2367331569
		{ &Z_Construct_UFunction_ATLCharacter_ControlMapCloseScale, "ControlMapCloseScale" }, // 1462385011
		{ &Z_Construct_UFunction_ATLCharacter_ControlMapCloseSpringArm, "ControlMapCloseSpringArm" }, // 3674489539
		{ &Z_Construct_UFunction_ATLCharacter_ControlMapOpenRadius, "ControlMapOpenRadius" }, // 104173745
		{ &Z_Construct_UFunction_ATLCharacter_ControlMapOpenScale, "ControlMapOpenScale" }, // 1298505889
		{ &Z_Construct_UFunction_ATLCharacter_ControlMapOpenSpringArm, "ControlMapOpenSpringArm" }, // 159765720
		{ &Z_Construct_UFunction_ATLCharacter_OnMapCloseRadiusFinished, "OnMapCloseRadiusFinished" }, // 4130609470
		{ &Z_Construct_UFunction_ATLCharacter_OnMapCloseSpringArmFinished, "OnMapCloseSpringArmFinished" }, // 53482766
		{ &Z_Construct_UFunction_ATLCharacter_OpenMap, "OpenMap" }, // 993366949
		{ &Z_Construct_UFunction_ATLCharacter_SetVisibilityForComp, "SetVisibilityForComp" }, // 876372344
		{ &Z_Construct_UFunction_ATLCharacter_ToggleHoloMapDisplayAndSilent, "ToggleHoloMapDisplayAndSilent" }, // 3353685288
		{ &Z_Construct_UFunction_ATLCharacter_TurnOffMapTransite, "TurnOffMapTransite" }, // 2768010309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TLCharacter.h" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseSpringArm_MetaData[] = {
		{ "Category", "CurveSeries" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseSpringArm = { "Curve_MapCloseSpringArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Curve_MapCloseSpringArm), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseRadius_MetaData[] = {
		{ "Category", "CurveSeries" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseRadius = { "Curve_MapCloseRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Curve_MapCloseRadius), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseScale_MetaData[] = {
		{ "Category", "CurveSeries" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseScale = { "Curve_MapCloseScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Curve_MapCloseScale), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenSpringArm_MetaData[] = {
		{ "Category", "CurveSeries" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenSpringArm = { "Curve_MapOpenSpringArm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Curve_MapOpenSpringArm), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenRadius_MetaData[] = {
		{ "Category", "CurveSeries" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenRadius = { "Curve_MapOpenRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Curve_MapOpenRadius), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenScale_MetaData[] = {
		{ "Category", "CurveSeries" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenScale = { "Curve_MapOpenScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Curve_MapOpenScale), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning_MetaData[] = {
		{ "Category", "ZiDai" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning_SetBit(void* Obj)
	{
		((ATLCharacter*)Obj)->MapTransitioning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning = { "MapTransitioning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATLCharacter), &Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen_MetaData[] = {
		{ "Category", "ZiDai" },
		{ "Comment", "//\xe8\x87\xaa\xe5\xb8\xa6\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc\n" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\xb8\xa6\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
	};
#endif
	void Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen_SetBit(void* Obj)
	{
		((ATLCharacter*)Obj)->MapOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen = { "MapOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATLCharacter), &Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_HoloGraphicMapMeshComp_MetaData[] = {
		{ "Category", "AMyProperty" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_HoloGraphicMapMeshComp = { "HoloGraphicMapMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, HoloGraphicMapMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_HoloGraphicMapMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_HoloGraphicMapMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_GridComp_MetaData[] = {
		{ "Category", "AMyProperty" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_GridComp = { "GridComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, GridComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_GridComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_GridComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapMeshComp_MetaData[] = {
		{ "Category", "AMyProperty" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapMeshComp = { "MapMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, MapMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "AMyProperty" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_DirectionMeshComp_MetaData[] = {
		{ "Category", "AMyProperty" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_DirectionMeshComp = { "DirectionMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, DirectionMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_DirectionMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_DirectionMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp__VectorParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp__VectorParameter = { "_VectorParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, _VectorParameter), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp__VectorParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp__VectorParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp__ScalarParameter_MetaData[] = {
		{ "Comment", "//\xe4\xb8\xa4\xe4\xb8\xaa\xe5\x9c\xa8\xe6\x9e\x84\xe9\x80\xa0\xe6\x96\xb9\xe6\xb3\x95\xe9\x87\x8c\xe7\xbb\x99\xe5\xae\x9a\xe5\x80\xbc\xe7\x9a\x84\xe5\x8f\x98\xe9\x87\x8f\xe8\xb5\x84\xe6\xba\x90\xef\xbc\x8c\xe4\xbe\xbf\xe4\xba\x8e\xe5\x90\x8e\xe6\x9c\x9f\xe6\x96\xb9\xe6\xb3\x95\xe4\xbd\xbf\xe7\x94\xa8Uasset\n" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "\xe4\xb8\xa4\xe4\xb8\xaa\xe5\x9c\xa8\xe6\x9e\x84\xe9\x80\xa0\xe6\x96\xb9\xe6\xb3\x95\xe9\x87\x8c\xe7\xbb\x99\xe5\xae\x9a\xe5\x80\xbc\xe7\x9a\x84\xe5\x8f\x98\xe9\x87\x8f\xe8\xb5\x84\xe6\xba\x90\xef\xbc\x8c\xe4\xbe\xbf\xe4\xba\x8e\xe5\x90\x8e\xe6\x9c\x9f\xe6\x96\xb9\xe6\xb3\x95\xe4\xbd\xbf\xe7\x94\xa8Uasset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp__ScalarParameter = { "_ScalarParameter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, _ScalarParameter), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp__ScalarParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp__ScalarParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATLCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TLCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATLCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATLCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATLCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapCloseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Curve_MapOpenScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapTransitioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_HoloGraphicMapMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_GridComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_MapMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_DirectionMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp__VectorParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp__ScalarParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATLCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATLCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATLCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATLCharacter_Statics::ClassParams = {
		&ATLCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATLCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATLCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATLCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATLCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATLCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATLCharacter, 710478891);
	template<> DIVISONHOLOMAP__API UClass* StaticClass<ATLCharacter>()
	{
		return ATLCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATLCharacter(Z_Construct_UClass_ATLCharacter, &ATLCharacter::StaticClass, TEXT("/Script/DivisonHoloMap_"), TEXT("ATLCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATLCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

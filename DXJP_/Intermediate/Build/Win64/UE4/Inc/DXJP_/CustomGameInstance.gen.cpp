// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DXJP_/Jieping/CustomGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameInstance() {}
// Cross Module References
	DXJP__API UEnum* Z_Construct_UEnum_DXJP__EImageFormatType();
	UPackage* Z_Construct_UPackage__Script_DXJP_();
	DXJP__API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	DXJP__API UClass* Z_Construct_UClass_UCustomGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	DXJP__API UFunction* Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DXJP__API UFunction* Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies();
	DXJP__API UFunction* Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot();
// End Cross Module References
	static UEnum* EImageFormatType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DXJP__EImageFormatType, Z_Construct_UPackage__Script_DXJP_(), TEXT("EImageFormatType"));
		}
		return Singleton;
	}
	template<> DXJP__API UEnum* StaticEnum<EImageFormatType>()
	{
		return EImageFormatType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImageFormatType(EImageFormatType_StaticEnum, TEXT("/Script/DXJP_"), TEXT("EImageFormatType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DXJP__EImageFormatType_Hash() { return 3842751390U; }
	UEnum* Z_Construct_UEnum_DXJP__EImageFormatType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DXJP_();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImageFormatType"), 0, Get_Z_Construct_UEnum_DXJP__EImageFormatType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImageFormatType::PNG", (int64)EImageFormatType::PNG },
				{ "EImageFormatType::JPEG", (int64)EImageFormatType::JPEG },
				{ "EImageFormatType::EXR", (int64)EImageFormatType::EXR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Jieping/CustomGameInstance.h" },
				{ "ToolTip", "//\xe7\x85\xa7\xe7\x89\x87\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DXJP_,
				nullptr,
				"EImageFormatType",
				"EImageFormatType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCustomGameInstance::StaticRegisterNativesUCustomGameInstance()
	{
		UClass* Class = UCustomGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadTexture2D", &UCustomGameInstance::execLoadTexture2D },
			{ "ReturnWOpenFlies", &UCustomGameInstance::execReturnWOpenFlies },
			{ "TakeScreenShot", &UCustomGameInstance::execTakeScreenShot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics
	{
		struct CustomGameInstance_eventLoadTexture2D_Parms
		{
			FString ImagePath;
			bool IsValid;
			int32 OutWidth;
			int32 OutHeight;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutWidth;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventLoadTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventLoadTexture2D_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventLoadTexture2D_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((CustomGameInstance_eventLoadTexture2D_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomGameInstance_eventLoadTexture2D_Parms), &Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventLoadTexture2D_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ImagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_OutHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_OutWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::NewProp_ImagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedContent|File" },
		{ "ModuleRelativePath", "Jieping/CustomGameInstance.h" },
		{ "ToolTip", "\xe8\xbd\xbd\xe5\x85\xa5\xe5\x9b\xbe\xe5\x83\x8f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameInstance, nullptr, "LoadTexture2D", sizeof(CustomGameInstance_eventLoadTexture2D_Parms), Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics
	{
		struct CustomGameInstance_eventReturnWOpenFlies_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventReturnWOpenFlies_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenFlie" },
		{ "ModuleRelativePath", "Jieping/CustomGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameInstance, nullptr, "ReturnWOpenFlies", sizeof(CustomGameInstance_eventReturnWOpenFlies_Parms), Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics
	{
		struct CustomGameInstance_eventTakeScreenShot_Parms
		{
			FString fineName;
			EImageFormatType _format;
			int32 _quality;
			bool bInsertTimeStampToFileName;
			bool bInShowUI;
			bool bAddFilenameSuffix;
		};
		static void NewProp_bAddFilenameSuffix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddFilenameSuffix;
		static void NewProp_bInShowUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShowUI;
		static void NewProp_bInsertTimeStampToFileName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInsertTimeStampToFileName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__quality;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__format_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bAddFilenameSuffix_SetBit(void* Obj)
	{
		((CustomGameInstance_eventTakeScreenShot_Parms*)Obj)->bAddFilenameSuffix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bAddFilenameSuffix = { "bAddFilenameSuffix", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomGameInstance_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bAddFilenameSuffix_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInShowUI_SetBit(void* Obj)
	{
		((CustomGameInstance_eventTakeScreenShot_Parms*)Obj)->bInShowUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInShowUI = { "bInShowUI", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomGameInstance_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInShowUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInsertTimeStampToFileName_SetBit(void* Obj)
	{
		((CustomGameInstance_eventTakeScreenShot_Parms*)Obj)->bInsertTimeStampToFileName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInsertTimeStampToFileName = { "bInsertTimeStampToFileName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomGameInstance_eventTakeScreenShot_Parms), &Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInsertTimeStampToFileName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp__quality = { "_quality", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventTakeScreenShot_Parms, _quality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp__format = { "_format", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventTakeScreenShot_Parms, _format), Z_Construct_UEnum_DXJP__EImageFormatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp__format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_fineName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_fineName = { "fineName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomGameInstance_eventTakeScreenShot_Parms, fineName), METADATA_PARAMS(Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_fineName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_fineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bAddFilenameSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInShowUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_bInsertTimeStampToFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp__quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp__format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp__format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::NewProp_fineName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "TalkCameraDebug" },
		{ "CPP_Default__format", "PNG" },
		{ "CPP_Default__quality", "100" },
		{ "CPP_Default_bAddFilenameSuffix", "false" },
		{ "CPP_Default_bInsertTimeStampToFileName", "false" },
		{ "CPP_Default_bInShowUI", "false" },
		{ "CPP_Default_fineName", "ScreenShot" },
		{ "ModuleRelativePath", "Jieping/CustomGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameInstance, nullptr, "TakeScreenShot", sizeof(CustomGameInstance_eventTakeScreenShot_Parms), Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister()
	{
		return UCustomGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DXJP_,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameInstance_LoadTexture2D, "LoadTexture2D" }, // 1934357922
		{ &Z_Construct_UFunction_UCustomGameInstance_ReturnWOpenFlies, "ReturnWOpenFlies" }, // 2217855916
		{ &Z_Construct_UFunction_UCustomGameInstance_TakeScreenShot, "TakeScreenShot" }, // 659007578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jieping/CustomGameInstance.h" },
		{ "ModuleRelativePath", "Jieping/CustomGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams = {
		&UCustomGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomGameInstance, 1528963039);
	template<> DXJP__API UClass* StaticClass<UCustomGameInstance>()
	{
		return UCustomGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomGameInstance(Z_Construct_UClass_UCustomGameInstance, &UCustomGameInstance::StaticClass, TEXT("/Script/DXJP_"), TEXT("UCustomGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

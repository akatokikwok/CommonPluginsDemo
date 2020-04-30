// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DXJP_/Jieping/T_JieTuCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_JieTuCharacter() {}
// Cross Module References
	DXJP__API UClass* Z_Construct_UClass_AT_JieTuCharacter_NoRegister();
	DXJP__API UClass* Z_Construct_UClass_AT_JieTuCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DXJP_();
// End Cross Module References
	void AT_JieTuCharacter::StaticRegisterNativesAT_JieTuCharacter()
	{
	}
	UClass* Z_Construct_UClass_AT_JieTuCharacter_NoRegister()
	{
		return AT_JieTuCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AT_JieTuCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT_JieTuCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DXJP_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT_JieTuCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Jieping/T_JieTuCharacter.h" },
		{ "ModuleRelativePath", "Jieping/T_JieTuCharacter.h" },
		{ "ToolTip", "DECLARE_EVENT(AT_JieTuCharacter, FWhenIPress_keyboard_1)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT_JieTuCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_JieTuCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT_JieTuCharacter_Statics::ClassParams = {
		&AT_JieTuCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT_JieTuCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT_JieTuCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT_JieTuCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT_JieTuCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT_JieTuCharacter, 3093158554);
	template<> DXJP__API UClass* StaticClass<AT_JieTuCharacter>()
	{
		return AT_JieTuCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT_JieTuCharacter(Z_Construct_UClass_AT_JieTuCharacter, &AT_JieTuCharacter::StaticClass, TEXT("/Script/DXJP_"), TEXT("AT_JieTuCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT_JieTuCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

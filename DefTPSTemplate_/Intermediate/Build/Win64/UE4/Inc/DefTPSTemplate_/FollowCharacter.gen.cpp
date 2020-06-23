// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefTPSTemplate_/AI_Chase/FollowCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFollowCharacter() {}
// Cross Module References
	DEFTPSTEMPLATE__API UClass* Z_Construct_UClass_AFollowCharacter_NoRegister();
	DEFTPSTEMPLATE__API UClass* Z_Construct_UClass_AFollowCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DefTPSTemplate_();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AFollowCharacter::StaticRegisterNativesAFollowCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFollowCharacter_NoRegister()
	{
		return AFollowCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFollowCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotBehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFollowCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DefTPSTemplate_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Chase/FollowCharacter.h" },
		{ "ModuleRelativePath", "AI_Chase/FollowCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowCharacter_Statics::NewProp_BotBehaviorTree_MetaData[] = {
		{ "Category", "BehaviorTree" },
		{ "ModuleRelativePath", "AI_Chase/FollowCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFollowCharacter_Statics::NewProp_BotBehaviorTree = { "BotBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFollowCharacter, BotBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFollowCharacter_Statics::NewProp_BotBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowCharacter_Statics::NewProp_BotBehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFollowCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFollowCharacter_Statics::NewProp_BotBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFollowCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFollowCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFollowCharacter_Statics::ClassParams = {
		&AFollowCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFollowCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFollowCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFollowCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFollowCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFollowCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFollowCharacter, 3412558683);
	template<> DEFTPSTEMPLATE__API UClass* StaticClass<AFollowCharacter>()
	{
		return AFollowCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFollowCharacter(Z_Construct_UClass_AFollowCharacter, &AFollowCharacter::StaticClass, TEXT("/Script/DefTPSTemplate_"), TEXT("AFollowCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFollowCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

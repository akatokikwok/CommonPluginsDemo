// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefTPSTemplate_/AI_Chase/FollowAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFollowAI() {}
// Cross Module References
	DEFTPSTEMPLATE__API UClass* Z_Construct_UClass_AFollowAI_NoRegister();
	DEFTPSTEMPLATE__API UClass* Z_Construct_UClass_AFollowAI();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_DefTPSTemplate_();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	void AFollowAI::StaticRegisterNativesAFollowAI()
	{
	}
	UClass* Z_Construct_UClass_AFollowAI_NoRegister()
	{
		return AFollowAI::StaticClass();
	}
	struct Z_Construct_UClass_AFollowAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFollowAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DefTPSTemplate_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowAI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_Chase/FollowAI.h" },
		{ "ModuleRelativePath", "AI_Chase/FollowAI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowAI_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "Category", "FollowAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI_Chase/FollowAI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFollowAI_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFollowAI, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFollowAI_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowAI_Statics::NewProp_BlackboardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowAI_Statics::NewProp_BehaviorComp_MetaData[] = {
		{ "Category", "FollowAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI_Chase/FollowAI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFollowAI_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFollowAI, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFollowAI_Statics::NewProp_BehaviorComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowAI_Statics::NewProp_BehaviorComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFollowAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFollowAI_Statics::NewProp_BlackboardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFollowAI_Statics::NewProp_BehaviorComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFollowAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFollowAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFollowAI_Statics::ClassParams = {
		&AFollowAI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFollowAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFollowAI_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFollowAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFollowAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFollowAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFollowAI, 4120499070);
	template<> DEFTPSTEMPLATE__API UClass* StaticClass<AFollowAI>()
	{
		return AFollowAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFollowAI(Z_Construct_UClass_AFollowAI, &AFollowAI::StaticClass, TEXT("/Script/DefTPSTemplate_"), TEXT("AFollowAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFollowAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DXJP_/Dianxuan/OrbitPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbitPawn() {}
// Cross Module References
	DXJP__API UClass* Z_Construct_UClass_AOrbitPawn_NoRegister();
	DXJP__API UClass* Z_Construct_UClass_AOrbitPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DXJP_();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DXJP__API UClass* Z_Construct_UClass_UOrbitingMovementComponent_NoRegister();
	DXJP__API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
// End Cross Module References
	void AOrbitPawn::StaticRegisterNativesAOrbitPawn()
	{
	}
	UClass* Z_Construct_UClass_AOrbitPawn_NoRegister()
	{
		return AOrbitPawn::StaticClass();
	}
	struct Z_Construct_UClass_AOrbitPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaizhaoJiangeInternavl_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaizhaoJiangeInternavl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SheXiangjiFuYangjiao_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SheXiangjiFuYangjiao;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gaodu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gaodu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cusZhuCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cusZhuCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cusOrbitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cusOrbitComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tempGIns_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tempGIns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrbitPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DXJP_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Dianxuan/OrbitPawn.h" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::NewProp_PaizhaoJiangeInternavl_MetaData[] = {
		{ "Category", "XuanZhuanZuJian" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrbitPawn_Statics::NewProp_PaizhaoJiangeInternavl = { "PaizhaoJiangeInternavl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbitPawn, PaizhaoJiangeInternavl), METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_PaizhaoJiangeInternavl_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_PaizhaoJiangeInternavl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::NewProp_SheXiangjiFuYangjiao_MetaData[] = {
		{ "Category", "XuanZhuanZuJian" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrbitPawn_Statics::NewProp_SheXiangjiFuYangjiao = { "SheXiangjiFuYangjiao", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbitPawn, SheXiangjiFuYangjiao), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_SheXiangjiFuYangjiao_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_SheXiangjiFuYangjiao_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::NewProp_Gaodu_MetaData[] = {
		{ "Category", "XuanZhuanZuJian" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrbitPawn_Statics::NewProp_Gaodu = { "Gaodu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbitPawn, Gaodu), METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_Gaodu_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_Gaodu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusZhuCube_MetaData[] = {
		{ "Category", "XuanZhuanZuJian" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusZhuCube = { "cusZhuCube", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbitPawn, cusZhuCube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusZhuCube_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusZhuCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusOrbitComp_MetaData[] = {
		{ "Category", "XuanZhuanZuJian" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusOrbitComp = { "cusOrbitComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbitPawn, cusOrbitComp), Z_Construct_UClass_UOrbitingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusOrbitComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusOrbitComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitPawn_Statics::NewProp_tempGIns_MetaData[] = {
		{ "Category", "Gins" },
		{ "ModuleRelativePath", "Dianxuan/OrbitPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrbitPawn_Statics::NewProp_tempGIns = { "tempGIns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbitPawn, tempGIns), Z_Construct_UClass_UCustomGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_tempGIns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::NewProp_tempGIns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrbitPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitPawn_Statics::NewProp_PaizhaoJiangeInternavl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitPawn_Statics::NewProp_SheXiangjiFuYangjiao,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitPawn_Statics::NewProp_Gaodu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusZhuCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitPawn_Statics::NewProp_cusOrbitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitPawn_Statics::NewProp_tempGIns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrbitPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrbitPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrbitPawn_Statics::ClassParams = {
		&AOrbitPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOrbitPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOrbitPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOrbitPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrbitPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrbitPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrbitPawn, 469513876);
	template<> DXJP__API UClass* StaticClass<AOrbitPawn>()
	{
		return AOrbitPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrbitPawn(Z_Construct_UClass_AOrbitPawn, &AOrbitPawn::StaticClass, TEXT("/Script/DXJP_"), TEXT("AOrbitPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrbitPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

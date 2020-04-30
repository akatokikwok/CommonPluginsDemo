// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DXJP_/Dianxuan/OrbitingMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbitingMovementComponent() {}
// Cross Module References
	DXJP__API UClass* Z_Construct_UClass_UOrbitingMovementComponent_NoRegister();
	DXJP__API UClass* Z_Construct_UClass_UOrbitingMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DXJP_();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void UOrbitingMovementComponent::StaticRegisterNativesUOrbitingMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UOrbitingMovementComponent_NoRegister()
	{
		return UOrbitingMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOrbitingMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cusSubCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cusSubCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateToFaceOutside_MetaData[];
#endif
		static void NewProp_bRotateToFaceOutside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateToFaceOutside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrbitingMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DXJP_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Dianxuan/OrbitingMovementComponent.h" },
		{ "ModuleRelativePath", "Dianxuan/OrbitingMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_cusSubCamera_MetaData[] = {
		{ "Category", "XuanZhuanCustom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dianxuan/OrbitingMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_cusSubCamera = { "cusSubCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrbitingMovementComponent, cusSubCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_cusSubCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_cusSubCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance_MetaData[] = {
		{ "Category", "XuanZhuanCustom" },
		{ "ModuleRelativePath", "Dianxuan/OrbitingMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance = { "OrbitDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrbitingMovementComponent, OrbitDistance), METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside_MetaData[] = {
		{ "ModuleRelativePath", "Dianxuan/OrbitingMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside_SetBit(void* Obj)
	{
		((UOrbitingMovementComponent*)Obj)->bRotateToFaceOutside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside = { "bRotateToFaceOutside", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOrbitingMovementComponent), &Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "XuanZhuanCustom" },
		{ "ModuleRelativePath", "Dianxuan/OrbitingMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOrbitingMovementComponent, RotationRate), METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrbitingMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_cusSubCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_OrbitDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_bRotateToFaceOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrbitingMovementComponent_Statics::NewProp_RotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrbitingMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrbitingMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOrbitingMovementComponent_Statics::ClassParams = {
		&UOrbitingMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrbitingMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOrbitingMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOrbitingMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrbitingMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOrbitingMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOrbitingMovementComponent, 4001038459);
	template<> DXJP__API UClass* StaticClass<UOrbitingMovementComponent>()
	{
		return UOrbitingMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOrbitingMovementComponent(Z_Construct_UClass_UOrbitingMovementComponent, &UOrbitingMovementComponent::StaticClass, TEXT("/Script/DXJP_"), TEXT("UOrbitingMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrbitingMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUtility/Public/ParserPropertyLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParserPropertyLibrary() {}
// Cross Module References
	COMMONUTILITY_API UClass* Z_Construct_UClass_UParserPropertyLibrary_NoRegister();
	COMMONUTILITY_API UClass* Z_Construct_UClass_UParserPropertyLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CommonUtility();
	COMMONUTILITY_API UFunction* Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UParserPropertyLibrary::StaticRegisterNativesUParserPropertyLibrary()
	{
		UClass* Class = UParserPropertyLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccessPropertyByName", &UParserPropertyLibrary::execAccessPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics
	{
		struct ParserPropertyLibrary_eventAccessPropertyByName_Parms
		{
			UObject* Object;
			FName PropertyName;
			int32 Value;
			bool bSetter;
		};
		static void NewProp_bSetter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_bSetter_SetBit(void* Obj)
	{
		((ParserPropertyLibrary_eventAccessPropertyByName_Parms*)Obj)->bSetter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_bSetter = { "bSetter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParserPropertyLibrary_eventAccessPropertyByName_Parms), &Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_bSetter_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParserPropertyLibrary_eventAccessPropertyByName_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParserPropertyLibrary_eventAccessPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParserPropertyLibrary_eventAccessPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_bSetter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Variables" },
		{ "Comment", "/*\xe5\xbc\x80\xe5\x90\xaf\xe8\xa1\xa8\xe9\x9d\xa2\xe4\xbd\xbf\xe7\x94\xa8\xe5\x86\x99\xe6\x9d\x83\xe9\x99\x90\xef\xbc\x8c\xe5\x85\xb3\xe9\x97\xad\xe8\xa1\xa8\xe6\x98\x8e\xe4\xbd\xbf\xe7\x94\xa8\xe4\xbb\x85\xe8\xaf\xbb*/" },
		{ "CompactNodeTitle", "GET/SET" },
		{ "CPP_Default_bSetter", "true" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Get/Set (Property)" },
		{ "ModuleRelativePath", "Public/ParserPropertyLibrary.h" },
		{ "ToolTip", "\xe5\xbc\x80\xe5\x90\xaf\xe8\xa1\xa8\xe9\x9d\xa2\xe4\xbd\xbf\xe7\x94\xa8\xe5\x86\x99\xe6\x9d\x83\xe9\x99\x90\xef\xbc\x8c\xe5\x85\xb3\xe9\x97\xad\xe8\xa1\xa8\xe6\x98\x8e\xe4\xbd\xbf\xe7\x94\xa8\xe4\xbb\x85\xe8\xaf\xbb" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParserPropertyLibrary, nullptr, "AccessPropertyByName", nullptr, nullptr, sizeof(ParserPropertyLibrary_eventAccessPropertyByName_Parms), Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParserPropertyLibrary_NoRegister()
	{
		return UParserPropertyLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UParserPropertyLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParserPropertyLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUtility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParserPropertyLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParserPropertyLibrary_AccessPropertyByName, "AccessPropertyByName" }, // 1628523480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParserPropertyLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParserPropertyLibrary.h" },
		{ "ModuleRelativePath", "Public/ParserPropertyLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParserPropertyLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParserPropertyLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParserPropertyLibrary_Statics::ClassParams = {
		&UParserPropertyLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParserPropertyLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParserPropertyLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParserPropertyLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParserPropertyLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParserPropertyLibrary, 1616179513);
	template<> COMMONUTILITY_API UClass* StaticClass<UParserPropertyLibrary>()
	{
		return UParserPropertyLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParserPropertyLibrary(Z_Construct_UClass_UParserPropertyLibrary, &UParserPropertyLibrary::StaticClass, TEXT("/Script/CommonUtility"), TEXT("UParserPropertyLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParserPropertyLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

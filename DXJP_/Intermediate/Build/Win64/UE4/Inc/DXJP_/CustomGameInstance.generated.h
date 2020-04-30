// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EImageFormatType : uint8;
#ifdef DXJP__CustomGameInstance_generated_h
#error "CustomGameInstance.generated.h already included, missing '#pragma once' in CustomGameInstance.h"
#endif
#define DXJP__CustomGameInstance_generated_h

#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTexture2D(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnWOpenFlies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->ReturnWOpenFlies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeScreenShot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fineName); \
		P_GET_ENUM(EImageFormatType,Z_Param__format); \
		P_GET_PROPERTY(UIntProperty,Z_Param__quality); \
		P_GET_UBOOL(Z_Param_bInsertTimeStampToFileName); \
		P_GET_UBOOL(Z_Param_bInShowUI); \
		P_GET_UBOOL(Z_Param_bAddFilenameSuffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeScreenShot(Z_Param_fineName,EImageFormatType(Z_Param__format),Z_Param__quality,Z_Param_bInsertTimeStampToFileName,Z_Param_bInShowUI,Z_Param_bAddFilenameSuffix); \
		P_NATIVE_END; \
	}


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTexture2D(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReturnWOpenFlies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->ReturnWOpenFlies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeScreenShot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fineName); \
		P_GET_ENUM(EImageFormatType,Z_Param__format); \
		P_GET_PROPERTY(UIntProperty,Z_Param__quality); \
		P_GET_UBOOL(Z_Param_bInsertTimeStampToFileName); \
		P_GET_UBOOL(Z_Param_bInShowUI); \
		P_GET_UBOOL(Z_Param_bAddFilenameSuffix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeScreenShot(Z_Param_fineName,EImageFormatType(Z_Param__format),Z_Param__quality,Z_Param_bInsertTimeStampToFileName,Z_Param_bInShowUI,Z_Param_bAddFilenameSuffix); \
		P_NATIVE_END; \
	}


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGameInstance(); \
	friend struct Z_Construct_UClass_UCustomGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCustomGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DXJP_"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameInstance)


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGameInstance(); \
	friend struct Z_Construct_UClass_UCustomGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCustomGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DXJP_"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameInstance)


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGameInstance(UCustomGameInstance&&); \
	NO_API UCustomGameInstance(const UCustomGameInstance&); \
public:


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGameInstance(UCustomGameInstance&&); \
	NO_API UCustomGameInstance(const UCustomGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameInstance)


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_PRIVATE_PROPERTY_OFFSET
#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_21_PROLOG
#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_RPC_WRAPPERS \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_INCLASS \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_INCLASS_NO_PURE_DECLS \
	Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DXJP__API UClass* StaticClass<class UCustomGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projects_Package_DXJP__HostProject_Plugins_DXJP__Source_DXJP__Jieping_CustomGameInstance_h


#define FOREACH_ENUM_EIMAGEFORMATTYPE(op) \
	op(EImageFormatType::PNG) \
	op(EImageFormatType::JPEG) \
	op(EImageFormatType::EXR) 

enum class EImageFormatType : uint8;
template<> DXJP__API UEnum* StaticEnum<EImageFormatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

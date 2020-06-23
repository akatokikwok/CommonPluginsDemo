// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ParserPropertyLibrary.generated.h"

/**
 * 
 */
UCLASS()
class COMMONUTILITY_API UParserPropertyLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintCallable, CustomThunk, Category="Utilities|Variables", meta = (CustomStructureParam="Value", DisplayName="Get/Set (Property)", CompactNodeTitle="GET/SET") )
	static void AccessPropertyByName(UObject* Object,  FName PropertyName, 	const int32& Value, bool bSetter=true/*开启表面使用写权限，关闭表明使用仅读*/);//开启表面使用写权限，关闭表明使用仅读

	//UFUNCTION(BlueprintCallable, CustomThunk, Category = "Utilities|Array", meta = (ArrayParm = "Value", ArrayTypeDependentParams = "Value", DisplayName = "GET/SET (array)", CompactNodeTitle = "GET/SET"))
	//	static void AccessArrayByName(UObject* Object, FName PropertyName, const TArray<int32>& Value, bool bSetter = true);

	//UFUNCTION(BlueprintCallable, CustomThunk, Category = "Utilities|Set", meta = (SetParam = "Value", DisplayName = "GET/SET (set)", CompactNodeTitle = "GET/SET"))
	//	static void AccessSetByName(UObject* Object, FName PropertyName, const TSet<int32>& Value, bool bSetter = true);

	//UFUNCTION(BlueprintCallable, CustomThunk, Category = "Utilities|Map", meta = (MapParam = "Value", DisplayName = "GET/SET (map)", CompactNodeTitle = "GET/SET"))
	//	static void AccessMapByName(UObject* Object, FName PropertyName, const TMap<int32, int32>& Value, bool bSetter = true);
public: //exec function

	// get property
	DECLARE_FUNCTION(execAccessPropertyByName)
	{
		P_GET_OBJECT(UObject, OwnerObject);
		P_GET_PROPERTY(UNameProperty, PropertyName);

		Stack.StepCompiledIn<UStructProperty>(NULL);
		void* SrcPropertyAddr = Stack.MostRecentPropertyAddress;
		UProperty* SrcProperty = Cast<UProperty>(Stack.MostRecentProperty);

		P_GET_UBOOL(bSetter);
		P_FINISH;

		P_NATIVE_BEGIN;
		Generic_AccessPropertyByName(OwnerObject, PropertyName, SrcPropertyAddr, SrcProperty, bSetter);
		P_NATIVE_END;
	}

	//// get array
	//DECLARE_FUNCTION(execAccessArrayByName)
	//{
	//	P_GET_OBJECT(UObject, OwnerObject);
	//	P_GET_PROPERTY(UNameProperty, ArrayPropertyName);

	//	Stack.StepCompiledIn<UArrayProperty>(NULL);
	//	void* SrcArrayAddr = Stack.MostRecentPropertyAddress;
	//	UArrayProperty* SrcArrayProperty = Cast<UArrayProperty>(Stack.MostRecentProperty);

	//	P_GET_UBOOL(bSetter);
	//	P_FINISH;

	//	P_NATIVE_BEGIN;
	//	Generic_AcessArrayByName(OwnerObject, ArrayPropertyName, SrcArrayAddr, SrcArrayProperty, bSetter);
	//	P_NATIVE_END;
	//}

	//// get set
	//DECLARE_FUNCTION(execAccessSetByName)
	//{
	//	P_GET_OBJECT(UObject, OwnerObject);
	//	P_GET_PROPERTY(UNameProperty, SetPropertyName);

	//	Stack.MostRecentProperty = nullptr;
	//	Stack.StepCompiledIn<USetProperty>(NULL);
	//	void* SetAddr = Stack.MostRecentPropertyAddress;
	//	USetProperty* SetProperty = Cast<USetProperty>(Stack.MostRecentProperty);
	//	if (!SetProperty)
	//	{
	//		Stack.bArrayContextFailed = true;
	//		return;
	//	}

	//	P_GET_UBOOL(bSetter);
	//	P_FINISH;

	//	P_NATIVE_BEGIN;
	//	Generic_AcessSetByName(OwnerObject, SetPropertyName, SetAddr, SetProperty, bSetter);
	//	P_NATIVE_END;
	//}

	//// get map
	//DECLARE_FUNCTION(execAccessMapByName)
	//{
	//	P_GET_OBJECT(UObject, OwnerObject);
	//	P_GET_PROPERTY(UNameProperty, MapPropertyName);

	//	Stack.MostRecentProperty = nullptr;
	//	Stack.StepCompiledIn<UMapProperty>(NULL);
	//	void* SrcMapAddr = Stack.MostRecentPropertyAddress;
	//	UMapProperty* SrcMapProperty = Cast<UMapProperty>(Stack.MostRecentProperty);
	//	if (!SrcMapProperty)
	//	{
	//		Stack.bArrayContextFailed = true;
	//		return;
	//	}

	//	P_GET_UBOOL(bSetter);
	//	P_FINISH;

	//	P_NATIVE_BEGIN;
	//	Generic_AcessMapByName(OwnerObject, MapPropertyName, SrcMapAddr, SrcMapProperty, bSetter);
	//	P_NATIVE_END;
	//}

public: // Generic function

	static void Generic_AccessPropertyByName(UObject* OwnerObject, FName PropertyName, void* SrcPropertyAddr, UProperty* SrcProperty, bool bSetter = true);

	//static void Generic_AcessArrayByName(UObject* OwnerObject, FName ArrayPropertyName, void* SrcArrayAddr, const UArrayProperty* SrcArrayProperty, bool bSetter = true);

	//static void Generic_AcessSetByName(UObject* OwnerObject, FName SetPropertyName, void* SrcSetAddr, const USetProperty* SrcSetProperty, bool bSetter = true);

	//static void Generic_AcessMapByName(UObject* OwnerObject, FName MapPropertyName, void* SrcMapAddr, const UMapProperty* SrcMapProperty, bool bSetter = true);

};

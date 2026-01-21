// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_NarrativeBlueprintFuncLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_NarrativeBlueprintFuncLib() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_NoRegister();
SIMPLENARRATIVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Delegate FRegisteredDelegate
struct Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem, nullptr, "RegisteredDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRegisteredDelegate_DelegateWrapper(const FScriptDelegate& RegisteredDelegate)
{
	RegisteredDelegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FRegisteredDelegate

// Begin Class USNS_NarrativeBlueprintFuncLib Function EnqueueDialogue
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms
	{
		UObject* WorldContextObject;
		const UDataTable* DialoguesDataTable;
		FName DialogueRowName;
		bool bStopAllOtherDialogues;
		bool bIsValid;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "DataTablePin", "DialoguesDataTable" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "ReturnDisplayName", "DialogueRowName" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesDataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopAllOtherDialogues_MetaData[] = {
		{ "DisplayName", "StopAllOtherDialogues?" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "DisplayName", "IsValid?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialoguesDataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueRowName;
	static void NewProp_bStopAllOtherDialogues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAllOtherDialogues;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_DialoguesDataTable = { "DialoguesDataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms, DialoguesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguesDataTable_MetaData), NewProp_DialoguesDataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_DialogueRowName = { "DialogueRowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms, DialogueRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowName_MetaData), NewProp_DialogueRowName_MetaData) };
void Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bStopAllOtherDialogues_SetBit(void* Obj)
{
	((SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms*)Obj)->bStopAllOtherDialogues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bStopAllOtherDialogues = { "bStopAllOtherDialogues", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms), &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bStopAllOtherDialogues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopAllOtherDialogues_MetaData), NewProp_bStopAllOtherDialogues_MetaData) };
void Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms), &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_DialoguesDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_DialogueRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bStopAllOtherDialogues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "EnqueueDialogue", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventEnqueueDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execEnqueueDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UDataTable,Z_Param_DialoguesDataTable);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueRowName);
	P_GET_UBOOL(Z_Param_bStopAllOtherDialogues);
	P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=USNS_NarrativeBlueprintFuncLib::EnqueueDialogue(Z_Param_WorldContextObject,Z_Param_DialoguesDataTable,Z_Param_DialogueRowName,Z_Param_bStopAllOtherDialogues,Z_Param_Out_bIsValid);
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function EnqueueDialogue

// Begin Class USNS_NarrativeBlueprintFuncLib Function PauseCurrentDialogue
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventPauseCurrentDialogue_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventPauseCurrentDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "PauseCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventPauseCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventPauseCurrentDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execPauseCurrentDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::PauseCurrentDialogue(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function PauseCurrentDialogue

// Begin Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnAllDialogueEnd
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms
	{
		UObject* WorldContextObject;
		bool bRepeatable;
		FScriptDelegate OnAllDialoguesEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepeatable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAllDialoguesEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bRepeatable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatable;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAllDialoguesEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_bRepeatable_SetBit(void* Obj)
{
	((SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms*)Obj)->bRepeatable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_bRepeatable = { "bRepeatable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms), &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_bRepeatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepeatable_MetaData), NewProp_bRepeatable_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_OnAllDialoguesEnd = { "OnAllDialoguesEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms, OnAllDialoguesEnd), Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAllDialoguesEnd_MetaData), NewProp_OnAllDialoguesEnd_MetaData) }; // 2851185008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_bRepeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::NewProp_OnAllDialoguesEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "RegisterEventOnAllDialogueEnd", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnAllDialogueEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execRegisterEventOnAllDialogueEnd)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bRepeatable);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnAllDialoguesEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::RegisterEventOnAllDialogueEnd(Z_Param_WorldContextObject,Z_Param_bRepeatable,FRegisteredDelegate(Z_Param_Out_OnAllDialoguesEnd));
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnAllDialogueEnd

// Begin Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnDialogueIndex
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms
	{
		UObject* WorldContextObject;
		FName DialogueRowName;
		int32 DialogueRowIndex;
		bool bRepeatable;
		FScriptDelegate OnDialogueIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepeatable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueRowName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueRowIndex;
	static void NewProp_bRepeatable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatable;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDialogueIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_DialogueRowName = { "DialogueRowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms, DialogueRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowName_MetaData), NewProp_DialogueRowName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_DialogueRowIndex = { "DialogueRowIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms, DialogueRowIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowIndex_MetaData), NewProp_DialogueRowIndex_MetaData) };
void Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_bRepeatable_SetBit(void* Obj)
{
	((SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms*)Obj)->bRepeatable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_bRepeatable = { "bRepeatable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms), &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_bRepeatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepeatable_MetaData), NewProp_bRepeatable_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_OnDialogueIndex = { "OnDialogueIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms, OnDialogueIndex), Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueIndex_MetaData), NewProp_OnDialogueIndex_MetaData) }; // 2851185008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_DialogueRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_DialogueRowIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_bRepeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::NewProp_OnDialogueIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "RegisterEventOnDialogueIndex", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnDialogueIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execRegisterEventOnDialogueIndex)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueRowName);
	P_GET_PROPERTY(FIntProperty,Z_Param_DialogueRowIndex);
	P_GET_UBOOL(Z_Param_bRepeatable);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDialogueIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::RegisterEventOnDialogueIndex(Z_Param_WorldContextObject,Z_Param_DialogueRowName,Z_Param_DialogueRowIndex,Z_Param_bRepeatable,FRegisteredDelegate(Z_Param_Out_OnDialogueIndex));
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnDialogueIndex

// Begin Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnEndDialogue
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms
	{
		UObject* WorldContextObject;
		FName DialogueRowName;
		bool bRepeatable;
		FScriptDelegate OnDialogueEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepeatable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueRowName;
	static void NewProp_bRepeatable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatable;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDialogueEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_DialogueRowName = { "DialogueRowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms, DialogueRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowName_MetaData), NewProp_DialogueRowName_MetaData) };
void Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_bRepeatable_SetBit(void* Obj)
{
	((SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms*)Obj)->bRepeatable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_bRepeatable = { "bRepeatable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms), &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_bRepeatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepeatable_MetaData), NewProp_bRepeatable_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_OnDialogueEnd = { "OnDialogueEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms, OnDialogueEnd), Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueEnd_MetaData), NewProp_OnDialogueEnd_MetaData) }; // 2851185008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_DialogueRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_bRepeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::NewProp_OnDialogueEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "RegisterEventOnEndDialogue", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnEndDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execRegisterEventOnEndDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueRowName);
	P_GET_UBOOL(Z_Param_bRepeatable);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDialogueEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::RegisterEventOnEndDialogue(Z_Param_WorldContextObject,Z_Param_DialogueRowName,Z_Param_bRepeatable,FRegisteredDelegate(Z_Param_Out_OnDialogueEnd));
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnEndDialogue

// Begin Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnStartDialogue
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms
	{
		UObject* WorldContextObject;
		FName DialogueRowName;
		bool bRepeatable;
		FScriptDelegate OnDialogueStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepeatable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueRowName;
	static void NewProp_bRepeatable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatable;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDialogueStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_DialogueRowName = { "DialogueRowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms, DialogueRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowName_MetaData), NewProp_DialogueRowName_MetaData) };
void Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_bRepeatable_SetBit(void* Obj)
{
	((SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms*)Obj)->bRepeatable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_bRepeatable = { "bRepeatable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms), &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_bRepeatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepeatable_MetaData), NewProp_bRepeatable_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_OnDialogueStart = { "OnDialogueStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms, OnDialogueStart), Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueStart_MetaData), NewProp_OnDialogueStart_MetaData) }; // 2851185008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_DialogueRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_bRepeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::NewProp_OnDialogueStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "RegisterEventOnStartDialogue", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventRegisterEventOnStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execRegisterEventOnStartDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogueRowName);
	P_GET_UBOOL(Z_Param_bRepeatable);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDialogueStart);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::RegisterEventOnStartDialogue(Z_Param_WorldContextObject,Z_Param_DialogueRowName,Z_Param_bRepeatable,FRegisteredDelegate(Z_Param_Out_OnDialogueStart));
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function RegisterEventOnStartDialogue

// Begin Class USNS_NarrativeBlueprintFuncLib Function ResumeCurrentDialogue
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventResumeCurrentDialogue_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventResumeCurrentDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "ResumeCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventResumeCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::SNS_NarrativeBlueprintFuncLib_eventResumeCurrentDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execResumeCurrentDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::ResumeCurrentDialogue(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function ResumeCurrentDialogue

// Begin Class USNS_NarrativeBlueprintFuncLib Function SkipCurrentDialogueLine
struct Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics
{
	struct SNS_NarrativeBlueprintFuncLib_eventSkipCurrentDialogueLine_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simple Narrative System" },
		{ "Keywords", "SNS" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_NarrativeBlueprintFuncLib_eventSkipCurrentDialogueLine_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, nullptr, "SkipCurrentDialogueLine", nullptr, nullptr, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::SNS_NarrativeBlueprintFuncLib_eventSkipCurrentDialogueLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::SNS_NarrativeBlueprintFuncLib_eventSkipCurrentDialogueLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_NarrativeBlueprintFuncLib::execSkipCurrentDialogueLine)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USNS_NarrativeBlueprintFuncLib::SkipCurrentDialogueLine(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USNS_NarrativeBlueprintFuncLib Function SkipCurrentDialogueLine

// Begin Class USNS_NarrativeBlueprintFuncLib
void USNS_NarrativeBlueprintFuncLib::StaticRegisterNativesUSNS_NarrativeBlueprintFuncLib()
{
	UClass* Class = USNS_NarrativeBlueprintFuncLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnqueueDialogue", &USNS_NarrativeBlueprintFuncLib::execEnqueueDialogue },
		{ "PauseCurrentDialogue", &USNS_NarrativeBlueprintFuncLib::execPauseCurrentDialogue },
		{ "RegisterEventOnAllDialogueEnd", &USNS_NarrativeBlueprintFuncLib::execRegisterEventOnAllDialogueEnd },
		{ "RegisterEventOnDialogueIndex", &USNS_NarrativeBlueprintFuncLib::execRegisterEventOnDialogueIndex },
		{ "RegisterEventOnEndDialogue", &USNS_NarrativeBlueprintFuncLib::execRegisterEventOnEndDialogue },
		{ "RegisterEventOnStartDialogue", &USNS_NarrativeBlueprintFuncLib::execRegisterEventOnStartDialogue },
		{ "ResumeCurrentDialogue", &USNS_NarrativeBlueprintFuncLib::execResumeCurrentDialogue },
		{ "SkipCurrentDialogueLine", &USNS_NarrativeBlueprintFuncLib::execSkipCurrentDialogueLine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNS_NarrativeBlueprintFuncLib);
UClass* Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_NoRegister()
{
	return USNS_NarrativeBlueprintFuncLib::StaticClass();
}
struct Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SNS_NarrativeBlueprintFuncLib.h" },
		{ "ModuleRelativePath", "Public/SNS_NarrativeBlueprintFuncLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_EnqueueDialogue, "EnqueueDialogue" }, // 2447259649
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_PauseCurrentDialogue, "PauseCurrentDialogue" }, // 3810366433
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnAllDialogueEnd, "RegisterEventOnAllDialogueEnd" }, // 2174722617
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnDialogueIndex, "RegisterEventOnDialogueIndex" }, // 749784500
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnEndDialogue, "RegisterEventOnEndDialogue" }, // 60500048
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_RegisterEventOnStartDialogue, "RegisterEventOnStartDialogue" }, // 3528175510
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_ResumeCurrentDialogue, "ResumeCurrentDialogue" }, // 1899124257
		{ &Z_Construct_UFunction_USNS_NarrativeBlueprintFuncLib_SkipCurrentDialogueLine, "SkipCurrentDialogueLine" }, // 1657977499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNS_NarrativeBlueprintFuncLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics::ClassParams = {
	&USNS_NarrativeBlueprintFuncLib::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics::Class_MetaDataParams), Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib()
{
	if (!Z_Registration_Info_UClass_USNS_NarrativeBlueprintFuncLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNS_NarrativeBlueprintFuncLib.OuterSingleton, Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USNS_NarrativeBlueprintFuncLib.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<USNS_NarrativeBlueprintFuncLib>()
{
	return USNS_NarrativeBlueprintFuncLib::StaticClass();
}
USNS_NarrativeBlueprintFuncLib::USNS_NarrativeBlueprintFuncLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USNS_NarrativeBlueprintFuncLib);
USNS_NarrativeBlueprintFuncLib::~USNS_NarrativeBlueprintFuncLib() {}
// End Class USNS_NarrativeBlueprintFuncLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib, USNS_NarrativeBlueprintFuncLib::StaticClass, TEXT("USNS_NarrativeBlueprintFuncLib"), &Z_Registration_Info_UClass_USNS_NarrativeBlueprintFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNS_NarrativeBlueprintFuncLib), 2834657617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_3394701253(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

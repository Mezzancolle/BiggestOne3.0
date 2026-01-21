// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_SettingsGameInstanceSS.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_SettingsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_SettingsGameInstanceSS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SettingsGameInstanceSS();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SettingsGameInstanceSS_NoRegister();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SettingsSaveGame_NoRegister();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_SettingsData();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Class USNS_SettingsGameInstanceSS Function DeleteSavedSettings
struct Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics
{
	struct SNS_SettingsGameInstanceSS_eventDeleteSavedSettings_Parms
	{
		bool bOnlyInEditor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "CPP_Default_bOnlyInEditor", "false" },
		{ "ModuleRelativePath", "Public/SNS_SettingsGameInstanceSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyInEditor_MetaData[] = {
		{ "DisplayName", "OnlyInEditor?" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::NewProp_bOnlyInEditor_SetBit(void* Obj)
{
	((SNS_SettingsGameInstanceSS_eventDeleteSavedSettings_Parms*)Obj)->bOnlyInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::NewProp_bOnlyInEditor = { "bOnlyInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_SettingsGameInstanceSS_eventDeleteSavedSettings_Parms), &Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::NewProp_bOnlyInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyInEditor_MetaData), NewProp_bOnlyInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::NewProp_bOnlyInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_SettingsGameInstanceSS, nullptr, "DeleteSavedSettings", nullptr, nullptr, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::SNS_SettingsGameInstanceSS_eventDeleteSavedSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::SNS_SettingsGameInstanceSS_eventDeleteSavedSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_SettingsGameInstanceSS::execDeleteSavedSettings)
{
	P_GET_UBOOL(Z_Param_bOnlyInEditor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSavedSettings(Z_Param_bOnlyInEditor);
	P_NATIVE_END;
}
// End Class USNS_SettingsGameInstanceSS Function DeleteSavedSettings

// Begin Class USNS_SettingsGameInstanceSS Function GetSettings
struct Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics
{
	struct SNS_SettingsGameInstanceSS_eventGetSettings_Parms
	{
		FSNS_S_SettingsData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/SNS_SettingsGameInstanceSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_SettingsGameInstanceSS_eventGetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSNS_S_SettingsData, METADATA_PARAMS(0, nullptr) }; // 402575282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_SettingsGameInstanceSS, nullptr, "GetSettings", nullptr, nullptr, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::SNS_SettingsGameInstanceSS_eventGetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::SNS_SettingsGameInstanceSS_eventGetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_SettingsGameInstanceSS::execGetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSNS_S_SettingsData*)Z_Param__Result=P_THIS->GetSettings();
	P_NATIVE_END;
}
// End Class USNS_SettingsGameInstanceSS Function GetSettings

// Begin Class USNS_SettingsGameInstanceSS Function LoadSettings
struct Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics
{
	struct SNS_SettingsGameInstanceSS_eventLoadSettings_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/SNS_SettingsGameInstanceSS.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SNS_SettingsGameInstanceSS_eventLoadSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SNS_SettingsGameInstanceSS_eventLoadSettings_Parms), &Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_SettingsGameInstanceSS, nullptr, "LoadSettings", nullptr, nullptr, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::SNS_SettingsGameInstanceSS_eventLoadSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::SNS_SettingsGameInstanceSS_eventLoadSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_SettingsGameInstanceSS::execLoadSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadSettings();
	P_NATIVE_END;
}
// End Class USNS_SettingsGameInstanceSS Function LoadSettings

// Begin Class USNS_SettingsGameInstanceSS Function SaveSettings
struct Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics
{
	struct SNS_SettingsGameInstanceSS_eventSaveSettings_Parms
	{
		FSNS_S_SettingsData NewSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/SNS_SettingsGameInstanceSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SNS_SettingsGameInstanceSS_eventSaveSettings_Parms, NewSettings), Z_Construct_UScriptStruct_FSNS_S_SettingsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSettings_MetaData), NewProp_NewSettings_MetaData) }; // 402575282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::NewProp_NewSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNS_SettingsGameInstanceSS, nullptr, "SaveSettings", nullptr, nullptr, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::SNS_SettingsGameInstanceSS_eventSaveSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::SNS_SettingsGameInstanceSS_eventSaveSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USNS_SettingsGameInstanceSS::execSaveSettings)
{
	P_GET_STRUCT_REF(FSNS_S_SettingsData,Z_Param_Out_NewSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveSettings(Z_Param_Out_NewSettings);
	P_NATIVE_END;
}
// End Class USNS_SettingsGameInstanceSS Function SaveSettings

// Begin Class USNS_SettingsGameInstanceSS
void USNS_SettingsGameInstanceSS::StaticRegisterNativesUSNS_SettingsGameInstanceSS()
{
	UClass* Class = USNS_SettingsGameInstanceSS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteSavedSettings", &USNS_SettingsGameInstanceSS::execDeleteSavedSettings },
		{ "GetSettings", &USNS_SettingsGameInstanceSS::execGetSettings },
		{ "LoadSettings", &USNS_SettingsGameInstanceSS::execLoadSettings },
		{ "SaveSettings", &USNS_SettingsGameInstanceSS::execSaveSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNS_SettingsGameInstanceSS);
UClass* Z_Construct_UClass_USNS_SettingsGameInstanceSS_NoRegister()
{
	return USNS_SettingsGameInstanceSS::StaticClass();
}
struct Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SNS_SettingsGameInstanceSS.h" },
		{ "ModuleRelativePath", "Public/SNS_SettingsGameInstanceSS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/SNS_SettingsGameInstanceSS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USNS_SettingsGameInstanceSS_DeleteSavedSettings, "DeleteSavedSettings" }, // 3355403394
		{ &Z_Construct_UFunction_USNS_SettingsGameInstanceSS_GetSettings, "GetSettings" }, // 3786360453
		{ &Z_Construct_UFunction_USNS_SettingsGameInstanceSS_LoadSettings, "LoadSettings" }, // 2807005735
		{ &Z_Construct_UFunction_USNS_SettingsGameInstanceSS_SaveSettings, "SaveSettings" }, // 509464829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNS_SettingsGameInstanceSS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::NewProp_SettingsSaveGame = { "SettingsSaveGame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNS_SettingsGameInstanceSS, SettingsSaveGame), Z_Construct_UClass_USNS_SettingsSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsSaveGame_MetaData), NewProp_SettingsSaveGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::NewProp_SettingsSaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::ClassParams = {
	&USNS_SettingsGameInstanceSS::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::Class_MetaDataParams), Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USNS_SettingsGameInstanceSS()
{
	if (!Z_Registration_Info_UClass_USNS_SettingsGameInstanceSS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNS_SettingsGameInstanceSS.OuterSingleton, Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USNS_SettingsGameInstanceSS.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<USNS_SettingsGameInstanceSS>()
{
	return USNS_SettingsGameInstanceSS::StaticClass();
}
USNS_SettingsGameInstanceSS::USNS_SettingsGameInstanceSS() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USNS_SettingsGameInstanceSS);
USNS_SettingsGameInstanceSS::~USNS_SettingsGameInstanceSS() {}
// End Class USNS_SettingsGameInstanceSS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USNS_SettingsGameInstanceSS, USNS_SettingsGameInstanceSS::StaticClass, TEXT("USNS_SettingsGameInstanceSS"), &Z_Registration_Info_UClass_USNS_SettingsGameInstanceSS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNS_SettingsGameInstanceSS), 1214203612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_868313756(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

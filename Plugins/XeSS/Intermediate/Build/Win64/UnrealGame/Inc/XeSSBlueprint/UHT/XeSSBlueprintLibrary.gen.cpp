// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeSSBlueprint/Public/XeSSBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXeSSBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_XeSSBlueprint();
XESSBLUEPRINT_API UClass* Z_Construct_UClass_UXeSSBlueprintLibrary();
XESSBLUEPRINT_API UClass* Z_Construct_UClass_UXeSSBlueprintLibrary_NoRegister();
XESSBLUEPRINT_API UEnum* Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode();
// End Cross Module References

// Begin Enum EXeSSQualityMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXeSSQualityMode;
static UEnum* EXeSSQualityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXeSSQualityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXeSSQualityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, (UObject*)Z_Construct_UPackage__Script_XeSSBlueprint(), TEXT("EXeSSQualityMode"));
	}
	return Z_Registration_Info_UEnum_EXeSSQualityMode.OuterSingleton;
}
template<> XESSBLUEPRINT_API UEnum* StaticEnum<EXeSSQualityMode>()
{
	return EXeSSQualityMode_StaticEnum();
}
struct Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AntiAliasing.DisplayName", "Anti-Aliasing" },
		{ "AntiAliasing.Name", "EXeSSQualityMode::AntiAliasing" },
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EXeSSQualityMode::Balanced" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// QUALITY EDIT:\n" },
#endif
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EXeSSQualityMode::Off" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "EXeSSQualityMode::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EXeSSQualityMode::Quality" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "QUALITY EDIT:" },
#endif
		{ "UltraPerformance.DisplayName", "Ultra Performance" },
		{ "UltraPerformance.Name", "EXeSSQualityMode::UltraPerformance" },
		{ "UltraQuality.DisplayName", "Ultra Quality" },
		{ "UltraQuality.Name", "EXeSSQualityMode::UltraQuality" },
		{ "UltraQualityPlus.DisplayName", "Ultra Quality Plus" },
		{ "UltraQualityPlus.Name", "EXeSSQualityMode::UltraQualityPlus" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXeSSQualityMode::Off", (int64)EXeSSQualityMode::Off },
		{ "EXeSSQualityMode::UltraPerformance", (int64)EXeSSQualityMode::UltraPerformance },
		{ "EXeSSQualityMode::Performance", (int64)EXeSSQualityMode::Performance },
		{ "EXeSSQualityMode::Balanced", (int64)EXeSSQualityMode::Balanced },
		{ "EXeSSQualityMode::Quality", (int64)EXeSSQualityMode::Quality },
		{ "EXeSSQualityMode::UltraQuality", (int64)EXeSSQualityMode::UltraQuality },
		{ "EXeSSQualityMode::UltraQualityPlus", (int64)EXeSSQualityMode::UltraQualityPlus },
		{ "EXeSSQualityMode::AntiAliasing", (int64)EXeSSQualityMode::AntiAliasing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_XeSSBlueprint,
	nullptr,
	"EXeSSQualityMode",
	"EXeSSQualityMode",
	Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode()
{
	if (!Z_Registration_Info_UEnum_EXeSSQualityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXeSSQualityMode.InnerSingleton, Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXeSSQualityMode.InnerSingleton;
}
// End Enum EXeSSQualityMode

// Begin Class UXeSSBlueprintLibrary Function GetDefaultXeSSQualityMode
struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics
{
	struct XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms
	{
		FIntPoint ScreenResolution;
		EXeSSQualityMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-SR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the default Intel XeSS-SR quality mode for the given screen resolution */" },
#endif
		{ "DisplayName", "Get Default Intel(R) XeSS-SR Quality Mode" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the default Intel XeSS-SR quality mode for the given screen resolution" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms, ScreenResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms, ReturnValue), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(0, nullptr) }; // 55882002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ScreenResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetDefaultXeSSQualityMode", nullptr, nullptr, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::XeSSBlueprintLibrary_eventGetDefaultXeSSQualityMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetDefaultXeSSQualityMode)
{
	P_GET_STRUCT(FIntPoint,Z_Param_ScreenResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EXeSSQualityMode*)Z_Param__Result=UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(Z_Param_ScreenResolution);
	P_NATIVE_END;
}
// End Class UXeSSBlueprintLibrary Function GetDefaultXeSSQualityMode

// Begin Class UXeSSBlueprintLibrary Function GetSupportedXeSSQualityModes
struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics
{
	struct XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms
	{
		TArray<EXeSSQualityMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-SR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List all available Intel XeSS-SR quality modes */" },
#endif
		{ "DisplayName", "Get Supported Intel(R) XeSS-SR Quality Modes" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List all available Intel XeSS-SR quality modes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(0, nullptr) }; // 55882002
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 55882002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetSupportedXeSSQualityModes", nullptr, nullptr, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::XeSSBlueprintLibrary_eventGetSupportedXeSSQualityModes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetSupportedXeSSQualityModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EXeSSQualityMode>*)Z_Param__Result=UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes();
	P_NATIVE_END;
}
// End Class UXeSSBlueprintLibrary Function GetSupportedXeSSQualityModes

// Begin Class UXeSSBlueprintLibrary Function GetXeSSQualityMode
struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics
{
	struct XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms
	{
		EXeSSQualityMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-SR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current Intel XeSS-SR quality mode */" },
#endif
		{ "DisplayName", "Get Current Intel(R) XeSS-SR Quality Mode" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current Intel XeSS-SR quality mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms, ReturnValue), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(0, nullptr) }; // 55882002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetXeSSQualityMode", nullptr, nullptr, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::XeSSBlueprintLibrary_eventGetXeSSQualityMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetXeSSQualityMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EXeSSQualityMode*)Z_Param__Result=UXeSSBlueprintLibrary::GetXeSSQualityMode();
	P_NATIVE_END;
}
// End Class UXeSSBlueprintLibrary Function GetXeSSQualityMode

// Begin Class UXeSSBlueprintLibrary Function GetXeSSQualityModeInformation
struct Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics
{
	struct XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms
	{
		EXeSSQualityMode QualityMode;
		float ScreenPercentage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-SR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get Intel XeSS-SR quality mode information, e.g., screen percentage */" },
#endif
		{ "DisplayName", "Get Intel(R) XeSS-SR Quality Mode Information" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Intel XeSS-SR quality mode information, e.g., screen percentage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms, QualityMode), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(0, nullptr) }; // 55882002
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms, ScreenPercentage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms), &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_QualityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "GetXeSSQualityModeInformation", nullptr, nullptr, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::XeSSBlueprintLibrary_eventGetXeSSQualityModeInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeSSBlueprintLibrary::execGetXeSSQualityModeInformation)
{
	P_GET_ENUM(EXeSSQualityMode,Z_Param_QualityMode);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScreenPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(EXeSSQualityMode(Z_Param_QualityMode),Z_Param_Out_ScreenPercentage);
	P_NATIVE_END;
}
// End Class UXeSSBlueprintLibrary Function GetXeSSQualityModeInformation

// Begin Class UXeSSBlueprintLibrary Function IsXeSSSupported
struct Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics
{
	struct XeSSBlueprintLibrary_eventIsXeSSSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-SR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if Intel XeSS-SR is supported on the current Platform */" },
#endif
		{ "DisplayName", "Is Intel(R) XeSS-SR Supported" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if Intel XeSS-SR is supported on the current Platform" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeSSBlueprintLibrary_eventIsXeSSSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeSSBlueprintLibrary_eventIsXeSSSupported_Parms), &Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "IsXeSSSupported", nullptr, nullptr, Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::XeSSBlueprintLibrary_eventIsXeSSSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::XeSSBlueprintLibrary_eventIsXeSSSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeSSBlueprintLibrary::execIsXeSSSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeSSBlueprintLibrary::IsXeSSSupported();
	P_NATIVE_END;
}
// End Class UXeSSBlueprintLibrary Function IsXeSSSupported

// Begin Class UXeSSBlueprintLibrary Function SetXeSSQualityMode
struct Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics
{
	struct XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms
	{
		EXeSSQualityMode QualityMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-SR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the selected Intel XeSS-SR quality mode */" },
#endif
		{ "DisplayName", "Set Intel(R) XeSS-SR Quality Mode" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the selected Intel XeSS-SR quality mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QualityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms, QualityMode), Z_Construct_UEnum_XeSSBlueprint_EXeSSQualityMode, METADATA_PARAMS(0, nullptr) }; // 55882002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::NewProp_QualityMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeSSBlueprintLibrary, nullptr, "SetXeSSQualityMode", nullptr, nullptr, Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::XeSSBlueprintLibrary_eventSetXeSSQualityMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeSSBlueprintLibrary::execSetXeSSQualityMode)
{
	P_GET_ENUM(EXeSSQualityMode,Z_Param_QualityMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UXeSSBlueprintLibrary::SetXeSSQualityMode(EXeSSQualityMode(Z_Param_QualityMode));
	P_NATIVE_END;
}
// End Class UXeSSBlueprintLibrary Function SetXeSSQualityMode

// Begin Class UXeSSBlueprintLibrary
void UXeSSBlueprintLibrary::StaticRegisterNativesUXeSSBlueprintLibrary()
{
	UClass* Class = UXeSSBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultXeSSQualityMode", &UXeSSBlueprintLibrary::execGetDefaultXeSSQualityMode },
		{ "GetSupportedXeSSQualityModes", &UXeSSBlueprintLibrary::execGetSupportedXeSSQualityModes },
		{ "GetXeSSQualityMode", &UXeSSBlueprintLibrary::execGetXeSSQualityMode },
		{ "GetXeSSQualityModeInformation", &UXeSSBlueprintLibrary::execGetXeSSQualityModeInformation },
		{ "IsXeSSSupported", &UXeSSBlueprintLibrary::execIsXeSSSupported },
		{ "SetXeSSQualityMode", &UXeSSBlueprintLibrary::execSetXeSSQualityMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXeSSBlueprintLibrary);
UClass* Z_Construct_UClass_UXeSSBlueprintLibrary_NoRegister()
{
	return UXeSSBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UXeSSBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "XeSSBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/XeSSBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode, "GetDefaultXeSSQualityMode" }, // 156793507
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes, "GetSupportedXeSSQualityModes" }, // 2034420372
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityMode, "GetXeSSQualityMode" }, // 853510844
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_GetXeSSQualityModeInformation, "GetXeSSQualityModeInformation" }, // 3219588771
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_IsXeSSSupported, "IsXeSSSupported" }, // 3249531649
		{ &Z_Construct_UFunction_UXeSSBlueprintLibrary_SetXeSSQualityMode, "SetXeSSQualityMode" }, // 1272394463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXeSSBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_XeSSBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::ClassParams = {
	&UXeSSBlueprintLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXeSSBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UXeSSBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXeSSBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UXeSSBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXeSSBlueprintLibrary.OuterSingleton;
}
template<> XESSBLUEPRINT_API UClass* StaticClass<UXeSSBlueprintLibrary>()
{
	return UXeSSBlueprintLibrary::StaticClass();
}
UXeSSBlueprintLibrary::UXeSSBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXeSSBlueprintLibrary);
UXeSSBlueprintLibrary::~UXeSSBlueprintLibrary() {}
// End Class UXeSSBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXeSSQualityMode_StaticEnum, TEXT("EXeSSQualityMode"), &Z_Registration_Info_UEnum_EXeSSQualityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 55882002U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXeSSBlueprintLibrary, UXeSSBlueprintLibrary::StaticClass, TEXT("UXeSSBlueprintLibrary"), &Z_Registration_Info_UClass_UXeSSBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXeSSBlueprintLibrary), 4113100769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_1743779055(TEXT("/Script/XeSSBlueprint"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

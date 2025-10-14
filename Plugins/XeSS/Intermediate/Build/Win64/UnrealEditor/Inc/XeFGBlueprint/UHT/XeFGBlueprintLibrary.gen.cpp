// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeFGBlueprint/Public/XeFGBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXeFGBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_XeFGBlueprint();
XEFGBLUEPRINT_API UClass* Z_Construct_UClass_UXeFGBlueprintLibrary();
XEFGBLUEPRINT_API UClass* Z_Construct_UClass_UXeFGBlueprintLibrary_NoRegister();
XEFGBLUEPRINT_API UEnum* Z_Construct_UEnum_XeFGBlueprint_EXeFGMode();
// End Cross Module References

// Begin Enum EXeFGMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXeFGMode;
static UEnum* EXeFGMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXeFGMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXeFGMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_XeFGBlueprint_EXeFGMode, (UObject*)Z_Construct_UPackage__Script_XeFGBlueprint(), TEXT("EXeFGMode"));
	}
	return Z_Registration_Info_UEnum_EXeFGMode.OuterSingleton;
}
template<> XEFGBLUEPRINT_API UEnum* StaticEnum<EXeFGMode>()
{
	return EXeFGMode_StaticEnum();
}
struct Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EXeFGMode::Off" },
		{ "On.DisplayName", "On" },
		{ "On.Name", "EXeFGMode::On" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXeFGMode::Off", (int64)EXeFGMode::Off },
		{ "EXeFGMode::On", (int64)EXeFGMode::On },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_XeFGBlueprint,
	nullptr,
	"EXeFGMode",
	"EXeFGMode",
	Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_XeFGBlueprint_EXeFGMode()
{
	if (!Z_Registration_Info_UEnum_EXeFGMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXeFGMode.InnerSingleton, Z_Construct_UEnum_XeFGBlueprint_EXeFGMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXeFGMode.InnerSingleton;
}
// End Enum EXeFGMode

// Begin Class UXeFGBlueprintLibrary Function GetSupportedXeFGModes
struct Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics
{
	struct XeFGBlueprintLibrary_eventGetSupportedXeFGModes_Parms
	{
		TArray<EXeFGMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-FG" },
		{ "Comment", "/** List all available Intel XeSS-FG modes */" },
		{ "DisplayName", "Get Supported Intel(R) XeSS-FG Modes" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
		{ "ToolTip", "List all available Intel XeSS-FG modes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_XeFGBlueprint_EXeFGMode, METADATA_PARAMS(0, nullptr) }; // 3320975374
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeFGBlueprintLibrary_eventGetSupportedXeFGModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3320975374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeFGBlueprintLibrary, nullptr, "GetSupportedXeFGModes", nullptr, nullptr, Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::XeFGBlueprintLibrary_eventGetSupportedXeFGModes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::XeFGBlueprintLibrary_eventGetSupportedXeFGModes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeFGBlueprintLibrary::execGetSupportedXeFGModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EXeFGMode>*)Z_Param__Result=UXeFGBlueprintLibrary::GetSupportedXeFGModes();
	P_NATIVE_END;
}
// End Class UXeFGBlueprintLibrary Function GetSupportedXeFGModes

// Begin Class UXeFGBlueprintLibrary Function GetXeFGMode
struct Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics
{
	struct XeFGBlueprintLibrary_eventGetXeFGMode_Parms
	{
		EXeFGMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-FG" },
		{ "Comment", "/** Get the current Intel XeSS-FG mode */" },
		{ "DisplayName", "Get Current Intel(R) XeSS-FG Mode" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
		{ "ToolTip", "Get the current Intel XeSS-FG mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeFGBlueprintLibrary_eventGetXeFGMode_Parms, ReturnValue), Z_Construct_UEnum_XeFGBlueprint_EXeFGMode, METADATA_PARAMS(0, nullptr) }; // 3320975374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeFGBlueprintLibrary, nullptr, "GetXeFGMode", nullptr, nullptr, Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::XeFGBlueprintLibrary_eventGetXeFGMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::XeFGBlueprintLibrary_eventGetXeFGMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeFGBlueprintLibrary::execGetXeFGMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EXeFGMode*)Z_Param__Result=UXeFGBlueprintLibrary::GetXeFGMode();
	P_NATIVE_END;
}
// End Class UXeFGBlueprintLibrary Function GetXeFGMode

// Begin Class UXeFGBlueprintLibrary Function IfRelaunchRequiredByXeFG
struct Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics
{
	struct XeFGBlueprintLibrary_eventIfRelaunchRequiredByXeFG_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-FG" },
		{ "Comment", "/** If relaunch is required by Intel XeSS-FG */" },
		{ "DisplayName", "If Relaunch is Required by XeSS-FG" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
		{ "ToolTip", "If relaunch is required by Intel XeSS-FG" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeFGBlueprintLibrary_eventIfRelaunchRequiredByXeFG_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeFGBlueprintLibrary_eventIfRelaunchRequiredByXeFG_Parms), &Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeFGBlueprintLibrary, nullptr, "IfRelaunchRequiredByXeFG", nullptr, nullptr, Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::XeFGBlueprintLibrary_eventIfRelaunchRequiredByXeFG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::XeFGBlueprintLibrary_eventIfRelaunchRequiredByXeFG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeFGBlueprintLibrary::execIfRelaunchRequiredByXeFG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeFGBlueprintLibrary::IfRelaunchRequiredByXeFG();
	P_NATIVE_END;
}
// End Class UXeFGBlueprintLibrary Function IfRelaunchRequiredByXeFG

// Begin Class UXeFGBlueprintLibrary Function IsXeFGSupported
struct Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics
{
	struct XeFGBlueprintLibrary_eventIsXeFGSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-FG" },
		{ "Comment", "/** Check if Intel XeSS-FG is supported on the current platform */" },
		{ "DisplayName", "Is Intel(R) XeSS-FG Supported" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
		{ "ToolTip", "Check if Intel XeSS-FG is supported on the current platform" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeFGBlueprintLibrary_eventIsXeFGSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeFGBlueprintLibrary_eventIsXeFGSupported_Parms), &Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeFGBlueprintLibrary, nullptr, "IsXeFGSupported", nullptr, nullptr, Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::XeFGBlueprintLibrary_eventIsXeFGSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::XeFGBlueprintLibrary_eventIsXeFGSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeFGBlueprintLibrary::execIsXeFGSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeFGBlueprintLibrary::IsXeFGSupported();
	P_NATIVE_END;
}
// End Class UXeFGBlueprintLibrary Function IsXeFGSupported

// Begin Class UXeFGBlueprintLibrary Function SetXeFGMode
struct Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics
{
	struct XeFGBlueprintLibrary_eventSetXeFGMode_Parms
	{
		EXeFGMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeSS-FG" },
		{ "Comment", "/** Set the selected Intel XeSS-FG mode */" },
		{ "DisplayName", "Set Intel(R) XeSS-FG Mode" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
		{ "ToolTip", "Set the selected Intel XeSS-FG mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeFGBlueprintLibrary_eventSetXeFGMode_Parms, Mode), Z_Construct_UEnum_XeFGBlueprint_EXeFGMode, METADATA_PARAMS(0, nullptr) }; // 3320975374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeFGBlueprintLibrary, nullptr, "SetXeFGMode", nullptr, nullptr, Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::XeFGBlueprintLibrary_eventSetXeFGMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::XeFGBlueprintLibrary_eventSetXeFGMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeFGBlueprintLibrary::execSetXeFGMode)
{
	P_GET_ENUM(EXeFGMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UXeFGBlueprintLibrary::SetXeFGMode(EXeFGMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class UXeFGBlueprintLibrary Function SetXeFGMode

// Begin Class UXeFGBlueprintLibrary
void UXeFGBlueprintLibrary::StaticRegisterNativesUXeFGBlueprintLibrary()
{
	UClass* Class = UXeFGBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSupportedXeFGModes", &UXeFGBlueprintLibrary::execGetSupportedXeFGModes },
		{ "GetXeFGMode", &UXeFGBlueprintLibrary::execGetXeFGMode },
		{ "IfRelaunchRequiredByXeFG", &UXeFGBlueprintLibrary::execIfRelaunchRequiredByXeFG },
		{ "IsXeFGSupported", &UXeFGBlueprintLibrary::execIsXeFGSupported },
		{ "SetXeFGMode", &UXeFGBlueprintLibrary::execSetXeFGMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXeFGBlueprintLibrary);
UClass* Z_Construct_UClass_UXeFGBlueprintLibrary_NoRegister()
{
	return UXeFGBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UXeFGBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "XeFGBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/XeFGBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UXeFGBlueprintLibrary_GetSupportedXeFGModes, "GetSupportedXeFGModes" }, // 786331610
		{ &Z_Construct_UFunction_UXeFGBlueprintLibrary_GetXeFGMode, "GetXeFGMode" }, // 1437421221
		{ &Z_Construct_UFunction_UXeFGBlueprintLibrary_IfRelaunchRequiredByXeFG, "IfRelaunchRequiredByXeFG" }, // 3389332328
		{ &Z_Construct_UFunction_UXeFGBlueprintLibrary_IsXeFGSupported, "IsXeFGSupported" }, // 1035066526
		{ &Z_Construct_UFunction_UXeFGBlueprintLibrary_SetXeFGMode, "SetXeFGMode" }, // 366051419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXeFGBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UXeFGBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_XeFGBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXeFGBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXeFGBlueprintLibrary_Statics::ClassParams = {
	&UXeFGBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXeFGBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UXeFGBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXeFGBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UXeFGBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXeFGBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UXeFGBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXeFGBlueprintLibrary.OuterSingleton;
}
template<> XEFGBLUEPRINT_API UClass* StaticClass<UXeFGBlueprintLibrary>()
{
	return UXeFGBlueprintLibrary::StaticClass();
}
UXeFGBlueprintLibrary::UXeFGBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXeFGBlueprintLibrary);
UXeFGBlueprintLibrary::~UXeFGBlueprintLibrary() {}
// End Class UXeFGBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXeFGMode_StaticEnum, TEXT("EXeFGMode"), &Z_Registration_Info_UEnum_EXeFGMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3320975374U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXeFGBlueprintLibrary, UXeFGBlueprintLibrary::StaticClass, TEXT("UXeFGBlueprintLibrary"), &Z_Registration_Info_UClass_UXeFGBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXeFGBlueprintLibrary), 989384341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_1923540824(TEXT("/Script/XeFGBlueprint"),
	Z_CompiledInDeferFile_FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

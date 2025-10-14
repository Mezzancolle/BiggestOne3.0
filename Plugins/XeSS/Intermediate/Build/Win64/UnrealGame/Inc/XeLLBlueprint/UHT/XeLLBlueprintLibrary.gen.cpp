// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeLLBlueprint/Public/XeLLBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXeLLBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_XeLLBlueprint();
XELLBLUEPRINT_API UClass* Z_Construct_UClass_UXeLLBlueprintLibrary();
XELLBLUEPRINT_API UClass* Z_Construct_UClass_UXeLLBlueprintLibrary_NoRegister();
XELLBLUEPRINT_API UEnum* Z_Construct_UEnum_XeLLBlueprint_EXeLLMode();
// End Cross Module References

// Begin Enum EXeLLMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXeLLMode;
static UEnum* EXeLLMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXeLLMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXeLLMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_XeLLBlueprint_EXeLLMode, (UObject*)Z_Construct_UPackage__Script_XeLLBlueprint(), TEXT("EXeLLMode"));
	}
	return Z_Registration_Info_UEnum_EXeLLMode.OuterSingleton;
}
template<> XELLBLUEPRINT_API UEnum* StaticEnum<EXeLLMode>()
{
	return EXeLLMode_StaticEnum();
}
struct Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EXeLLMode::Off" },
		{ "On.DisplayName", "On" },
		{ "On.Name", "EXeLLMode::On" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXeLLMode::Off", (int64)EXeLLMode::Off },
		{ "EXeLLMode::On", (int64)EXeLLMode::On },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_XeLLBlueprint,
	nullptr,
	"EXeLLMode",
	"EXeLLMode",
	Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_XeLLBlueprint_EXeLLMode()
{
	if (!Z_Registration_Info_UEnum_EXeLLMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXeLLMode.InnerSingleton, Z_Construct_UEnum_XeLLBlueprint_EXeLLMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXeLLMode.InnerSingleton;
}
// End Enum EXeLLMode

// Begin Class UXeLLBlueprintLibrary Function GetFlashIndicatorEnabled
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics
{
	struct XeLLBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GetCheck if the flash indicator is enabled */" },
#endif
		{ "DisplayName", "Get Flash Indicator Enabled" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCheck if the flash indicator is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeLLBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeLLBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms), &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetFlashIndicatorEnabled", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::XeLLBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::XeLLBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetFlashIndicatorEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeLLBlueprintLibrary::GetFlashIndicatorEnabled();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetFlashIndicatorEnabled

// Begin Class UXeLLBlueprintLibrary Function GetGameLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetGameLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get game latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Game Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get game latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetGameLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetGameLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetGameLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetGameLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetGameLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetGameLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetGameLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetGameToRenderLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get game to render latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Game to Render Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get game to render latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetGameToRenderLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetGameToRenderLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetGameToRenderLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetGameToRenderLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetInputLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetInputLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get input latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Input Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get input latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetInputLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetInputLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetInputLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetInputLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetInputLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetInputLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetInputLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetLatencyMarkEnabled
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics
{
	struct XeLLBlueprintLibrary_eventGetLatencyMarkEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get Latency Mark Enabled */" },
#endif
		{ "DisplayName", "Get Latency Mark Enabled" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Latency Mark Enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeLLBlueprintLibrary_eventGetLatencyMarkEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeLLBlueprintLibrary_eventGetLatencyMarkEnabled_Parms), &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetLatencyMarkEnabled", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::XeLLBlueprintLibrary_eventGetLatencyMarkEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::XeLLBlueprintLibrary_eventGetLatencyMarkEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetLatencyMarkEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeLLBlueprintLibrary::GetLatencyMarkEnabled();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetLatencyMarkEnabled

// Begin Class UXeLLBlueprintLibrary Function GetPresentLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetPresentLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get present latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Present Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get present latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetPresentLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetPresentLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetPresentLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetPresentLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetPresentLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetPresentLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetPresentLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetRenderLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetRenderLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get render latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Render Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get render latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetRenderLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetRenderLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetRenderLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetRenderLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetRenderLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetRenderLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetRenderSubmitLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetRenderSubmitLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get render submit latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Render Submit Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get render submit latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetRenderSubmitLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetRenderSubmitLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetRenderSubmitLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetRenderSubmitLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetRenderSubmitLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetRenderSubmitLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetRenderSubmitLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetSimulationLatencyInMs
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics
{
	struct XeLLBlueprintLibrary_eventGetSimulationLatencyInMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get simulation latency in milliseconds */" },
#endif
		{ "DisplayName", "Get Simulation Latency (ms)" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get simulation latency in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetSimulationLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetSimulationLatencyInMs", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetSimulationLatencyInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::XeLLBlueprintLibrary_eventGetSimulationLatencyInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetSimulationLatencyInMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UXeLLBlueprintLibrary::GetSimulationLatencyInMs();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetSimulationLatencyInMs

// Begin Class UXeLLBlueprintLibrary Function GetSupportedXeLLModes
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics
{
	struct XeLLBlueprintLibrary_eventGetSupportedXeLLModes_Parms
	{
		TArray<EXeLLMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List all available Intel XeLL modes */" },
#endif
		{ "DisplayName", "Get Supported Intel(R) XeLL Modes" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List all available Intel XeLL modes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_XeLLBlueprint_EXeLLMode, METADATA_PARAMS(0, nullptr) }; // 3126782564
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetSupportedXeLLModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3126782564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetSupportedXeLLModes", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::XeLLBlueprintLibrary_eventGetSupportedXeLLModes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::XeLLBlueprintLibrary_eventGetSupportedXeLLModes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetSupportedXeLLModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EXeLLMode>*)Z_Param__Result=UXeLLBlueprintLibrary::GetSupportedXeLLModes();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetSupportedXeLLModes

// Begin Class UXeLLBlueprintLibrary Function GetXeLLMode
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics
{
	struct XeLLBlueprintLibrary_eventGetXeLLMode_Parms
	{
		EXeLLMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current Intel XeLL mode */" },
#endif
		{ "DisplayName", "Get Current Intel(R) XeLL Mode" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current Intel XeLL mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventGetXeLLMode_Parms, ReturnValue), Z_Construct_UEnum_XeLLBlueprint_EXeLLMode, METADATA_PARAMS(0, nullptr) }; // 3126782564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "GetXeLLMode", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::XeLLBlueprintLibrary_eventGetXeLLMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::XeLLBlueprintLibrary_eventGetXeLLMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execGetXeLLMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EXeLLMode*)Z_Param__Result=UXeLLBlueprintLibrary::GetXeLLMode();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function GetXeLLMode

// Begin Class UXeLLBlueprintLibrary Function IsXeLLSupported
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics
{
	struct XeLLBlueprintLibrary_eventIsXeLLSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if Intel XeLL is supported on the current platform  */" },
#endif
		{ "DisplayName", "Is Intel(R) XeLL Supported" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if Intel XeLL is supported on the current platform" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((XeLLBlueprintLibrary_eventIsXeLLSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeLLBlueprintLibrary_eventIsXeLLSupported_Parms), &Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "IsXeLLSupported", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::XeLLBlueprintLibrary_eventIsXeLLSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::XeLLBlueprintLibrary_eventIsXeLLSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execIsXeLLSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UXeLLBlueprintLibrary::IsXeLLSupported();
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function IsXeLLSupported

// Begin Class UXeLLBlueprintLibrary Function SetFlashIndicatorEnabled
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics
{
	struct XeLLBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable the flash indicator */" },
#endif
		{ "DisplayName", "Set Flash Indicator Enabled" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable the flash indicator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((XeLLBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XeLLBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms), &Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "SetFlashIndicatorEnabled", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::XeLLBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::XeLLBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execSetFlashIndicatorEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UXeLLBlueprintLibrary::SetFlashIndicatorEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function SetFlashIndicatorEnabled

// Begin Class UXeLLBlueprintLibrary Function SetXeLLMode
struct Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics
{
	struct XeLLBlueprintLibrary_eventSetXeLLMode_Parms
	{
		EXeLLMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "XeLL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the selected Intel XeLL mode */" },
#endif
		{ "DisplayName", "Set Intel(R) XeLL Mode" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the selected Intel XeLL mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XeLLBlueprintLibrary_eventSetXeLLMode_Parms, Mode), Z_Construct_UEnum_XeLLBlueprint_EXeLLMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3126782564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXeLLBlueprintLibrary, nullptr, "SetXeLLMode", nullptr, nullptr, Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::XeLLBlueprintLibrary_eventSetXeLLMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::XeLLBlueprintLibrary_eventSetXeLLMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UXeLLBlueprintLibrary::execSetXeLLMode)
{
	P_GET_ENUM(EXeLLMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UXeLLBlueprintLibrary::SetXeLLMode(EXeLLMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class UXeLLBlueprintLibrary Function SetXeLLMode

// Begin Class UXeLLBlueprintLibrary
void UXeLLBlueprintLibrary::StaticRegisterNativesUXeLLBlueprintLibrary()
{
	UClass* Class = UXeLLBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFlashIndicatorEnabled", &UXeLLBlueprintLibrary::execGetFlashIndicatorEnabled },
		{ "GetGameLatencyInMs", &UXeLLBlueprintLibrary::execGetGameLatencyInMs },
		{ "GetGameToRenderLatencyInMs", &UXeLLBlueprintLibrary::execGetGameToRenderLatencyInMs },
		{ "GetInputLatencyInMs", &UXeLLBlueprintLibrary::execGetInputLatencyInMs },
		{ "GetLatencyMarkEnabled", &UXeLLBlueprintLibrary::execGetLatencyMarkEnabled },
		{ "GetPresentLatencyInMs", &UXeLLBlueprintLibrary::execGetPresentLatencyInMs },
		{ "GetRenderLatencyInMs", &UXeLLBlueprintLibrary::execGetRenderLatencyInMs },
		{ "GetRenderSubmitLatencyInMs", &UXeLLBlueprintLibrary::execGetRenderSubmitLatencyInMs },
		{ "GetSimulationLatencyInMs", &UXeLLBlueprintLibrary::execGetSimulationLatencyInMs },
		{ "GetSupportedXeLLModes", &UXeLLBlueprintLibrary::execGetSupportedXeLLModes },
		{ "GetXeLLMode", &UXeLLBlueprintLibrary::execGetXeLLMode },
		{ "IsXeLLSupported", &UXeLLBlueprintLibrary::execIsXeLLSupported },
		{ "SetFlashIndicatorEnabled", &UXeLLBlueprintLibrary::execSetFlashIndicatorEnabled },
		{ "SetXeLLMode", &UXeLLBlueprintLibrary::execSetXeLLMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXeLLBlueprintLibrary);
UClass* Z_Construct_UClass_UXeLLBlueprintLibrary_NoRegister()
{
	return UXeLLBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UXeLLBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "XeLLBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/XeLLBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetFlashIndicatorEnabled, "GetFlashIndicatorEnabled" }, // 1436580412
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameLatencyInMs, "GetGameLatencyInMs" }, // 3149750293
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetGameToRenderLatencyInMs, "GetGameToRenderLatencyInMs" }, // 1100219958
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetInputLatencyInMs, "GetInputLatencyInMs" }, // 3983523054
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetLatencyMarkEnabled, "GetLatencyMarkEnabled" }, // 3632904744
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetPresentLatencyInMs, "GetPresentLatencyInMs" }, // 2373800987
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderLatencyInMs, "GetRenderLatencyInMs" }, // 2821025203
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetRenderSubmitLatencyInMs, "GetRenderSubmitLatencyInMs" }, // 2191873329
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSimulationLatencyInMs, "GetSimulationLatencyInMs" }, // 3020523127
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetSupportedXeLLModes, "GetSupportedXeLLModes" }, // 1348187249
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_GetXeLLMode, "GetXeLLMode" }, // 1834319838
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_IsXeLLSupported, "IsXeLLSupported" }, // 3917666866
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_SetFlashIndicatorEnabled, "SetFlashIndicatorEnabled" }, // 914638642
		{ &Z_Construct_UFunction_UXeLLBlueprintLibrary_SetXeLLMode, "SetXeLLMode" }, // 2567484035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXeLLBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UXeLLBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_XeLLBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXeLLBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXeLLBlueprintLibrary_Statics::ClassParams = {
	&UXeLLBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXeLLBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UXeLLBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXeLLBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UXeLLBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXeLLBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UXeLLBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXeLLBlueprintLibrary.OuterSingleton;
}
template<> XELLBLUEPRINT_API UClass* StaticClass<UXeLLBlueprintLibrary>()
{
	return UXeLLBlueprintLibrary::StaticClass();
}
UXeLLBlueprintLibrary::UXeLLBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXeLLBlueprintLibrary);
UXeLLBlueprintLibrary::~UXeLLBlueprintLibrary() {}
// End Class UXeLLBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXeLLMode_StaticEnum, TEXT("EXeLLMode"), &Z_Registration_Info_UEnum_EXeLLMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3126782564U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXeLLBlueprintLibrary, UXeLLBlueprintLibrary::StaticClass, TEXT("UXeLLBlueprintLibrary"), &Z_Registration_Info_UClass_UXeLLBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXeLLBlueprintLibrary), 3224658202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_2683185987(TEXT("/Script/XeLLBlueprint"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

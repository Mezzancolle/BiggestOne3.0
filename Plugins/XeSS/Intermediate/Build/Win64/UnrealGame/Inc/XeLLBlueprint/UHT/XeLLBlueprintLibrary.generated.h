// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XeLLBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXeLLMode : uint8;
#ifdef XELLBLUEPRINT_XeLLBlueprintLibrary_generated_h
#error "XeLLBlueprintLibrary.generated.h already included, missing '#pragma once' in XeLLBlueprintLibrary.h"
#endif
#define XELLBLUEPRINT_XeLLBlueprintLibrary_generated_h

#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLatencyMarkEnabled); \
	DECLARE_FUNCTION(execGetInputLatencyInMs); \
	DECLARE_FUNCTION(execGetPresentLatencyInMs); \
	DECLARE_FUNCTION(execGetRenderSubmitLatencyInMs); \
	DECLARE_FUNCTION(execGetSimulationLatencyInMs); \
	DECLARE_FUNCTION(execGetRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetGameLatencyInMs); \
	DECLARE_FUNCTION(execGetGameToRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execSetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execGetXeLLMode); \
	DECLARE_FUNCTION(execSetXeLLMode); \
	DECLARE_FUNCTION(execGetSupportedXeLLModes); \
	DECLARE_FUNCTION(execIsXeLLSupported);


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXeLLBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UXeLLBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UXeLLBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XeLLBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UXeLLBlueprintLibrary)


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXeLLBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UXeLLBlueprintLibrary(UXeLLBlueprintLibrary&&); \
	UXeLLBlueprintLibrary(const UXeLLBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXeLLBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXeLLBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXeLLBlueprintLibrary) \
	NO_API virtual ~UXeLLBlueprintLibrary();


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_38_PROLOG
#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XELLBLUEPRINT_API UClass* StaticClass<class UXeLLBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_XeSS_Source_XeLLBlueprint_Public_XeLLBlueprintLibrary_h


#define FOREACH_ENUM_EXELLMODE(op) \
	op(EXeLLMode::Off) \
	op(EXeLLMode::On) 

enum class EXeLLMode : uint8;
template<> struct TIsUEnumClass<EXeLLMode> { enum { Value = true }; };
template<> XELLBLUEPRINT_API UEnum* StaticEnum<EXeLLMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

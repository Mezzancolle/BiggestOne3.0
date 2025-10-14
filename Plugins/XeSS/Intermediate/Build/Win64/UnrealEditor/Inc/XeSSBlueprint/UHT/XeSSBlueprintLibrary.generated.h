// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XeSSBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXeSSQualityMode : uint8;
#ifdef XESSBLUEPRINT_XeSSBlueprintLibrary_generated_h
#error "XeSSBlueprintLibrary.generated.h already included, missing '#pragma once' in XeSSBlueprintLibrary.h"
#endif
#define XESSBLUEPRINT_XeSSBlueprintLibrary_generated_h

#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetXeSSQualityModeInformation); \
	DECLARE_FUNCTION(execSetXeSSQualityMode); \
	DECLARE_FUNCTION(execGetDefaultXeSSQualityMode); \
	DECLARE_FUNCTION(execGetXeSSQualityMode); \
	DECLARE_FUNCTION(execGetSupportedXeSSQualityModes); \
	DECLARE_FUNCTION(execIsXeSSSupported);


#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXeSSBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UXeSSBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UXeSSBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XeSSBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UXeSSBlueprintLibrary)


#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXeSSBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UXeSSBlueprintLibrary(UXeSSBlueprintLibrary&&); \
	UXeSSBlueprintLibrary(const UXeSSBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXeSSBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXeSSBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXeSSBlueprintLibrary) \
	NO_API virtual ~UXeSSBlueprintLibrary();


#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_49_PROLOG
#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_INCLASS_NO_PURE_DECLS \
	FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XESSBLUEPRINT_API UClass* StaticClass<class UXeSSBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeSSBlueprint_Public_XeSSBlueprintLibrary_h


#define FOREACH_ENUM_EXESSQUALITYMODE(op) \
	op(EXeSSQualityMode::Off) \
	op(EXeSSQualityMode::UltraPerformance) \
	op(EXeSSQualityMode::Performance) \
	op(EXeSSQualityMode::Balanced) \
	op(EXeSSQualityMode::Quality) \
	op(EXeSSQualityMode::UltraQuality) \
	op(EXeSSQualityMode::UltraQualityPlus) \
	op(EXeSSQualityMode::AntiAliasing) 

enum class EXeSSQualityMode : uint8;
template<> struct TIsUEnumClass<EXeSSQualityMode> { enum { Value = true }; };
template<> XESSBLUEPRINT_API UEnum* StaticEnum<EXeSSQualityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

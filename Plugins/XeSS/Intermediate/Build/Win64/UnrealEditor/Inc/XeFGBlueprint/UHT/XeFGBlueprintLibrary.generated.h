// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XeFGBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXeFGMode : uint8;
#ifdef XEFGBLUEPRINT_XeFGBlueprintLibrary_generated_h
#error "XeFGBlueprintLibrary.generated.h already included, missing '#pragma once' in XeFGBlueprintLibrary.h"
#endif
#define XEFGBLUEPRINT_XeFGBlueprintLibrary_generated_h

#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIfRelaunchRequiredByXeFG); \
	DECLARE_FUNCTION(execSetXeFGMode); \
	DECLARE_FUNCTION(execGetXeFGMode); \
	DECLARE_FUNCTION(execGetSupportedXeFGModes); \
	DECLARE_FUNCTION(execIsXeFGSupported);


#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXeFGBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UXeFGBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UXeFGBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XeFGBlueprint"), NO_API) \
	DECLARE_SERIALIZER(UXeFGBlueprintLibrary)


#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXeFGBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UXeFGBlueprintLibrary(UXeFGBlueprintLibrary&&); \
	UXeFGBlueprintLibrary(const UXeFGBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXeFGBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXeFGBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXeFGBlueprintLibrary) \
	NO_API virtual ~UXeFGBlueprintLibrary();


#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_39_PROLOG
#define FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_INCLASS_NO_PURE_DECLS \
	FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XEFGBLUEPRINT_API UClass* StaticClass<class UXeFGBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_actions_runner__work__temp_build_5_5_HostProject_Plugins_XeSS_Source_XeFGBlueprint_Public_XeFGBlueprintLibrary_h


#define FOREACH_ENUM_EXEFGMODE(op) \
	op(EXeFGMode::Off) \
	op(EXeFGMode::On) 

enum class EXeFGMode : uint8;
template<> struct TIsUEnumClass<EXeFGMode> { enum { Value = true }; };
template<> XEFGBLUEPRINT_API UEnum* StaticEnum<EXeFGMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

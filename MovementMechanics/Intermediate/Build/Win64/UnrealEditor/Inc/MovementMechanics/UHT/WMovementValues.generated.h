// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WMovementValues.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEMENTMECHANICS_WMovementValues_generated_h
#error "WMovementValues.generated.h already included, missing '#pragma once' in WMovementValues.h"
#endif
#define MOVEMENTMECHANICS_WMovementValues_generated_h

#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetData);


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWMovementValues(); \
	friend struct Z_Construct_UClass_UWMovementValues_Statics; \
public: \
	DECLARE_CLASS(UWMovementValues, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovementMechanics"), NO_API) \
	DECLARE_SERIALIZER(UWMovementValues)


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWMovementValues(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWMovementValues(UWMovementValues&&); \
	UWMovementValues(const UWMovementValues&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWMovementValues); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWMovementValues); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWMovementValues) \
	NO_API virtual ~UWMovementValues();


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_14_PROLOG
#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_INCLASS_NO_PURE_DECLS \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEMENTMECHANICS_API UClass* StaticClass<class UWMovementValues>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

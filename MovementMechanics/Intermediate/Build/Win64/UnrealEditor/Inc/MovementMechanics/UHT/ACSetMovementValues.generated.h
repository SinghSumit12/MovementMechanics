// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACSetMovementValues.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UCharacterMovementComponent;
class UUserWidget;
enum class EMovementMechanics : uint8;
#ifdef MOVEMENTMECHANICS_ACSetMovementValues_generated_h
#error "ACSetMovementValues.generated.h already included, missing '#pragma once' in ACSetMovementValues.h"
#endif
#define MOVEMENTMECHANICS_ACSetMovementValues_generated_h

#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execSetUIWidgetClass); \
	DECLARE_FUNCTION(execSetNewValue); \
	DECLARE_FUNCTION(execSetComponents);


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACSetMovementValues(); \
	friend struct Z_Construct_UClass_UACSetMovementValues_Statics; \
public: \
	DECLARE_CLASS(UACSetMovementValues, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementMechanics"), NO_API) \
	DECLARE_SERIALIZER(UACSetMovementValues)


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UACSetMovementValues(UACSetMovementValues&&); \
	UACSetMovementValues(const UACSetMovementValues&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACSetMovementValues); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACSetMovementValues); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACSetMovementValues) \
	NO_API virtual ~UACSetMovementValues();


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_11_PROLOG
#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_INCLASS_NO_PURE_DECLS \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEMENTMECHANICS_API UClass* StaticClass<class UACSetMovementValues>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

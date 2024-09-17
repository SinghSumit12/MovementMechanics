// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISetMovementValues.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovementMechanics : uint8;
#ifdef MOVEMENTMECHANICS_ISetMovementValues_generated_h
#error "ISetMovementValues.generated.h already included, missing '#pragma once' in ISetMovementValues.h"
#endif
#define MOVEMENTMECHANICS_ISetMovementValues_generated_h

#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNewValue); \
	DECLARE_FUNCTION(execDecreaseFOV); \
	DECLARE_FUNCTION(execIncreaseFOV); \
	DECLARE_FUNCTION(execDecreaseValue); \
	DECLARE_FUNCTION(execIncreaseValue);


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVEMENTMECHANICS_API UISetMovementValues(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UISetMovementValues(UISetMovementValues&&); \
	UISetMovementValues(const UISetMovementValues&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVEMENTMECHANICS_API, UISetMovementValues); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISetMovementValues); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISetMovementValues) \
	MOVEMENTMECHANICS_API virtual ~UISetMovementValues();


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISetMovementValues(); \
	friend struct Z_Construct_UClass_UISetMovementValues_Statics; \
public: \
	DECLARE_CLASS(UISetMovementValues, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovementMechanics"), MOVEMENTMECHANICS_API) \
	DECLARE_SERIALIZER(UISetMovementValues)


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_GENERATED_UINTERFACE_BODY() \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISetMovementValues() {} \
public: \
	typedef UISetMovementValues UClassType; \
	typedef IISetMovementValues ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_11_PROLOG
#define FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEMENTMECHANICS_API UClass* StaticClass<class UISetMovementValues>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

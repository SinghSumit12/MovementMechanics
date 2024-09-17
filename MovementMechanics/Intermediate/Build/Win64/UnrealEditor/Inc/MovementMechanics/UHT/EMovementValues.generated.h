// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EMovementValues.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEMENTMECHANICS_EMovementValues_generated_h
#error "EMovementValues.generated.h already included, missing '#pragma once' in EMovementValues.h"
#endif
#define MOVEMENTMECHANICS_EMovementValues_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_EMovementValues_h


#define FOREACH_ENUM_EMOVEMENTMECHANICS(op) \
	op(EMovementMechanics::MaxWalkSpeed) \
	op(EMovementMechanics::BreakDecelerationWalk) \
	op(EMovementMechanics::GravityScale) \
	op(EMovementMechanics::MaxAcceleration) \
	op(EMovementMechanics::BrakingFriction) \
	op(EMovementMechanics::Mass) \
	op(EMovementMechanics::BrakingFrictionFactor) \
	op(EMovementMechanics::JumpZVelocity) \
	op(EMovementMechanics::BrakingDeceleration) \
	op(EMovementMechanics::AirControl) \
	op(EMovementMechanics::AcBoostMultiplier) \
	op(EMovementMechanics::AcBoostVelocity) \
	op(EMovementMechanics::FallingLateralFriction) \
	op(EMovementMechanics::FieldOfView) 

enum class EMovementMechanics : uint8;
template<> struct TIsUEnumClass<EMovementMechanics> { enum { Value = true }; };
template<> MOVEMENTMECHANICS_API UEnum* StaticEnum<EMovementMechanics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

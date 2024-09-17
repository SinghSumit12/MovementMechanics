// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EMovementMechanics : uint8
{
	MaxWalkSpeed UMETA(DisplayName = "MaxWalkSpeed"),
	BreakDecelerationWalk UMETA(DisplayName = "BreakDecelerationWalk"),
	GravityScale UMETA(DisplayName = "GravityScale"),
	MaxAcceleration UMETA(DisplayName = "MaxAcceleration"),
	BrakingFriction UMETA(DisplayName = "BrakingFriction"),
	Mass UMETA(DisplayName = "Mass"),
	BrakingFrictionFactor UMETA(DisplayName = "BrakingFrictionFactor"),
	JumpZVelocity UMETA(DisplayName = "JumpZVelo"),
	BrakingDeceleration UMETA(DisplayName = "BrakingDeceleration"),
	AirControl UMETA(DisplayName = "AirControl"),
	AcBoostMultiplier UMETA(DisplayName = "ACBoostMultiplier"),
	AcBoostVelocity UMETA(DisplayName = "ACBoostVelocity"),
	FallingLateralFriction UMETA(DisplayName = "FallingLateralFriction"),
	FieldOfView UMETA(DisplayName = "Field of View")
	
	// Add more attributes as needed
};

class MOVEMENTMECHANICS_API EMovementValues
{
public:
	EMovementValues();
	~EMovementValues();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EMovementValues.h"
#include "UObject/Interface.h"
#include "ISetMovementValues.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISetMovementValues : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MOVEMENTMECHANICS_API IISetMovementValues
{
	GENERATED_BODY()

public:
	// Function to increase an attribute's value
	UFUNCTION(Category = "Movemment Mechanics")
	virtual void IncreaseValue(float Amount, EMovementMechanics Attribute) = 0;

	// Function to decrease an attribute's value
	UFUNCTION(Category = "Movemment Mechanics")
	virtual void DecreaseValue(float Amount, EMovementMechanics Attribute) = 0;

	// Function to increase the field of view
	UFUNCTION(Category = "Movemment Mechanics")
	virtual void IncreaseFOV(float Amount) = 0;

	// Function to decrease the field of view
	UFUNCTION(Category = "Movemment Mechanics")
	virtual void DecreaseFOV(float Amount) = 0;
	
	UFUNCTION(Category= "Movemment Mechanics")
	virtual void SetNewValue(float NewValue, EMovementMechanics Attribute) = 0;

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};

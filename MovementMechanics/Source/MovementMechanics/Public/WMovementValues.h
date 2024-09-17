// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ACSetMovementValues.h"
#include "Components/EditableText.h"
#include "WMovementValues.generated.h"

/**
 * 
 */
UCLASS()
class MOVEMENTMECHANICS_API UWMovementValues : public UUserWidget
{
	GENERATED_BODY()

public:
	// Function to set the reference to the movement values component
	void SetMovementValuesComponent(UACSetMovementValues* NewMovementValuesComponent);

	UFUNCTION(BlueprintCallable, Category = "Movement Mechanics")
	void SetData();

protected:
	// Variable to hold a reference to the movement values component
	UPROPERTY(BlueprintReadOnly, Category = "Movement Mechanics")
	UACSetMovementValues* MovementValuesComponent;
	
	// Text blocks for each movement mechanic
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* MaxWalkSpeedText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* BreakDecelerationWalkText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* GravityScaleText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* MaxAccelerationText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* BrakingFrictionText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* MassText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* BrakingFrictionFactorText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* JumpZVelocityText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* BrakingDecelerationText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* AirControlText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* AcBoostMultiplierText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* AcBoostVelocityText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* FallingLateralFrictionText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category="Movement Mechanics")
	UEditableText* FieldOfViewText;
};


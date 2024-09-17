#include "WMovementValues.h"
#include "ACSetMovementValues.h"
#include "Kismet/KismetStringLibrary.h"
#include "Components/EditableText.h"

void UWMovementValues::SetMovementValuesComponent(UACSetMovementValues* NewMovementValuesComponent)
{
    MovementValuesComponent = NewMovementValuesComponent;
}

void UWMovementValues::SetData()
{
    if (!MovementValuesComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("MovementValuesComponent is null in WMovementValues"));
        return;
    }

    // Helper lambda to set text safely for UEditableText and log values
    auto SetTextSafely = [this](UEditableText* TextBox, EMovementMechanics Attribute) {
        if (TextBox && MovementValuesComponent)
        {
            float Value = MovementValuesComponent->GetAttributeValue(Attribute);

            // Log the value retrieved from MovementValuesComponent
            UE_LOG(LogTemp, Log, TEXT("Retrieved Value for %s: %f"), *UEnum::GetValueAsString(Attribute), Value);

            // Ensure value is valid (not zero or invalid)
            if (Value == 0.0f)
            {
                UE_LOG(LogTemp, Warning, TEXT("Value for %s is zero"), *UEnum::GetValueAsString(Attribute));
            }

            // Set the text in the EditableTextBox
            FString ValueString = FString::SanitizeFloat(Value, 2);
            TextBox->SetText(FText::FromString(ValueString));

            // Log the text being set in the UI
            UE_LOG(LogTemp, Log, TEXT("Setting UI Text for %s: %s"), *UEnum::GetValueAsString(Attribute), *ValueString);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("TextBox or MovementValuesComponent is null for %s"), *UEnum::GetValueAsString(Attribute));
        }
    };

    // Set text for each movement mechanic using UEditableText and log each step
    SetTextSafely(MaxWalkSpeedText, EMovementMechanics::MaxWalkSpeed);
    SetTextSafely(BreakDecelerationWalkText, EMovementMechanics::BreakDecelerationWalk);
    SetTextSafely(GravityScaleText, EMovementMechanics::GravityScale);
    SetTextSafely(MaxAccelerationText, EMovementMechanics::MaxAcceleration);
    SetTextSafely(BrakingFrictionText, EMovementMechanics::BrakingFriction);
    SetTextSafely(MassText, EMovementMechanics::Mass);
    SetTextSafely(BrakingFrictionFactorText, EMovementMechanics::BrakingFrictionFactor);
    SetTextSafely(JumpZVelocityText, EMovementMechanics::JumpZVelocity);
    SetTextSafely(BrakingDecelerationText, EMovementMechanics::BrakingDeceleration);
    SetTextSafely(AirControlText, EMovementMechanics::AirControl);
    SetTextSafely(AcBoostMultiplierText, EMovementMechanics::AcBoostMultiplier);
    SetTextSafely(AcBoostVelocityText, EMovementMechanics::AcBoostVelocity);
    SetTextSafely(FallingLateralFrictionText, EMovementMechanics::FallingLateralFriction);
    SetTextSafely(FieldOfViewText, EMovementMechanics::FieldOfView);
}

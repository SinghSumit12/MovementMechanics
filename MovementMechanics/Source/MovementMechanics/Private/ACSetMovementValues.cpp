#include "ACSetMovementValues.h"
#include "WMovementValues.h"
#include "SG_StoreMovementValues.h"
#include "Kismet/GameplayStatics.h"
//Defining Null pointers for movement, camera and Widget Component
UACSetMovementValues::UACSetMovementValues()
    : MovementComponent(nullptr), CameraComponent(nullptr), CurrentUIWidget(nullptr)
{
}
//BeginPlay
void UACSetMovementValues::BeginPlay()
{
    Super::BeginPlay();
}
//Function to pass Camera and movement component
void UACSetMovementValues::SetComponents(UCharacterMovementComponent* NewMovementComponent, UCameraComponent* NewCameraComponent)
{
    MovementComponent = NewMovementComponent;
    CameraComponent = NewCameraComponent;
    
    // Load values from save game or initialize defaults
    if (!LoadMovementValues())
    {
        InitializeDefaultValues();
        SaveMovementValues();
    }

    UpdateComponentValues();
    CreateAndSetupWidget();
}

//Interface Function to update the value when edited
void UACSetMovementValues::SetNewValue(float NewValue, EMovementMechanics Attribute)
{
    AttributeValues.Add(Attribute, NewValue);
    UpdateComponentValues();
    SaveMovementValues();
}
//Function to set the UMG class 
void UACSetMovementValues::SetUIWidgetClass(TSubclassOf<UUserWidget> NewUIWidgetClass)
{
    UIWidgetClass = NewUIWidgetClass;
    CreateAndSetupWidget();
}

//function to save values to the savegame file 
void UACSetMovementValues::SaveMovementValues() const
{
    USG_StoreMovementValues* SaveGameInstance = Cast<USG_StoreMovementValues>(UGameplayStatics::CreateSaveGameObject(USG_StoreMovementValues::StaticClass()));
    if (SaveGameInstance)
    {
        SaveGameInstance->StoredMovementValues = AttributeValues;
        if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("PlayerSaveSlot"), 0))
        {
            UE_LOG(LogTemp, Warning, TEXT("Successfully saved values to save game."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to save game to slot."));
        }
    }
}
//function to load values from savegame file
bool UACSetMovementValues::LoadMovementValues()
{
    USG_StoreMovementValues* LoadedGameInstance = Cast<USG_StoreMovementValues>(UGameplayStatics::LoadGameFromSlot(TEXT("PlayerSaveSlot"), 0));
    if (LoadedGameInstance)
    {
        AttributeValues = LoadedGameInstance->StoredMovementValues;
        UE_LOG(LogTemp, Warning, TEXT("Loaded values from save game."));
        return true;
    }
    UE_LOG(LogTemp, Warning, TEXT("No save game found."));
    return false;
}

void UACSetMovementValues::InitializeDefaultValues()
{
    for (int32 i = 0; i <= static_cast<int32>(EMovementMechanics::FieldOfView); ++i)
    {
        EMovementMechanics Attribute = static_cast<EMovementMechanics>(i);
        float DefaultValue = GetComponentValueForAttribute(Attribute);
        AttributeValues.Add(Attribute, DefaultValue);
    }
}

void UACSetMovementValues::UpdateComponentValues()
{
    // Ensure the components are valid before updating their values
    if (!MovementComponent || !CameraComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("MovementComponent or CameraComponent is not valid when updating component values."));
        return;
    }

    for (const auto& Pair : AttributeValues)
    {
        switch (Pair.Key)
        {
            case EMovementMechanics::MaxWalkSpeed:
                MovementComponent->MaxWalkSpeed = Pair.Value;
                break;
            case EMovementMechanics::BreakDecelerationWalk:
                MovementComponent->BrakingDecelerationWalking = Pair.Value;
                break;
            case EMovementMechanics::GravityScale:
                MovementComponent->GravityScale = Pair.Value;
                break;
            case EMovementMechanics::MaxAcceleration:
                MovementComponent->MaxAcceleration = Pair.Value;
                break;
            case EMovementMechanics::BrakingFriction:
                MovementComponent->BrakingFriction = Pair.Value;
                break;
            case EMovementMechanics::Mass:
                MovementComponent->Mass = Pair.Value;
                break;
            case EMovementMechanics::BrakingFrictionFactor:
                MovementComponent->BrakingFrictionFactor = Pair.Value;
                break;
            case EMovementMechanics::JumpZVelocity:
                MovementComponent->JumpZVelocity = Pair.Value;
                break;
            case EMovementMechanics::BrakingDeceleration:
                MovementComponent->BrakingDecelerationWalking = Pair.Value;
                break;
            case EMovementMechanics::AirControl:
                MovementComponent->AirControl = Pair.Value;
                break;
            case EMovementMechanics::AcBoostMultiplier:
                MovementComponent->AirControlBoostMultiplier = Pair.Value;
                break;
            case EMovementMechanics::AcBoostVelocity:
                MovementComponent->AirControlBoostVelocityThreshold = Pair.Value;
                break;
            case EMovementMechanics::FallingLateralFriction:
                MovementComponent->FallingLateralFriction = Pair.Value;
                break;
            case EMovementMechanics::FieldOfView:
                CameraComponent->FieldOfView = Pair.Value;
                break;
        }
    }
}

void UACSetMovementValues::CreateAndSetupWidget()
{
    if (UIWidgetClass && !CurrentUIWidget)
    {
        CurrentUIWidget = CreateWidget<UWMovementValues>(GetWorld(), UIWidgetClass);
        if (CurrentUIWidget)
        {
            CurrentUIWidget->SetMovementValuesComponent(this);
            CurrentUIWidget->AddToViewport();
            CurrentUIWidget->SetData();
        }
    }
}


float UACSetMovementValues::GetAttributeValue(EMovementMechanics Attribute) const
{
    const float* Value = AttributeValues.Find(Attribute);
    return Value ? *Value : 0.0f;
}

float UACSetMovementValues::GetComponentValueForAttribute(EMovementMechanics Attribute) const
{
    // Check if the components are valid
    if (!MovementComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("MovementComponent is not valid when trying to get value for %s"), *UEnum::GetValueAsString(Attribute));
        return 0.0f;
    }

    if (!CameraComponent && Attribute == EMovementMechanics::FieldOfView)
    {
        UE_LOG(LogTemp, Error, TEXT("CameraComponent is not valid when trying to get value for FieldOfView"));
        return 0.0f;
    }

    // Return the appropriate value based on the attribute
    switch (Attribute)
    {
        case EMovementMechanics::MaxWalkSpeed:
            return MovementComponent->MaxWalkSpeed;
        case EMovementMechanics::BreakDecelerationWalk:
            return MovementComponent->BrakingDecelerationWalking;
        case EMovementMechanics::GravityScale:
            return MovementComponent->GravityScale;
        case EMovementMechanics::MaxAcceleration:
            return MovementComponent->MaxAcceleration;
        case EMovementMechanics::BrakingFriction:
            return MovementComponent->BrakingFriction;
        case EMovementMechanics::Mass:
            return MovementComponent->Mass;
        case EMovementMechanics::BrakingFrictionFactor:
            return MovementComponent->BrakingFrictionFactor;
        case EMovementMechanics::JumpZVelocity:
            return MovementComponent->JumpZVelocity;
        case EMovementMechanics::BrakingDeceleration:
            return MovementComponent->BrakingDecelerationWalking;
        case EMovementMechanics::AirControl:
            return MovementComponent->AirControl;
        case EMovementMechanics::AcBoostMultiplier:
            return MovementComponent->AirControlBoostMultiplier;
        case EMovementMechanics::AcBoostVelocity:
            return MovementComponent->AirControlBoostVelocityThreshold;
        case EMovementMechanics::FallingLateralFriction:
            return MovementComponent->FallingLateralFriction;
        case EMovementMechanics::FieldOfView:
            return CameraComponent->FieldOfView;
        default:
            UE_LOG(LogTemp, Warning, TEXT("Unknown attribute: %s"), *UEnum::GetValueAsString(Attribute));
            return 0.0f;
    }
}
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMovementValues.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/UserWidget.h"
#include "ACSetMovementValues.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MOVEMENTMECHANICS_API UACSetMovementValues : public UActorComponent
{
	GENERATED_BODY()

public:
	UACSetMovementValues();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Movement Mechanics")
	void SetComponents(UCharacterMovementComponent* NewMovementComponent, UCameraComponent* NewCameraComponent);

	UFUNCTION(BlueprintCallable, Category="Movement Mechanics")
	void SetNewValue(float NewValue, EMovementMechanics Attribute);

	UFUNCTION(BlueprintCallable, Category = "Movement Mechanics")
	void SetUIWidgetClass(TSubclassOf<UUserWidget> NewUIWidgetClass);
	
    UFUNCTION(BlueprintCallable, Category = "Movement Mechanics")
    float GetAttributeValue(EMovementMechanics Attribute) const;
	
private:
	UPROPERTY()
	UCharacterMovementComponent* MovementComponent;

	UPROPERTY()
	UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Mechanics", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> UIWidgetClass;
    
	UPROPERTY()
	class UWMovementValues* CurrentUIWidget;

	UPROPERTY()
	TMap<EMovementMechanics, float> AttributeValues;

	void SaveMovementValues() const;
	bool LoadMovementValues();
	void InitializeDefaultValues();
	void UpdateComponentValues();
	void CreateAndSetupWidget();
	float GetComponentValueForAttribute(EMovementMechanics Attribute) const;
};
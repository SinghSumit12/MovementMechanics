// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementMechanics/Public/ACSetMovementValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACSetMovementValues() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UACSetMovementValues();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UACSetMovementValues_NoRegister();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UWMovementValues_NoRegister();
MOVEMENTMECHANICS_API UEnum* Z_Construct_UEnum_MovementMechanics_EMovementMechanics();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovementMechanics();
// End Cross Module References

// Begin Class UACSetMovementValues Function GetAttributeValue
struct Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics
{
	struct ACSetMovementValues_eventGetAttributeValue_Parms
	{
		EMovementMechanics Attribute;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Mechanics" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventGetAttributeValue_Parms, Attribute), Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::NewProp_Attribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACSetMovementValues, nullptr, "GetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::ACSetMovementValues_eventGetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::ACSetMovementValues_eventGetAttributeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACSetMovementValues::execGetAttributeValue)
{
	P_GET_ENUM(EMovementMechanics,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttributeValue(EMovementMechanics(Z_Param_Attribute));
	P_NATIVE_END;
}
// End Class UACSetMovementValues Function GetAttributeValue

// Begin Class UACSetMovementValues Function SetComponents
struct Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics
{
	struct ACSetMovementValues_eventSetComponents_Parms
	{
		UCharacterMovementComponent* NewMovementComponent;
		UCameraComponent* NewCameraComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Mechanics" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::NewProp_NewMovementComponent = { "NewMovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventSetComponents_Parms, NewMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMovementComponent_MetaData), NewProp_NewMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::NewProp_NewCameraComponent = { "NewCameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventSetComponents_Parms, NewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCameraComponent_MetaData), NewProp_NewCameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::NewProp_NewMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::NewProp_NewCameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACSetMovementValues, nullptr, "SetComponents", nullptr, nullptr, Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::ACSetMovementValues_eventSetComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::ACSetMovementValues_eventSetComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UACSetMovementValues_SetComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACSetMovementValues_SetComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACSetMovementValues::execSetComponents)
{
	P_GET_OBJECT(UCharacterMovementComponent,Z_Param_NewMovementComponent);
	P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetComponents(Z_Param_NewMovementComponent,Z_Param_NewCameraComponent);
	P_NATIVE_END;
}
// End Class UACSetMovementValues Function SetComponents

// Begin Class UACSetMovementValues Function SetNewValue
struct Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics
{
	struct ACSetMovementValues_eventSetNewValue_Parms
	{
		float NewValue;
		EMovementMechanics Attribute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Mechanics" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventSetNewValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventSetNewValue_Parms, Attribute), Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::NewProp_Attribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACSetMovementValues, nullptr, "SetNewValue", nullptr, nullptr, Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::ACSetMovementValues_eventSetNewValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::ACSetMovementValues_eventSetNewValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UACSetMovementValues_SetNewValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACSetMovementValues_SetNewValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACSetMovementValues::execSetNewValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_GET_ENUM(EMovementMechanics,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewValue(Z_Param_NewValue,EMovementMechanics(Z_Param_Attribute));
	P_NATIVE_END;
}
// End Class UACSetMovementValues Function SetNewValue

// Begin Class UACSetMovementValues Function SetUIWidgetClass
struct Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics
{
	struct ACSetMovementValues_eventSetUIWidgetClass_Parms
	{
		TSubclassOf<UUserWidget> NewUIWidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Mechanics" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewUIWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::NewProp_NewUIWidgetClass = { "NewUIWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACSetMovementValues_eventSetUIWidgetClass_Parms, NewUIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::NewProp_NewUIWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACSetMovementValues, nullptr, "SetUIWidgetClass", nullptr, nullptr, Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::ACSetMovementValues_eventSetUIWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::ACSetMovementValues_eventSetUIWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACSetMovementValues::execSetUIWidgetClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewUIWidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIWidgetClass(Z_Param_NewUIWidgetClass);
	P_NATIVE_END;
}
// End Class UACSetMovementValues Function SetUIWidgetClass

// Begin Class UACSetMovementValues
void UACSetMovementValues::StaticRegisterNativesUACSetMovementValues()
{
	UClass* Class = UACSetMovementValues::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributeValue", &UACSetMovementValues::execGetAttributeValue },
		{ "SetComponents", &UACSetMovementValues::execSetComponents },
		{ "SetNewValue", &UACSetMovementValues::execSetNewValue },
		{ "SetUIWidgetClass", &UACSetMovementValues::execSetUIWidgetClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACSetMovementValues);
UClass* Z_Construct_UClass_UACSetMovementValues_NoRegister()
{
	return UACSetMovementValues::StaticClass();
}
struct Z_Construct_UClass_UACSetMovementValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ACSetMovementValues.h" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement Mechanics" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUIWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ACSetMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentUIWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UACSetMovementValues_GetAttributeValue, "GetAttributeValue" }, // 1954647286
		{ &Z_Construct_UFunction_UACSetMovementValues_SetComponents, "SetComponents" }, // 1284880086
		{ &Z_Construct_UFunction_UACSetMovementValues_SetNewValue, "SetNewValue" }, // 63101058
		{ &Z_Construct_UFunction_UACSetMovementValues_SetUIWidgetClass, "SetUIWidgetClass" }, // 4229797121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACSetMovementValues>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACSetMovementValues, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACSetMovementValues, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACSetMovementValues, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetClass_MetaData), NewProp_UIWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_CurrentUIWidget = { "CurrentUIWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACSetMovementValues, CurrentUIWidget), Z_Construct_UClass_UWMovementValues_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUIWidget_MetaData), NewProp_CurrentUIWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues_ValueProp = { "AttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues_Key_KeyProp = { "AttributeValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACSetMovementValues, AttributeValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValues_MetaData), NewProp_AttributeValues_MetaData) }; // 1174351921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACSetMovementValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_UIWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_CurrentUIWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACSetMovementValues_Statics::NewProp_AttributeValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACSetMovementValues_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UACSetMovementValues_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MovementMechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACSetMovementValues_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UACSetMovementValues_Statics::ClassParams = {
	&UACSetMovementValues::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UACSetMovementValues_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UACSetMovementValues_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACSetMovementValues_Statics::Class_MetaDataParams), Z_Construct_UClass_UACSetMovementValues_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UACSetMovementValues()
{
	if (!Z_Registration_Info_UClass_UACSetMovementValues.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACSetMovementValues.OuterSingleton, Z_Construct_UClass_UACSetMovementValues_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UACSetMovementValues.OuterSingleton;
}
template<> MOVEMENTMECHANICS_API UClass* StaticClass<UACSetMovementValues>()
{
	return UACSetMovementValues::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UACSetMovementValues);
UACSetMovementValues::~UACSetMovementValues() {}
// End Class UACSetMovementValues

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UACSetMovementValues, UACSetMovementValues::StaticClass, TEXT("UACSetMovementValues"), &Z_Registration_Info_UClass_UACSetMovementValues, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACSetMovementValues), 1499116384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_2885185726(TEXT("/Script/MovementMechanics"),
	Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ACSetMovementValues_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

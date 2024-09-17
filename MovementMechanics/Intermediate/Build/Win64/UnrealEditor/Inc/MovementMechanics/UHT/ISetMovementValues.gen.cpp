// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementMechanics/Public/ISetMovementValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISetMovementValues() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UISetMovementValues();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UISetMovementValues_NoRegister();
MOVEMENTMECHANICS_API UEnum* Z_Construct_UEnum_MovementMechanics_EMovementMechanics();
UPackage* Z_Construct_UPackage__Script_MovementMechanics();
// End Cross Module References

// Begin Interface UISetMovementValues Function DecreaseFOV
struct Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics
{
	struct ISetMovementValues_eventDecreaseFOV_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movemment Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to decrease the field of view\n" },
#endif
		{ "ModuleRelativePath", "Public/ISetMovementValues.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to decrease the field of view" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventDecreaseFOV_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISetMovementValues, nullptr, "DecreaseFOV", nullptr, nullptr, Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::ISetMovementValues_eventDecreaseFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::ISetMovementValues_eventDecreaseFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISetMovementValues_DecreaseFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISetMovementValues_DecreaseFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IISetMovementValues::execDecreaseFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseFOV(Z_Param_Amount);
	P_NATIVE_END;
}
// End Interface UISetMovementValues Function DecreaseFOV

// Begin Interface UISetMovementValues Function DecreaseValue
struct Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics
{
	struct ISetMovementValues_eventDecreaseValue_Parms
	{
		float Amount;
		EMovementMechanics Attribute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movemment Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to decrease an attribute's value\n" },
#endif
		{ "ModuleRelativePath", "Public/ISetMovementValues.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to decrease an attribute's value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventDecreaseValue_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventDecreaseValue_Parms, Attribute), Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::NewProp_Attribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISetMovementValues, nullptr, "DecreaseValue", nullptr, nullptr, Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::ISetMovementValues_eventDecreaseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::ISetMovementValues_eventDecreaseValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISetMovementValues_DecreaseValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISetMovementValues_DecreaseValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IISetMovementValues::execDecreaseValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_GET_ENUM(EMovementMechanics,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseValue(Z_Param_Amount,EMovementMechanics(Z_Param_Attribute));
	P_NATIVE_END;
}
// End Interface UISetMovementValues Function DecreaseValue

// Begin Interface UISetMovementValues Function IncreaseFOV
struct Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics
{
	struct ISetMovementValues_eventIncreaseFOV_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movemment Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to increase the field of view\n" },
#endif
		{ "ModuleRelativePath", "Public/ISetMovementValues.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to increase the field of view" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventIncreaseFOV_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISetMovementValues, nullptr, "IncreaseFOV", nullptr, nullptr, Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::ISetMovementValues_eventIncreaseFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::ISetMovementValues_eventIncreaseFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISetMovementValues_IncreaseFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISetMovementValues_IncreaseFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IISetMovementValues::execIncreaseFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseFOV(Z_Param_Amount);
	P_NATIVE_END;
}
// End Interface UISetMovementValues Function IncreaseFOV

// Begin Interface UISetMovementValues Function IncreaseValue
struct Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics
{
	struct ISetMovementValues_eventIncreaseValue_Parms
	{
		float Amount;
		EMovementMechanics Attribute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movemment Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to increase an attribute's value\n" },
#endif
		{ "ModuleRelativePath", "Public/ISetMovementValues.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to increase an attribute's value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventIncreaseValue_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventIncreaseValue_Parms, Attribute), Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::NewProp_Attribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISetMovementValues, nullptr, "IncreaseValue", nullptr, nullptr, Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::ISetMovementValues_eventIncreaseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::ISetMovementValues_eventIncreaseValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISetMovementValues_IncreaseValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISetMovementValues_IncreaseValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IISetMovementValues::execIncreaseValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_GET_ENUM(EMovementMechanics,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseValue(Z_Param_Amount,EMovementMechanics(Z_Param_Attribute));
	P_NATIVE_END;
}
// End Interface UISetMovementValues Function IncreaseValue

// Begin Interface UISetMovementValues Function SetNewValue
struct Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics
{
	struct ISetMovementValues_eventSetNewValue_Parms
	{
		float NewValue;
		EMovementMechanics Attribute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movemment Mechanics" },
		{ "ModuleRelativePath", "Public/ISetMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventSetNewValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISetMovementValues_eventSetNewValue_Parms, Attribute), Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::NewProp_Attribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISetMovementValues, nullptr, "SetNewValue", nullptr, nullptr, Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::ISetMovementValues_eventSetNewValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::ISetMovementValues_eventSetNewValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISetMovementValues_SetNewValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISetMovementValues_SetNewValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IISetMovementValues::execSetNewValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_GET_ENUM(EMovementMechanics,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewValue(Z_Param_NewValue,EMovementMechanics(Z_Param_Attribute));
	P_NATIVE_END;
}
// End Interface UISetMovementValues Function SetNewValue

// Begin Interface UISetMovementValues
void UISetMovementValues::StaticRegisterNativesUISetMovementValues()
{
	UClass* Class = UISetMovementValues::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseFOV", &IISetMovementValues::execDecreaseFOV },
		{ "DecreaseValue", &IISetMovementValues::execDecreaseValue },
		{ "IncreaseFOV", &IISetMovementValues::execIncreaseFOV },
		{ "IncreaseValue", &IISetMovementValues::execIncreaseValue },
		{ "SetNewValue", &IISetMovementValues::execSetNewValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISetMovementValues);
UClass* Z_Construct_UClass_UISetMovementValues_NoRegister()
{
	return UISetMovementValues::StaticClass();
}
struct Z_Construct_UClass_UISetMovementValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISetMovementValues.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UISetMovementValues_DecreaseFOV, "DecreaseFOV" }, // 3101519338
		{ &Z_Construct_UFunction_UISetMovementValues_DecreaseValue, "DecreaseValue" }, // 3991293322
		{ &Z_Construct_UFunction_UISetMovementValues_IncreaseFOV, "IncreaseFOV" }, // 3237857271
		{ &Z_Construct_UFunction_UISetMovementValues_IncreaseValue, "IncreaseValue" }, // 469164983
		{ &Z_Construct_UFunction_UISetMovementValues_SetNewValue, "SetNewValue" }, // 2437354352
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISetMovementValues>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UISetMovementValues_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovementMechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISetMovementValues_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UISetMovementValues_Statics::ClassParams = {
	&UISetMovementValues::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UISetMovementValues_Statics::Class_MetaDataParams), Z_Construct_UClass_UISetMovementValues_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UISetMovementValues()
{
	if (!Z_Registration_Info_UClass_UISetMovementValues.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISetMovementValues.OuterSingleton, Z_Construct_UClass_UISetMovementValues_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UISetMovementValues.OuterSingleton;
}
template<> MOVEMENTMECHANICS_API UClass* StaticClass<UISetMovementValues>()
{
	return UISetMovementValues::StaticClass();
}
UISetMovementValues::UISetMovementValues(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UISetMovementValues);
UISetMovementValues::~UISetMovementValues() {}
// End Interface UISetMovementValues

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UISetMovementValues, UISetMovementValues::StaticClass, TEXT("UISetMovementValues"), &Z_Registration_Info_UClass_UISetMovementValues, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISetMovementValues), 257004694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_3514791477(TEXT("/Script/MovementMechanics"),
	Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_ISetMovementValues_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

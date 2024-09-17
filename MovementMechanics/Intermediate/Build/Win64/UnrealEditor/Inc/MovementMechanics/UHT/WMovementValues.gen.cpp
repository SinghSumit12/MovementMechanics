// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementMechanics/Public/WMovementValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWMovementValues() {}

// Begin Cross Module References
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UACSetMovementValues_NoRegister();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UWMovementValues();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_UWMovementValues_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MovementMechanics();
// End Cross Module References

// Begin Class UWMovementValues Function SetData
struct Z_Construct_UFunction_UWMovementValues_SetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Mechanics" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWMovementValues_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWMovementValues, nullptr, "SetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWMovementValues_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWMovementValues_SetData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWMovementValues_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWMovementValues_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWMovementValues::execSetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData();
	P_NATIVE_END;
}
// End Class UWMovementValues Function SetData

// Begin Class UWMovementValues
void UWMovementValues::StaticRegisterNativesUWMovementValues()
{
	UClass* Class = UWMovementValues::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetData", &UWMovementValues::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWMovementValues);
UClass* Z_Construct_UClass_UWMovementValues_NoRegister()
{
	return UWMovementValues::StaticClass();
}
struct Z_Construct_UClass_UWMovementValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WMovementValues.h" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementValuesComponent_MetaData[] = {
		{ "Category", "Movement Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable to hold a reference to the movement values component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to hold a reference to the movement values component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text blocks for each movement mechanic\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text blocks for each movement mechanic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDecelerationWalkText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScaleText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFrictionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFrictionFactorText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControlText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcBoostMultiplierText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcBoostVelocityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallingLateralFrictionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfViewText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Movement Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementValuesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxWalkSpeedText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BreakDecelerationWalkText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GravityScaleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxAccelerationText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakingFrictionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakingFrictionFactorText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpZVelocityText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakingDecelerationText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AirControlText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcBoostMultiplierText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcBoostVelocityText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallingLateralFrictionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldOfViewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWMovementValues_SetData, "SetData" }, // 1386707304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWMovementValues>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_MovementValuesComponent = { "MovementValuesComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, MovementValuesComponent), Z_Construct_UClass_UACSetMovementValues_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementValuesComponent_MetaData), NewProp_MovementValuesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_MaxWalkSpeedText = { "MaxWalkSpeedText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, MaxWalkSpeedText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeedText_MetaData), NewProp_MaxWalkSpeedText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_BreakDecelerationWalkText = { "BreakDecelerationWalkText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, BreakDecelerationWalkText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDecelerationWalkText_MetaData), NewProp_BreakDecelerationWalkText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_GravityScaleText = { "GravityScaleText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, GravityScaleText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScaleText_MetaData), NewProp_GravityScaleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_MaxAccelerationText = { "MaxAccelerationText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, MaxAccelerationText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAccelerationText_MetaData), NewProp_MaxAccelerationText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_BrakingFrictionText = { "BrakingFrictionText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, BrakingFrictionText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFrictionText_MetaData), NewProp_BrakingFrictionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_MassText = { "MassText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, MassText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassText_MetaData), NewProp_MassText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_BrakingFrictionFactorText = { "BrakingFrictionFactorText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, BrakingFrictionFactorText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFrictionFactorText_MetaData), NewProp_BrakingFrictionFactorText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_JumpZVelocityText = { "JumpZVelocityText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, JumpZVelocityText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpZVelocityText_MetaData), NewProp_JumpZVelocityText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_BrakingDecelerationText = { "BrakingDecelerationText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, BrakingDecelerationText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDecelerationText_MetaData), NewProp_BrakingDecelerationText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_AirControlText = { "AirControlText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, AirControlText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControlText_MetaData), NewProp_AirControlText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_AcBoostMultiplierText = { "AcBoostMultiplierText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, AcBoostMultiplierText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcBoostMultiplierText_MetaData), NewProp_AcBoostMultiplierText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_AcBoostVelocityText = { "AcBoostVelocityText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, AcBoostVelocityText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcBoostVelocityText_MetaData), NewProp_AcBoostVelocityText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_FallingLateralFrictionText = { "FallingLateralFrictionText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, FallingLateralFrictionText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallingLateralFrictionText_MetaData), NewProp_FallingLateralFrictionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWMovementValues_Statics::NewProp_FieldOfViewText = { "FieldOfViewText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWMovementValues, FieldOfViewText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfViewText_MetaData), NewProp_FieldOfViewText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWMovementValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_MovementValuesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_MaxWalkSpeedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_BreakDecelerationWalkText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_GravityScaleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_MaxAccelerationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_BrakingFrictionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_MassText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_BrakingFrictionFactorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_JumpZVelocityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_BrakingDecelerationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_AirControlText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_AcBoostMultiplierText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_AcBoostVelocityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_FallingLateralFrictionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWMovementValues_Statics::NewProp_FieldOfViewText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWMovementValues_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWMovementValues_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MovementMechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWMovementValues_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWMovementValues_Statics::ClassParams = {
	&UWMovementValues::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWMovementValues_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWMovementValues_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWMovementValues_Statics::Class_MetaDataParams), Z_Construct_UClass_UWMovementValues_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWMovementValues()
{
	if (!Z_Registration_Info_UClass_UWMovementValues.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWMovementValues.OuterSingleton, Z_Construct_UClass_UWMovementValues_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWMovementValues.OuterSingleton;
}
template<> MOVEMENTMECHANICS_API UClass* StaticClass<UWMovementValues>()
{
	return UWMovementValues::StaticClass();
}
UWMovementValues::UWMovementValues(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWMovementValues);
UWMovementValues::~UWMovementValues() {}
// End Class UWMovementValues

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWMovementValues, UWMovementValues::StaticClass, TEXT("UWMovementValues"), &Z_Registration_Info_UClass_UWMovementValues, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWMovementValues), 356596828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_788319488(TEXT("/Script/MovementMechanics"),
	Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_WMovementValues_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

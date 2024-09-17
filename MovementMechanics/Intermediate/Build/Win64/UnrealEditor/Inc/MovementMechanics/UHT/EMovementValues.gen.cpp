// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementMechanics/Public/EMovementValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovementValues() {}

// Begin Cross Module References
MOVEMENTMECHANICS_API UEnum* Z_Construct_UEnum_MovementMechanics_EMovementMechanics();
UPackage* Z_Construct_UPackage__Script_MovementMechanics();
// End Cross Module References

// Begin Enum EMovementMechanics
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementMechanics;
static UEnum* EMovementMechanics_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementMechanics.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementMechanics.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovementMechanics_EMovementMechanics, (UObject*)Z_Construct_UPackage__Script_MovementMechanics(), TEXT("EMovementMechanics"));
	}
	return Z_Registration_Info_UEnum_EMovementMechanics.OuterSingleton;
}
template<> MOVEMENTMECHANICS_API UEnum* StaticEnum<EMovementMechanics>()
{
	return EMovementMechanics_StaticEnum();
}
struct Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AcBoostMultiplier.Comment", "/**\n * \n */" },
		{ "AcBoostMultiplier.DisplayName", "ACBoostMultiplier" },
		{ "AcBoostMultiplier.Name", "EMovementMechanics::AcBoostMultiplier" },
		{ "AcBoostVelocity.Comment", "/**\n * \n */" },
		{ "AcBoostVelocity.DisplayName", "ACBoostVelocity" },
		{ "AcBoostVelocity.Name", "EMovementMechanics::AcBoostVelocity" },
		{ "AirControl.Comment", "/**\n * \n */" },
		{ "AirControl.DisplayName", "AirControl" },
		{ "AirControl.Name", "EMovementMechanics::AirControl" },
		{ "BlueprintType", "true" },
		{ "BrakingDeceleration.Comment", "/**\n * \n */" },
		{ "BrakingDeceleration.DisplayName", "BrakingDeceleration" },
		{ "BrakingDeceleration.Name", "EMovementMechanics::BrakingDeceleration" },
		{ "BrakingFriction.Comment", "/**\n * \n */" },
		{ "BrakingFriction.DisplayName", "BrakingFriction" },
		{ "BrakingFriction.Name", "EMovementMechanics::BrakingFriction" },
		{ "BrakingFrictionFactor.Comment", "/**\n * \n */" },
		{ "BrakingFrictionFactor.DisplayName", "BrakingFrictionFactor" },
		{ "BrakingFrictionFactor.Name", "EMovementMechanics::BrakingFrictionFactor" },
		{ "BreakDecelerationWalk.Comment", "/**\n * \n */" },
		{ "BreakDecelerationWalk.DisplayName", "BreakDecelerationWalk" },
		{ "BreakDecelerationWalk.Name", "EMovementMechanics::BreakDecelerationWalk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "FallingLateralFriction.Comment", "/**\n * \n */" },
		{ "FallingLateralFriction.DisplayName", "FallingLateralFriction" },
		{ "FallingLateralFriction.Name", "EMovementMechanics::FallingLateralFriction" },
		{ "FieldOfView.Comment", "/**\n * \n */" },
		{ "FieldOfView.DisplayName", "Field of View" },
		{ "FieldOfView.Name", "EMovementMechanics::FieldOfView" },
		{ "GravityScale.Comment", "/**\n * \n */" },
		{ "GravityScale.DisplayName", "GravityScale" },
		{ "GravityScale.Name", "EMovementMechanics::GravityScale" },
		{ "JumpZVelocity.Comment", "/**\n * \n */" },
		{ "JumpZVelocity.DisplayName", "JumpZVelo" },
		{ "JumpZVelocity.Name", "EMovementMechanics::JumpZVelocity" },
		{ "Mass.Comment", "/**\n * \n */" },
		{ "Mass.DisplayName", "Mass" },
		{ "Mass.Name", "EMovementMechanics::Mass" },
		{ "MaxAcceleration.Comment", "/**\n * \n */" },
		{ "MaxAcceleration.DisplayName", "MaxAcceleration" },
		{ "MaxAcceleration.Name", "EMovementMechanics::MaxAcceleration" },
		{ "MaxWalkSpeed.Comment", "/**\n * \n */" },
		{ "MaxWalkSpeed.DisplayName", "MaxWalkSpeed" },
		{ "MaxWalkSpeed.Name", "EMovementMechanics::MaxWalkSpeed" },
		{ "ModuleRelativePath", "Public/EMovementValues.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementMechanics::MaxWalkSpeed", (int64)EMovementMechanics::MaxWalkSpeed },
		{ "EMovementMechanics::BreakDecelerationWalk", (int64)EMovementMechanics::BreakDecelerationWalk },
		{ "EMovementMechanics::GravityScale", (int64)EMovementMechanics::GravityScale },
		{ "EMovementMechanics::MaxAcceleration", (int64)EMovementMechanics::MaxAcceleration },
		{ "EMovementMechanics::BrakingFriction", (int64)EMovementMechanics::BrakingFriction },
		{ "EMovementMechanics::Mass", (int64)EMovementMechanics::Mass },
		{ "EMovementMechanics::BrakingFrictionFactor", (int64)EMovementMechanics::BrakingFrictionFactor },
		{ "EMovementMechanics::JumpZVelocity", (int64)EMovementMechanics::JumpZVelocity },
		{ "EMovementMechanics::BrakingDeceleration", (int64)EMovementMechanics::BrakingDeceleration },
		{ "EMovementMechanics::AirControl", (int64)EMovementMechanics::AirControl },
		{ "EMovementMechanics::AcBoostMultiplier", (int64)EMovementMechanics::AcBoostMultiplier },
		{ "EMovementMechanics::AcBoostVelocity", (int64)EMovementMechanics::AcBoostVelocity },
		{ "EMovementMechanics::FallingLateralFriction", (int64)EMovementMechanics::FallingLateralFriction },
		{ "EMovementMechanics::FieldOfView", (int64)EMovementMechanics::FieldOfView },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovementMechanics,
	nullptr,
	"EMovementMechanics",
	"EMovementMechanics",
	Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovementMechanics_EMovementMechanics()
{
	if (!Z_Registration_Info_UEnum_EMovementMechanics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementMechanics.InnerSingleton, Z_Construct_UEnum_MovementMechanics_EMovementMechanics_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementMechanics.InnerSingleton;
}
// End Enum EMovementMechanics

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_EMovementValues_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementMechanics_StaticEnum, TEXT("EMovementMechanics"), &Z_Registration_Info_UEnum_EMovementMechanics, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1174351921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_EMovementValues_h_582688169(TEXT("/Script/MovementMechanics"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_EMovementValues_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_EMovementValues_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

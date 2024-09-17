// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementMechanics/Public/SG_StoreMovementValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSG_StoreMovementValues() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_USG_StoreMovementValues();
MOVEMENTMECHANICS_API UClass* Z_Construct_UClass_USG_StoreMovementValues_NoRegister();
MOVEMENTMECHANICS_API UEnum* Z_Construct_UEnum_MovementMechanics_EMovementMechanics();
UPackage* Z_Construct_UPackage__Script_MovementMechanics();
// End Cross Module References

// Begin Class USG_StoreMovementValues
void USG_StoreMovementValues::StaticRegisterNativesUSG_StoreMovementValues()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USG_StoreMovementValues);
UClass* Z_Construct_UClass_USG_StoreMovementValues_NoRegister()
{
	return USG_StoreMovementValues::StaticClass();
}
struct Z_Construct_UClass_USG_StoreMovementValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SG_StoreMovementValues.h" },
		{ "ModuleRelativePath", "Public/SG_StoreMovementValues.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredMovementValues_MetaData[] = {
		{ "Category", "Saved Data" },
		{ "ModuleRelativePath", "Public/SG_StoreMovementValues.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StoredMovementValues_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StoredMovementValues_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StoredMovementValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StoredMovementValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USG_StoreMovementValues>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues_ValueProp = { "StoredMovementValues", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues_Key_KeyProp = { "StoredMovementValues_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_MovementMechanics_EMovementMechanics, METADATA_PARAMS(0, nullptr) }; // 1174351921
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues = { "StoredMovementValues", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USG_StoreMovementValues, StoredMovementValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredMovementValues_MetaData), NewProp_StoredMovementValues_MetaData) }; // 1174351921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USG_StoreMovementValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USG_StoreMovementValues_Statics::NewProp_StoredMovementValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USG_StoreMovementValues_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USG_StoreMovementValues_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_MovementMechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USG_StoreMovementValues_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USG_StoreMovementValues_Statics::ClassParams = {
	&USG_StoreMovementValues::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USG_StoreMovementValues_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USG_StoreMovementValues_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USG_StoreMovementValues_Statics::Class_MetaDataParams), Z_Construct_UClass_USG_StoreMovementValues_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USG_StoreMovementValues()
{
	if (!Z_Registration_Info_UClass_USG_StoreMovementValues.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USG_StoreMovementValues.OuterSingleton, Z_Construct_UClass_USG_StoreMovementValues_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USG_StoreMovementValues.OuterSingleton;
}
template<> MOVEMENTMECHANICS_API UClass* StaticClass<USG_StoreMovementValues>()
{
	return USG_StoreMovementValues::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USG_StoreMovementValues);
USG_StoreMovementValues::~USG_StoreMovementValues() {}
// End Class USG_StoreMovementValues

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_SG_StoreMovementValues_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USG_StoreMovementValues, USG_StoreMovementValues::StaticClass, TEXT("USG_StoreMovementValues"), &Z_Registration_Info_UClass_USG_StoreMovementValues, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USG_StoreMovementValues), 192995131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_SG_StoreMovementValues_h_2391345736(TEXT("/Script/MovementMechanics"),
	Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_SG_StoreMovementValues_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModulesProject_Plugins_MovementMechanics_Source_MovementMechanics_Public_SG_StoreMovementValues_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ShotgunTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgunTower() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_AShotgunTower_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_AShotgunTower();
	TOONTANKS_API UClass* Z_Construct_UClass_ATower();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void AShotgunTower::StaticRegisterNativesAShotgunTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotgunTower);
	UClass* Z_Construct_UClass_AShotgunTower_NoRegister()
	{
		return AShotgunTower::StaticClass();
	}
	struct Z_Construct_UClass_AShotgunTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSector_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireSector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfProjectiles_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfProjectiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotgunTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATower,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgunTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShotgunTower.h" },
		{ "ModuleRelativePath", "ShotgunTower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgunTower_Statics::NewProp_FireSector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShotgunTower.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShotgunTower_Statics::NewProp_FireSector = { "FireSector", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotgunTower, FireSector), METADATA_PARAMS(Z_Construct_UClass_AShotgunTower_Statics::NewProp_FireSector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunTower_Statics::NewProp_FireSector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgunTower_Statics::NewProp_NumberOfProjectiles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShotgunTower.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AShotgunTower_Statics::NewProp_NumberOfProjectiles = { "NumberOfProjectiles", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotgunTower, NumberOfProjectiles), METADATA_PARAMS(Z_Construct_UClass_AShotgunTower_Statics::NewProp_NumberOfProjectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunTower_Statics::NewProp_NumberOfProjectiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotgunTower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgunTower_Statics::NewProp_FireSector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgunTower_Statics::NewProp_NumberOfProjectiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgunTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgunTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgunTower_Statics::ClassParams = {
		&AShotgunTower::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShotgunTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunTower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShotgunTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgunTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotgunTower()
	{
		if (!Z_Registration_Info_UClass_AShotgunTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgunTower.OuterSingleton, Z_Construct_UClass_AShotgunTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShotgunTower.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<AShotgunTower>()
	{
		return AShotgunTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgunTower);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ShotgunTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ShotgunTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShotgunTower, AShotgunTower::StaticClass, TEXT("AShotgunTower"), &Z_Registration_Info_UClass_AShotgunTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgunTower), 1919662272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ShotgunTower_h_2290000204(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ShotgunTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ShotgunTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

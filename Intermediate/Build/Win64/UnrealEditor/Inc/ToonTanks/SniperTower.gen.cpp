// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/SniperTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperTower() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ASniperTower_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ASniperTower();
	TOONTANKS_API UClass* Z_Construct_UClass_ATower();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void ASniperTower::StaticRegisterNativesASniperTower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASniperTower);
	UClass* Z_Construct_UClass_ASniperTower_NoRegister()
	{
		return ASniperTower::StaticClass();
	}
	struct Z_Construct_UClass_ASniperTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RayIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASniperTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATower,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SniperTower.h" },
		{ "ModuleRelativePath", "SniperTower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASniperTower_Statics::NewProp_RayIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "SniperTower.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASniperTower_Statics::NewProp_RayIntensity = { "RayIntensity", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASniperTower, RayIntensity), METADATA_PARAMS(Z_Construct_UClass_ASniperTower_Statics::NewProp_RayIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperTower_Statics::NewProp_RayIntensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASniperTower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASniperTower_Statics::NewProp_RayIntensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASniperTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASniperTower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASniperTower_Statics::ClassParams = {
		&ASniperTower::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASniperTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASniperTower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASniperTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASniperTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASniperTower()
	{
		if (!Z_Registration_Info_UClass_ASniperTower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASniperTower.OuterSingleton, Z_Construct_UClass_ASniperTower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASniperTower.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<ASniperTower>()
	{
		return ASniperTower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASniperTower);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_SniperTower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_SniperTower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASniperTower, ASniperTower::StaticClass, TEXT("ASniperTower"), &Z_Registration_Info_UClass_ASniperTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASniperTower), 893002420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_SniperTower_h_3006590468(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_SniperTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_SniperTower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShmup/AssaultWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssaultWeapon() {}
// Cross Module References
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AAssaultWeapon_NoRegister();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AAssaultWeapon();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_TopDownShmup();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AAssaultWeapon::StaticRegisterNativesAAssaultWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssaultWeapon);
	UClass* Z_Construct_UClass_AAssaultWeapon_NoRegister()
	{
		return AAssaultWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AAssaultWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fFireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fFireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fWeaponRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fWeaponRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fAttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fAttackDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssaultWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShmup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssaultWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssaultWeapon.h" },
		{ "ModuleRelativePath", "AssaultWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fFireRate_MetaData[] = {
		{ "Category", "AssaultWeapon" },
		{ "Comment", "// configurable properties\n// float value for how fast weapon fires\n" },
		{ "ModuleRelativePath", "AssaultWeapon.h" },
		{ "ToolTip", "configurable properties\nfloat value for how fast weapon fires" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fFireRate = { "fFireRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAssaultWeapon, fFireRate), METADATA_PARAMS(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fFireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fFireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fWeaponRange_MetaData[] = {
		{ "Category", "AssaultWeapon" },
		{ "Comment", "// float value for handling the range of gun\n" },
		{ "ModuleRelativePath", "AssaultWeapon.h" },
		{ "ToolTip", "float value for handling the range of gun" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fWeaponRange = { "fWeaponRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAssaultWeapon, fWeaponRange), METADATA_PARAMS(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fWeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fWeaponRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fAttackDamage_MetaData[] = {
		{ "Category", "AssaultWeapon" },
		{ "Comment", "// float value for damage per hit of gun\n" },
		{ "ModuleRelativePath", "AssaultWeapon.h" },
		{ "ToolTip", "float value for damage per hit of gun" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fAttackDamage = { "fAttackDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAssaultWeapon, fAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fAttackDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_HitEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// pointer to particle effect of bullets/ray\n" },
		{ "ModuleRelativePath", "AssaultWeapon.h" },
		{ "ToolTip", "pointer to particle effect of bullets/ray" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_HitEffect = { "HitEffect", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAssaultWeapon, HitEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_HitEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_HitEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAssaultWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fFireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fWeaponRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_fAttackDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssaultWeapon_Statics::NewProp_HitEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssaultWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssaultWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssaultWeapon_Statics::ClassParams = {
		&AAssaultWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAssaultWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAssaultWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssaultWeapon()
	{
		if (!Z_Registration_Info_UClass_AAssaultWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssaultWeapon.OuterSingleton, Z_Construct_UClass_AAssaultWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAssaultWeapon.OuterSingleton;
	}
	template<> TOPDOWNSHMUP_API UClass* StaticClass<AAssaultWeapon>()
	{
		return AAssaultWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssaultWeapon);
	struct Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_AssaultWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_AssaultWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAssaultWeapon, AAssaultWeapon::StaticClass, TEXT("AAssaultWeapon"), &Z_Registration_Info_UClass_AAssaultWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssaultWeapon), 3377286014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_AssaultWeapon_h_833258345(TEXT("/Script/TopDownShmup"),
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_AssaultWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_AssaultWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShmup/DwarfCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDwarfCharacter() {}
// Cross Module References
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfCharacter_NoRegister();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfCharacter();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AEnemyCharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownShmup();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void ADwarfCharacter::StaticRegisterNativesADwarfCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADwarfCharacter);
	UClass* Z_Construct_UClass_ADwarfCharacter_NoRegister()
	{
		return ADwarfCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADwarfCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fAttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fAttackDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADwarfCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShmup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DwarfCharacter.h" },
		{ "ModuleRelativePath", "DwarfCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_AttackAnim_MetaData[] = {
		{ "Category", "DwarfCharacter" },
		{ "Comment", "// animations\n// for attack animation\n" },
		{ "ModuleRelativePath", "DwarfCharacter.h" },
		{ "ToolTip", "animations\nfor attack animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADwarfCharacter, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_AttackAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_AttackAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_DeathAnim_MetaData[] = {
		{ "Category", "DwarfCharacter" },
		{ "Comment", "// for death animation\n" },
		{ "ModuleRelativePath", "DwarfCharacter.h" },
		{ "ToolTip", "for death animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_DeathAnim = { "DeathAnim", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADwarfCharacter, DeathAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_DeathAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_DeathAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fHealth_MetaData[] = {
		{ "Category", "DwarfCharacter" },
		{ "Comment", "//private:\n// editable properties\n" },
		{ "ModuleRelativePath", "DwarfCharacter.h" },
		{ "ToolTip", "private:\n editable properties" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fHealth = { "fHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADwarfCharacter, fHealth), METADATA_PARAMS(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fAttackDamage_MetaData[] = {
		{ "Category", "DwarfCharacter" },
		{ "Comment", "// float value for dwarf health\n" },
		{ "ModuleRelativePath", "DwarfCharacter.h" },
		{ "ToolTip", "float value for dwarf health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fAttackDamage = { "fAttackDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADwarfCharacter, fAttackDamage), METADATA_PARAMS(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fAttackDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADwarfCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_AttackAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_DeathAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADwarfCharacter_Statics::NewProp_fAttackDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADwarfCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADwarfCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADwarfCharacter_Statics::ClassParams = {
		&ADwarfCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADwarfCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADwarfCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADwarfCharacter()
	{
		if (!Z_Registration_Info_UClass_ADwarfCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADwarfCharacter.OuterSingleton, Z_Construct_UClass_ADwarfCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADwarfCharacter.OuterSingleton;
	}
	template<> TOPDOWNSHMUP_API UClass* StaticClass<ADwarfCharacter>()
	{
		return ADwarfCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADwarfCharacter);
	struct Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADwarfCharacter, ADwarfCharacter::StaticClass, TEXT("ADwarfCharacter"), &Z_Registration_Info_UClass_ADwarfCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADwarfCharacter), 2705394058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfCharacter_h_1256911226(TEXT("/Script/TopDownShmup"),
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

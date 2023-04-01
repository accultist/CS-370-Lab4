// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShmup/SpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}
// Cross Module References
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ASpawnManager_NoRegister();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ASpawnManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopDownShmup();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfCharacter_NoRegister();
// End Cross Module References
	void ASpawnManager::StaticRegisterNativesASpawnManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnManager);
	UClass* Z_Construct_UClass_ASpawnManager_NoRegister()
	{
		return ASpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_arrSpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arrSpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrSpawnPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpawnTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShmup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints_Inner = { "arrSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// configurable properties\n// array of target points for the dwarf to spawn at\n" },
		{ "ModuleRelativePath", "SpawnManager.h" },
		{ "ToolTip", "configurable properties\narray of target points for the dwarf to spawn at" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints = { "arrSpawnPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnManager, arrSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnManager, Character), Z_Construct_UClass_ADwarfCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnManager_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::NewProp_minSpawnTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_minSpawnTime = { "minSpawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnManager, minSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASpawnManager_Statics::NewProp_minSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::NewProp_minSpawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnManager_Statics::NewProp_maxSpawnTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_maxSpawnTime = { "maxSpawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnManager, maxSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASpawnManager_Statics::NewProp_maxSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::NewProp_maxSpawnTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_arrSpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_minSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_maxSpawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnManager_Statics::ClassParams = {
		&ASpawnManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnManager()
	{
		if (!Z_Registration_Info_UClass_ASpawnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnManager.OuterSingleton, Z_Construct_UClass_ASpawnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnManager.OuterSingleton;
	}
	template<> TOPDOWNSHMUP_API UClass* StaticClass<ASpawnManager>()
	{
		return ASpawnManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnManager);
	struct Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_SpawnManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_SpawnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnManager, ASpawnManager::StaticClass, TEXT("ASpawnManager"), &Z_Registration_Info_UClass_ASpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnManager), 896389211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_SpawnManager_h_722354053(TEXT("/Script/TopDownShmup"),
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_SpawnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

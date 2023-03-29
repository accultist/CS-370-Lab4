// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShmup/EnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}
// Cross Module References
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TopDownShmup();
// End Cross Module References
	void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyAIController);
	UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
	{
		return AEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShmup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyAIController.h" },
		{ "ModuleRelativePath", "EnemyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAIController_Statics::ClassParams = {
		&AEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyAIController()
	{
		if (!Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton, Z_Construct_UClass_AEnemyAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyAIController.OuterSingleton;
	}
	template<> TOPDOWNSHMUP_API UClass* StaticClass<AEnemyAIController>()
	{
		return AEnemyAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
	struct Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_EnemyAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_EnemyAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAIController, AEnemyAIController::StaticClass, TEXT("AEnemyAIController"), &Z_Registration_Info_UClass_AEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAIController), 3599105415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_EnemyAIController_h_1088798648(TEXT("/Script/TopDownShmup"),
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_EnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_EnemyAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

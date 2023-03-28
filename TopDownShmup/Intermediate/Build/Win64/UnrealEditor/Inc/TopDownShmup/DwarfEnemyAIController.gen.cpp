// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShmup/DwarfEnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDwarfEnemyAIController() {}
// Cross Module References
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfEnemyAIController_NoRegister();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfEnemyAIController();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AEnemyAIController();
	UPackage* Z_Construct_UPackage__Script_TopDownShmup();
// End Cross Module References
	void ADwarfEnemyAIController::StaticRegisterNativesADwarfEnemyAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADwarfEnemyAIController);
	UClass* Z_Construct_UClass_ADwarfEnemyAIController_NoRegister()
	{
		return ADwarfEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADwarfEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADwarfEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShmup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DwarfEnemyAIController.h" },
		{ "ModuleRelativePath", "DwarfEnemyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADwarfEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADwarfEnemyAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADwarfEnemyAIController_Statics::ClassParams = {
		&ADwarfEnemyAIController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADwarfEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADwarfEnemyAIController()
	{
		if (!Z_Registration_Info_UClass_ADwarfEnemyAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADwarfEnemyAIController.OuterSingleton, Z_Construct_UClass_ADwarfEnemyAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADwarfEnemyAIController.OuterSingleton;
	}
	template<> TOPDOWNSHMUP_API UClass* StaticClass<ADwarfEnemyAIController>()
	{
		return ADwarfEnemyAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADwarfEnemyAIController);
	struct Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADwarfEnemyAIController, ADwarfEnemyAIController::StaticClass, TEXT("ADwarfEnemyAIController"), &Z_Registration_Info_UClass_ADwarfEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADwarfEnemyAIController), 2306739994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_1837609285(TEXT("/Script/TopDownShmup"),
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

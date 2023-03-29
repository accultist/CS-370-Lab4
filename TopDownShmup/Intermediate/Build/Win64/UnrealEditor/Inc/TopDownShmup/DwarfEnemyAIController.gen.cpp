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
	TOPDOWNSHMUP_API UEnum* Z_Construct_UEnum_TopDownShmup_EDwarfState();
	UPackage* Z_Construct_UPackage__Script_TopDownShmup();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfEnemyAIController_NoRegister();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_ADwarfEnemyAIController();
	TOPDOWNSHMUP_API UClass* Z_Construct_UClass_AEnemyAIController();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDwarfState;
	static UEnum* EDwarfState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDwarfState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDwarfState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownShmup_EDwarfState, Z_Construct_UPackage__Script_TopDownShmup(), TEXT("EDwarfState"));
		}
		return Z_Registration_Info_UEnum_EDwarfState.OuterSingleton;
	}
	template<> TOPDOWNSHMUP_API UEnum* StaticEnum<EDwarfState>()
	{
		return EDwarfState_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::Enumerators[] = {
		{ "EDwarfState::EStart", (int64)EDwarfState::EStart },
		{ "EDwarfState::EChasing", (int64)EDwarfState::EChasing },
		{ "EDwarfState::EAttacking", (int64)EDwarfState::EAttacking },
		{ "EDwarfState::EDead", (int64)EDwarfState::EDead },
		{ "EDwarfState::EUnknown", (int64)EDwarfState::EUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//enum to store the current state of dwarf\n" },
		{ "EAttacking.DisplayName", "Attacking" },
		{ "EAttacking.Name", "EDwarfState::EAttacking" },
		{ "EChasing.DisplayName", "Chasing" },
		{ "EChasing.Name", "EDwarfState::EChasing" },
		{ "EDead.DisplayName", "Dead" },
		{ "EDead.Name", "EDwarfState::EDead" },
		{ "EStart.DisplayName", "Start" },
		{ "EStart.Name", "EDwarfState::EStart" },
		{ "EUnknown.DisplayName", "Unknown" },
		{ "EUnknown.Name", "EDwarfState::EUnknown" },
		{ "ModuleRelativePath", "DwarfEnemyAIController.h" },
		{ "ToolTip", "enum to store the current state of dwarf" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownShmup,
		nullptr,
		"EDwarfState",
		"EDwarfState",
		Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownShmup_EDwarfState()
	{
		if (!Z_Registration_Info_UEnum_EDwarfState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDwarfState.InnerSingleton, Z_Construct_UEnum_TopDownShmup_EDwarfState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDwarfState.InnerSingleton;
	}
	DEFINE_FUNCTION(ADwarfEnemyAIController::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDwarfState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void ADwarfEnemyAIController::StaticRegisterNativesADwarfEnemyAIController()
	{
		UClass* Class = ADwarfEnemyAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ADwarfEnemyAIController::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics
	{
		struct DwarfEnemyAIController_eventGetCurrentState_Parms
		{
			EDwarfState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DwarfEnemyAIController_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_TopDownShmup_EDwarfState, METADATA_PARAMS(nullptr, 0) }; // 3792002899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "/* return the current state of dwarf */" },
		{ "ModuleRelativePath", "DwarfEnemyAIController.h" },
		{ "ToolTip", "return the current state of dwarf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADwarfEnemyAIController, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::DwarfEnemyAIController_eventGetCurrentState_Parms), Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADwarfEnemyAIController);
	UClass* Z_Construct_UClass_ADwarfEnemyAIController_NoRegister()
	{
		return ADwarfEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADwarfEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToMelee_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToMelee;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADwarfEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShmup,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADwarfEnemyAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADwarfEnemyAIController_GetCurrentState, "GetCurrentState" }, // 2487279787
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DwarfEnemyAIController.h" },
		{ "ModuleRelativePath", "DwarfEnemyAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADwarfEnemyAIController_Statics::NewProp_DistanceToMelee_MetaData[] = {
		{ "Category", "Melee Dist." },
		{ "ModuleRelativePath", "DwarfEnemyAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADwarfEnemyAIController_Statics::NewProp_DistanceToMelee = { "DistanceToMelee", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADwarfEnemyAIController, DistanceToMelee), METADATA_PARAMS(Z_Construct_UClass_ADwarfEnemyAIController_Statics::NewProp_DistanceToMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfEnemyAIController_Statics::NewProp_DistanceToMelee_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADwarfEnemyAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADwarfEnemyAIController_Statics::NewProp_DistanceToMelee,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADwarfEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADwarfEnemyAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADwarfEnemyAIController_Statics::ClassParams = {
		&ADwarfEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADwarfEnemyAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADwarfEnemyAIController_Statics::PropPointers),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::EnumInfo[] = {
		{ EDwarfState_StaticEnum, TEXT("EDwarfState"), &Z_Registration_Info_UEnum_EDwarfState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3792002899U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADwarfEnemyAIController, ADwarfEnemyAIController::StaticClass, TEXT("ADwarfEnemyAIController"), &Z_Registration_Info_UClass_ADwarfEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADwarfEnemyAIController), 1908020210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_2911421668(TEXT("/Script/TopDownShmup"),
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

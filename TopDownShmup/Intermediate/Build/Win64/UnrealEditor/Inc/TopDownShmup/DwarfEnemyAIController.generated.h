// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDwarfState : uint8;
#ifdef TOPDOWNSHMUP_DwarfEnemyAIController_generated_h
#error "DwarfEnemyAIController.generated.h already included, missing '#pragma once' in DwarfEnemyAIController.h"
#endif
#define TOPDOWNSHMUP_DwarfEnemyAIController_generated_h

#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_SPARSE_DATA
#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADwarfEnemyAIController(); \
	friend struct Z_Construct_UClass_ADwarfEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(ADwarfEnemyAIController, AEnemyAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShmup"), NO_API) \
	DECLARE_SERIALIZER(ADwarfEnemyAIController)


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesADwarfEnemyAIController(); \
	friend struct Z_Construct_UClass_ADwarfEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(ADwarfEnemyAIController, AEnemyAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShmup"), NO_API) \
	DECLARE_SERIALIZER(ADwarfEnemyAIController)


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADwarfEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADwarfEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADwarfEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADwarfEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADwarfEnemyAIController(ADwarfEnemyAIController&&); \
	NO_API ADwarfEnemyAIController(const ADwarfEnemyAIController&); \
public:


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADwarfEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADwarfEnemyAIController(ADwarfEnemyAIController&&); \
	NO_API ADwarfEnemyAIController(const ADwarfEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADwarfEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADwarfEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADwarfEnemyAIController)


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_23_PROLOG
#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_SPARSE_DATA \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_RPC_WRAPPERS \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_INCLASS \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_SPARSE_DATA \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_INCLASS_NO_PURE_DECLS \
	FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHMUP_API UClass* StaticClass<class ADwarfEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TopDownShmup_Source_TopDownShmup_DwarfEnemyAIController_h


#define FOREACH_ENUM_EDWARFSTATE(op) \
	op(EDwarfState::EStart) \
	op(EDwarfState::EChasing) \
	op(EDwarfState::EAttacking) \
	op(EDwarfState::EDead) \
	op(EDwarfState::EUnknown) 

enum class EDwarfState : uint8;
template<> TOPDOWNSHMUP_API UEnum* StaticEnum<EDwarfState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

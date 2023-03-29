// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNSHMUP_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define TOPDOWNSHMUP_Weapon_generated_h

#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_SPARSE_DATA
#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_RPC_WRAPPERS
#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShmup"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShmup"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_13_PROLOG
#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_SPARSE_DATA \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_RPC_WRAPPERS \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_INCLASS \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_SPARSE_DATA \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_INCLASS_NO_PURE_DECLS \
	FID_TopDownShmup_Source_TopDownShmup_Weapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHMUP_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TopDownShmup_Source_TopDownShmup_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

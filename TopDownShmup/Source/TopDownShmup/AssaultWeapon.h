// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "TimerManager.h"
#include "AssaultWeapon.generated.h"


/**
 * 
 */
UCLASS()
class TOPDOWNSHMUP_API AAssaultWeapon : public AWeapon
{
	GENERATED_BODY()
    
public:
    // constructor for AssaultWeapon class
    AAssaultWeapon();

    // override functions
    // function handles when weapon is fired
    virtual void OnStartFire() override;
    // function handles when weapon is no longer fired
    virtual void OnStopFire() override;
    







private:
	// timer for handling weapon
	FTimerHandle WeaponTimerHandle;

	// configurable properties
	// float value for how fast weapon fires
	UPROPERTY(EditAnywhere)
		float fFireRate;	

	// float value for handling the range of gun
	UPROPERTY(EditAnywhere)
		float fWeaponRange;

	// float value for damage per hit of gun
	UPROPERTY(EditAnywhere)
		float fAttackDamage;

	// pointer to particle effect of bullets/ray
	UPROPERTY(EditDefaultsOnly, Category = Effects)
		UParticleSystem* HitEffect;

protected:
    // function for handing tracing the rays from weapon
    void WeaponTrace();
	
};

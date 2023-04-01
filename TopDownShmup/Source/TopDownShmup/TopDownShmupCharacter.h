// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "Weapon.h"
#include "TopDownShmupCharacter.generated.h"

UCLASS(Blueprintable)
class ATopDownShmupCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
    
    //
    UPROPERTY(EditAnywhere, Category = Weapon)
    TSubclassOf<AWeapon> WeaponClass;
    
    
public:
	ATopDownShmupCharacter();
    
	// death animation
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* DeathAnim;
    
	// function when weapon starts firing
    void OnStartFire();
	// function for when weapon should stop firing
    void OnStopFire();
	// getter function for returning bool if player is dead
	bool IsDead();
	// function for when player is dead
	void StartDeath();

	// override TakeDamage
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

private:
	// pointer to weapon
	AWeapon* MyWeapon;

	// timer for death
	FTimerHandle DeathTimerHandle;

	// adjustable value for health
	UPROPERTY(EditAnywhere)
	float fHealth;

	// boolean value to determine if player is dead
	bool bDead;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};


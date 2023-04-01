// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimerManager.h"
#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "Animation/AnimInstance.h"
#include "DwarfCharacter.generated.h"


/**
 * 
 */
UCLASS()
class TOPDOWNSHMUP_API ADwarfCharacter : public AEnemyCharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	ADwarfCharacter();

	// animations
	// for attack animation
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* AttackAnim;

	// for death animation
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* DeathAnim;

	// function for when dwarf attack should start
	void StartAttack();
	// function for when dwarf attack should end
	void StopAttack();
	// function for dwarf attack
	void AttackPlayer();
	// function for when dwarf has died
	void DestroyCorpse();
	// getter function to return bool value if dwarf is dead
	bool IsDead();

	// override TakeDamage
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


	

//private:
	// editable properties
	UPROPERTY(EditAnywhere)
		float fHealth;			// float value for dwarf health

	UPROPERTY(EditAnywhere)
		float fAttackDamage;	// float value for dwarf damage output


	// timers
	// timer utilized for attack
	FTimerHandle AttackTimerHandle;
	// timer utiilized for death
	FTimerHandle DeathTimerHandle;

	bool bDead;					// boolean value for determining if dwarf is dead or not


//protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

//public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
};



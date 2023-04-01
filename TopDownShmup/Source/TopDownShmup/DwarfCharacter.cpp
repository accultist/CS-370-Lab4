// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "TopDownShmupCharacter.h"
#include "DwarfCharacter.h"
#include "DwarfEnemyAIController.h"

// Sets default values
ADwarfCharacter::ADwarfCharacter()
{
	// specifying the AIController class that DwarfCharacter should use as default
	AIControllerClass = ADwarfEnemyAIController::StaticClass();

	// default values for the dwarf
	fHealth = 20.0f;			// float value for health
	fAttackDamage = 10.0f;		// float value for damage output
	bDead = false;				// boolean to determine if the dwarf is dead

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
}

// function initiated when attack is warranted
void ADwarfCharacter::StartAttack()
{
	// set timer to damage for duration of animation
	GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &ADwarfCharacter::AttackPlayer, PlayAnimMontage(AttackAnim), true);
}

// function to have player take damage from dwarf's attacks
void ADwarfCharacter::AttackPlayer()
{
	// pointer to player
	ATopDownShmupCharacter* PlayerCharacter = Cast<ATopDownShmupCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	// is player character alive?
	if (PlayerCharacter)
	{
		// have player character take damage
		PlayerCharacter->TakeDamage(fAttackDamage, FDamageEvent(), GetInstigatorController(), this);
	}
}

// function to calculate damage
float ADwarfCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (ActualDamage > 0.0f)
	{
		// TODO: Add a debug message on screen to know dwarf got hit
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(3, 1.f, FColor::Yellow, FString::Printf(TEXT("You hit the dwarf")));
		}

		//Reduce health points
		fHealth -= ActualDamage;
		if (fHealth <= 0.0f)
		{
			// We're dead
			SetCanBeDamaged(false); // Don't allow further damage
			// TODO: Process death
			bDead = true;
			// Stop attack animation,
			StopAttack();
			// Remove the dwarf from the world
			GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &ADwarfCharacter::DestroyCorpse, PlayAnimMontage(DeathAnim) - 0.25f, false);
		}
	}

	return ActualDamage;
}


// function is called when attack is unnecessary
void ADwarfCharacter::StopAttack()
{
	StopAnimMontage();
	GetWorldTimerManager().ClearTimer(AttackTimerHandle);
}

// getter for boolean to determine if dwarf is considered dead
bool ADwarfCharacter::IsDead()
{
	return bDead;
}

// function of dwarf's body removal when dwarf has died
void ADwarfCharacter::DestroyCorpse()
{
	StopAnimMontage(DeathAnim); // stop death animation
	GetMesh()->Deactivate();	// disable visible skeletal mesh
	Destroy();					// destroy dwarf
	// clear timer for death
	GetWorldTimerManager().ClearTimer(DeathTimerHandle);
}

// Called when the game starts or when spawned
//void ADwarfCharacter::BeginPlay(){ Super::BeginPlay();}

// Called every frame
//void ADwarfCharacter::Tick(float DeltaTime){Super::Tick(DeltaTime);}

//void ADwarfCharacter::BeginPlay(){ Super::BeginPlay();}
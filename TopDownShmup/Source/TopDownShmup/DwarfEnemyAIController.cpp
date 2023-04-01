// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarfEnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
//#include <DwarfCharacter.h>
#include "DwarfCharacter.h"
#include <TopDownShmupCharacter.h>

// sets default values for the AI dwarf controller
ADwarfEnemyAIController::ADwarfEnemyAIController()
{
	MaxRange = 150.0f;
}

// function is called when pawn is spawned
void ADwarfEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	// set dwarf to start state
	SetCurrentState(EDwarfState::EStart);
}

// function is called when ai controller possesses pawn
void ADwarfEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// store pointer to current dwarf
	DwarfPawn = InPawn;

}

// getter function to return status of dwarf
EDwarfState ADwarfEnemyAIController::GetCurrentState() const
{
	return CurrentState;
}

// setter function to set a new status for the dwarf
void ADwarfEnemyAIController::SetCurrentState(EDwarfState NewState)
{
	// set current state
	CurrentState = NewState;
	// handle new state
	HandleNewState(CurrentState);

}

// Called every frame
void ADwarfEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// cast dwarf pawn to dwarf character
	ADwarfCharacter* MyDwarf = Cast<ADwarfCharacter>(DwarfPawn);

	// is the dwarf dead?
	if (MyDwarf->IsDead())
	{
		// prevent additional movement and update status
		StopMovement();
		SetCurrentState(EDwarfState::EDead);
	}

	// did we just start?
	if (GetCurrentState() == EDwarfState::EStart)
	{
		// change dwarf state to chase
		SetCurrentState(EDwarfState::EChasing);
	}

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	vecDwarfEnemy = MyDwarf->GetActorLocation();
	vecPlayerCharacter = PlayerPawn->GetActorLocation();

	float const DistanceToPlayer = FVector::Dist(vecPlayerCharacter, vecDwarfEnemy);

	// if within attack range
	// after testing, a distance of 90.2f is within melee distance having near collision between player and dwarf
	if (DistanceToPlayer < 90.0f) {
		// change status for dwarf to attack
		
		SetCurrentState(EDwarfState::EAttacking);
	}
	else { //if (DistanceToPlayer > 90.0f) {
		//MyDwarf->StopAttack();

		SetCurrentState(EDwarfState::EChasing);
		//MyDwarf->StopAttack();
	}





	// if current state is attack
	if (GetCurrentState() == EDwarfState::EAttacking)
	{
		// get current distance between the player and dwarf
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

		// pointer to player pawn
		ATopDownShmupCharacter* ThePlayer = Cast<ATopDownShmupCharacter>(PlayerPawn);
		// is the player dead?
		if (ThePlayer)
		{
			if (ThePlayer->IsDead())
			{
				GEngine->AddOnScreenDebugMessage(6, 1.0f, FColor::Red, FString::Printf(TEXT("Game Over!")));
				// stop attack animation
				MyDwarf->StopAttack();
			}
		}
	}
}

void ADwarfEnemyAIController::HandleNewState(EDwarfState NewState)
{
	switch (NewState)
	{
	// if the game starts
	case EDwarfState::EStart:
	{

		break;
	}
	// when the dwarf is chasing player
	case EDwarfState::EChasing:
	{	
		// cast pawn to dwarf
		//ADwarfCharacter* theDwarf = Cast<ADwarfCharacter>(DwarfPawn);
		//theDwarf->StopAttack();

		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		MoveToActor(PlayerPawn);
		//Super::StopMovement();
		//bMoveComplete = false;
		//SetCurrentState(EDwarfState::EAttacking);
		break;
	}
	

	// when the dwarf is attacking the player
	case EDwarfState::EAttacking:
	{
		// cast pawn to dwarf
		ADwarfCharacter* theDwarf = Cast<ADwarfCharacter>(DwarfPawn);

		// is the dwarf not dead?
		if (!theDwarf->IsDead())
		{
			// call function to start attack
			theDwarf->StartAttack();
		}
		break;
	}
	// when the dwarf is dead
	case EDwarfState::EDead:
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(6, 1.0f, FColor::Green, FString::Printf(TEXT("A Dwarf has been slain!")));
		}
	}
	// should never reach here, hopefully, fingers crossed
	case EDwarfState::EUnknown:
	{
		
		// do nothing
		break;
	}
	}
}


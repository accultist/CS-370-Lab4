// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAIController.h"
#include "Animation/AnimInstance.h"
#include "DwarfEnemyAIController.generated.h"

//enum to reflect the current state of dwarf

enum class EDwarfState : short
{
	EStart, EChasing, EAttacking, EDead, EUnknown
};

/*UENUM(BlueprintType)
enum class EDwarfState : uint8
{
	EStart UMETA(DisplayName = "Start"),
	EChasing UMETA(DisplayName = "Chasing"),
	EAttacking UMETA(DisplayName = "Attacking"),
	EDead UMETA(DisplayName = "Dead"),
	EUnknown UMETA(DisplayName = "Unknown")
};*/

/**
 * 
 */
UCLASS()
class TOPDOWNSHMUP_API ADwarfEnemyAIController : public AEnemyAIController
{
	GENERATED_BODY()

//public:
	//void OnPossess(APawn* InPawn);

	//void MoveToActorFunc(APawn* InPawn);


public:

	// constructor
	ADwarfEnemyAIController();

	// pointer to dwarf pawn
	APawn* DwarfPawn;
	
	float MaxRange;

	/* overide functions */

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// called when ai controller possess pawn
	virtual void OnPossess(APawn* InPawn) override;
	
	// called to return the current state of dwarf
	EDwarfState GetCurrentState() const;

	// set a new status for the dwarf
	void SetCurrentState(EDwarfState NewState);

	bool bMoveComplete;

	/* tracker for vec position of player */
	FVector vecPlayerCharacter;

	/* tracker for vec position of dwarf */
	FVector vecDwarfEnemy;

protected:
	// ovveride function from parent class
	virtual void BeginPlay() override;

private:
	/* keeps track of the current state of dwarf */
	EDwarfState CurrentState;

	// track range between dwarf and player
	float CurrentRange;

	/* handle any function calls that rely upon changing the state of the dwarf */
	void HandleNewState(EDwarfState NewState);
};

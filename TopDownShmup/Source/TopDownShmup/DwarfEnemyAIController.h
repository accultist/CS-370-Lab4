// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAIController.h"
#include "DwarfEnemyAIController.generated.h"

//enum to store the current state of dwarf
UENUM(BlueprintType)
enum class EDwarfState : uint8
{
	EStart UMETA(DisplayName = "Start"),
	EChasing UMETA(DisplayName = "Chasing"),
	EAttacking UMETA(DisplayName = "Attacking"),
	EDead UMETA(DisplayName = "Dead"),
	EUnknown UMETA(DisplayName = "Unknown")
};

/**
 * 
 */
UCLASS()
class TOPDOWNSHMUP_API ADwarfEnemyAIController : public AEnemyAIController
{
	GENERATED_BODY()

	
	void OnPossess(APawn* InPawn);

	void MoveToActorFunc(APawn* InPawn);


public:
	APawn* InPawn;

	bool bMoveComplete;

	/* tracker for vec position of player */
	FVector vecPlayerCharacter;

	/* tracker for vec position of dwarf */
	FVector vecDwarfEnemy;

	/* return the current state of dwarf */
	UFUNCTION(BlueprintPure, Category = "Status")
	EDwarfState GetCurrentState() const;

	/* set a new status for the dwarf */
	void SetCurrentState(EDwarfState NewState);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//private:
	//UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:
	/* keeps track of the current state of dwarf */
	EDwarfState CurrentState;

	/* handle any function calls that rely upon changing the state of the dwarf */
	void HandleNewState(EDwarfState NewState);
};

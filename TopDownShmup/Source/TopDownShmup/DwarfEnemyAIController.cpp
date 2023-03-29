// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarfEnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"




void ADwarfEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	//bMoveComplete = false;

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("howdy!"));

}

void ADwarfEnemyAIController::MoveToActorFunc(APawn* InPawn)
{
	Super::BeginPlay();

	SetCurrentState(EDwarfState::EStart);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Start"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("MoveToActor is functional"));

	

	// move to player's current location
	//if (!bMoveComplete){
	//Super::MoveToActor(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0),
	//	-1.0F);
	//Super::StopMovement();
	//}

	//if (UGameplayStatics::GetPlayerCharacter(GetWorld(), 0) = -1.0f){
		
	//}
	// Get the character's movement component
	//UCharacterMovementComponent* MovementComp = GetCharacterMovement();
	
	//UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// Set up a delegate for the OnMoveCompleted event
	//MovementComp->OnRequestFinished.AddDynamic(this, &ADwarfEnemyAIController::OnMoveCompleted);
	
	//Super::OnMoveCompleted
	
	
	//(FAIRequestID RequestID,
	//	EPathFollowingResult::Type Result)

	//OnMoveCompleted(EPathFollowingResult::Success);
	
		
	//Super::MoveToActor(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	//	UE_LOG(LogTemp, Warning, TEXT("My debug message"));

}

EDwarfState ADwarfEnemyAIController::GetCurrentState() const
{
	return CurrentState;
}

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

	// if dwarf had just spawned, change status to chase player
	if (GetCurrentState() == EDwarfState::EStart) {
		SetCurrentState(EDwarfState::EChasing);
		// debug message
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Start->Chase"));
	}

	// get vector location of player
	vecPlayerCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	// select dwarf
	APawn* const Pawn = GetPawn();

	// get vector location of dwarf
	vecDwarfEnemy = Pawn->GetActorLocation();
	//GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Green, FString::Printf(TEXT("%s"), *vecDwarfEnemy.ToString()));

	//Pawn.StartAttack();

	// calculate distance between player and dwarf
	float const DistanceToPlayer = FVector::Dist(vecPlayerCharacter, vecDwarfEnemy);

	//FString TheFloatStr = FString::SanitizeFloat(DistanceToPlayer);
	//GEngine->AddOnScreenDebugMessage(-1, 200, FColor::Red, *TheFloatStr);
	 
	// if within attack range
	// after testing, a distance of 90.2f is within melee distance having near collision between player and dwarf
	if (DistanceToPlayer <= 90.2f) {
		// change status for dwarf to attack
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("KILL KILL KILL KILL KILL KILL KILL KILL KILL KILL"));
		SetCurrentState(EDwarfState::EAttacking);
	}
	else if (DistanceToPlayer > 90.2) {
		SetCurrentState(EDwarfState::EChasing);
	}


	// call function to move to player
	//MoveToActorFunc(InPawn);

}

void ADwarfEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	//bMoveComplete = true;
	//Super::StopMovement();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("move completed"));
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
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Chasing via switch"));
		Super::MoveToActor(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0),
			-1.0F);
		//Super::StopMovement();
		//bMoveComplete = false;
		break;
	}
	// when the dwarf is attacking the player
	case EDwarfState::EAttacking:
	{
		

		//Super::StopMovement();
		break;
	}
	// when the dwarf is dead
	case EDwarfState::EDead:
	{

		break;
	}
	// should never reach here, hopefully, fingers crossed
	case EDwarfState::EUnknown:
	{

		// do nothing
		break;
	}
	}
}

//void ADwarfEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
//{
//	bMoveComplete = true;
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("move completed"));
//}


//void ADwarfEnemyAIController::OnMoveCompleted(FAIRequestID.)

//void ADwarfEnemyAIController::Possess(APawn* InPawn)
//{
//	Super::Possess(InPawn);
	// your "OnPossess" code here
	// ...
//}





// constructor 
//ADwarfEnemyAIController::ADwarfEnemyAIController() {
	//CUrrPawn = Super::OnPossess(Actor);
	//Super::OnPossess(InPawn);
	
	//if (OnPossess) {

	//	OnPossess.

	//}
	//PrimaryActor = 
	// specifying the AIController class that DwarfCharacter should use as default
	//AIControllerClass = ADwarfEnemyAIController::StaticClass();

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

//}

//virtual void OnPossess

//void ADwarfEnemyAIController::Init()
//{
	//Super::Init();
//}

//void ADwarfEnemyAIController(APawn* InPawn, AController* InController)
//{
	//InController.
//}

//void ADwarfEnemyAIController::OnPossess(APawn* InPawn, AController* InController)
//{
//	Super::OnPossess(InPawn);
	

	//Super::OnPos
	//Super::Init();
	
	//APawn* InPawn;

	//
	//ADwarfEnemyAIController.Movet
//}

//void ADwarfEnemyAIController::MoveToActor()
//{
	//InPawn.move

//}


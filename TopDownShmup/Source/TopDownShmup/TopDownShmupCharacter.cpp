// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TopDownShmupCharacter.h"
#include "TopDownShmup.h"

ATopDownShmupCharacter::ATopDownShmupCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

    // default values for player
	fHealth = 100.0f;    // default float vlaue of 100 for health
    bDead = false;  // flag set to false when spawned
}

void ATopDownShmupCharacter::BeginPlay()
{
    // Call base class BeginPlay
    Super::BeginPlay();
   // MyWeapon->MyPawn = this;
    
    // Spawn the weapon, if one was specified
    if (WeaponClass)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = GetInstigator();
            // Need to set rotation like this because otherwise gun points down
            // NOTE: This should probably be a blueprint parameter
            FRotator Rotation(0.0f, 0.0f, -90.0f);
            // Spawn the Weapon
            MyWeapon = World->SpawnActor<AWeapon>(WeaponClass, FVector::ZeroVector,
            Rotation, SpawnParams);
            if (MyWeapon)
            {
            // This is attached to "WeaponPoint" which is defined in the skeleton
            // NOTE: This should probably be a blueprint parameter
            MyWeapon->WeaponMesh->AttachToComponent(GetMesh(),
            FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), TEXT("WeaponPoint"));

            // set owner of the weapon 
            MyWeapon->MyPawn = this;
            }
        }
    }

}

void ATopDownShmupCharacter::OnStartFire() {
    // if weapon exists
    if (MyWeapon) {
        MyWeapon->OnStartFire();
    }
}

void ATopDownShmupCharacter::OnStopFire() {
    // if weapon exists
    if (MyWeapon) {
        MyWeapon->OnStopFire();
    }
}

float ATopDownShmupCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// new float value based on damage sustained from dwarf
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	// check to see if damage value is greater then 0.0f
	if (ActualDamage > 0.0f)
	{
		if (GEngine)
		{
			// output player health via debug message
			GEngine->AddOnScreenDebugMessage(4, 1.0f, FColor::Red, FString::Printf(TEXT("Health : %f / 100"), fHealth));
			// subtract health from damage sustained
			fHealth -= ActualDamage;
		}

		// Reduce health points
		//fHealth -= ActualDamage;
		// if player's health is 0.0f or lower
		if (fHealth < 0.0f)
		{
			// player has died
			// set bool flag to true
			bDead = true;	
			// prevent further damage
			SetCanBeDamaged(false);
			// if player was firing, stop firing gun
			OnStopFire();

			// prevent input from player
			// pointer to player input
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			// if there is player input
			if (PlayerController)
			{
				// disable input via mouse
				PlayerController->SetIgnoreLookInput(true);
				// disable input via keyboard
				PlayerController->SetIgnoreMoveInput(true);
			}
			// reset timer for player's death
			GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &ATopDownShmupCharacter::StartDeath, PlayAnimMontage(DeathAnim) - 0.25f, false);
		}
	}

	return ActualDamage;
}

// getter function to return bool value if player is dead
bool ATopDownShmupCharacter::IsDead()
{
	return bDead;
}

// function to handle death of player
void ATopDownShmupCharacter::StartDeath()
{
	StopAnimMontage(DeathAnim);								// stop animation
	GetMesh()->Deactivate();								// deactivate skeletal mesh
	GetWorldTimerManager().ClearTimer(DeathTimerHandle);	// clear timer
}

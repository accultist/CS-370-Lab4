// Fill out your copyright notice in the Description page of Project Settings.


#include "AssaultWeapon.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "DwarfCharacter.h"

// constructor
AAssaultWeapon::AAssaultWeapon()
{
    // default values
    fFireRate = 0.05f;          // float value for firing rate of gun
    fWeaponRange = 10000.0f;    // float value for the overall range of weapon, 1000.f is very far
    fAttackDamage = 2.0f;       // float value for attack damage, 2.0f per shot
}

// function for when weapon is being fired
void AAssaultWeapon::OnStartFire() {
    Super::OnStartFire();
    // Call WeaponTrace FireRate per second, starting 0 seconds from now.
    GetWorldTimerManager().SetTimer(WeaponTimerHandle, this, &AAssaultWeapon::WeaponTrace, fFireRate, true);
}

// functionf for when weapon is no longer fired
void AAssaultWeapon::OnStopFire() {
    Super::OnStopFire();

    // end weapon trace call
    GetWorldTimerManager().ClearTimer(WeaponTimerHandle);
}

void AAssaultWeapon::WeaponTrace()
{
    static FName WeaponFireTag = FName(TEXT("WeaponTrace"));
    static FName MuzzleSocket = FName(TEXT("MuzzleFlashSocket"));
    
    // Start from the muzzle's position
    FVector vecStartPos = WeaponMesh->GetSocketLocation(MuzzleSocket);
    
    // Get forward vector of MyPawn
    FVector vecForward = MyPawn->GetActorForwardVector();
    
    // Calculate end position
    FVector vecEndPos = vecStartPos + (vecForward * fWeaponRange);
    
    // Perform line trace to retrieve hit info
    FCollisionQueryParams TraceParams(WeaponFireTag, true, GetInstigator());
    
    // This fires the ray and checks against all objects w/ collision
    FHitResult Hit(ForceInit);
    GetWorld()->LineTraceSingleByObjectType(Hit, vecStartPos, vecEndPos,
    FCollisionObjectQueryParams::AllObjects, TraceParams);
    
    // Did this hit anything?
    if (Hit.bBlockingHit)
    {
        // spawn impact particle at hit location
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, Hit.Location);

        // if dwarf was hit, reduce it's health
        ADwarfCharacter* Dwarf = Cast<ADwarfCharacter>(Hit.GetActor());
        if (Dwarf)
        {
            Dwarf->TakeDamage(fAttackDamage, FDamageEvent(), GetInstigatorController(), this);
        }
    }
    
}

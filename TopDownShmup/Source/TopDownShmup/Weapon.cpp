// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"


// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    

    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Root Component"));
    RootComponent = WeaponMesh;

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
    
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Start firing
void AWeapon::OnStartFire() {
    SavedAC = PlayWeaponSound(FireLoopSound);
    MuzzlePSC = UGameplayStatics::SpawnEmitterAttached(MuzzleFX, WeaponMesh, TEXT("MuzzleFlashSocket"));
}


//Stop firing
void AWeapon::OnStopFire() {
    SavedAC->UAudioComponent::Stop();
    PlayWeaponSound(FireFinishSound);
    MuzzlePSC->UParticleSystemComponent::DeactivateSystem();
    
}

UAudioComponent* AWeapon::PlayWeaponSound(USoundCue* Sound) {
    UAudioComponent* AC = NULL;
    if (Sound) {
        AC = UGameplayStatics::SpawnSoundAttached(Sound, RootComponent);
        //UGameplayStatics::SpawnEmitterAttached(MuzzleFX, WeaponMesh, TEXT("MuzzleFlashSocket"));
    }
    
    return AC;
}

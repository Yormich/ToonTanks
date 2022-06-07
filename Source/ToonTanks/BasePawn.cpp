// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "Projectile.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraShakeBase.h"


// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComponent;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(CapsuleComponent);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile SpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);
}

void ABasePawn::RotateTurret(FVector LookAtTarget)
{
	FVector ToTarget = LookAtTarget - TurretMesh->GetComponentLocation();
	FRotator LookAtRotation = FRotator(0.f, ToTarget.Rotation().Yaw, 0.f);
	TurretMesh->SetWorldRotation(LookAtRotation);
}

void ABasePawn::Fire()
{
	FVector Location = ProjectileSpawnPoint->GetComponentLocation();
	FRotator Rotation = ProjectileSpawnPoint->GetComponentRotation();
	//FActorSpawnParameters Parameters;
	//Parameters.Template = &Template;
	FTransform SpawnSettings(Rotation, Location);
	AProjectile* Projectile = GetWorld()->SpawnActorDeferred<AProjectile>(ProjectileClass, SpawnSettings);
	if (Projectile)
	{
		Projectile->InitializeSpeed(InitialProjectileSpeed, MaxProjectileSpeed);
		Projectile->SetOwner(this);
		UGameplayStatics::FinishSpawningActor(Projectile, SpawnSettings);
	}
	//AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Location, Rotation);	
	//DrawDebugSphere(GetWorld(), ProjectileSpawnPoint->GetComponentLocation(), 15, 12, FColor::Cyan, false,3.f);
}

void ABasePawn::HandleDestruction()
{
	if (DeathParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticle, GetActorLocation(), GetActorRotation());
		if (DeathSound)
		{
			UGameplayStatics::SpawnSoundAtLocation(this, DeathSound, GetActorLocation());
		}
		if (DeathCameraShakeClass)
		{
			GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(DeathCameraShakeClass);
		}
	}
}
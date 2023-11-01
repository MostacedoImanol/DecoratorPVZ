// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator_Principal.h"
#include "ZombiConcreto.h"
#include "ZombiSpartano.h"
#include "ZombiWendi.h"

// Sets default values
ADecorator_Principal::ADecorator_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecorator_Principal::BeginPlay()
{
	Super::BeginPlay();

	AZombiConcreto* ZombiConcreto = GetWorld()->SpawnActor<AZombiConcreto>(AZombiConcreto::StaticClass());

	//Spawn a Melee Enemy and set its Enemy to the Concrete one
	AZombiWendi* ZombiWendi = GetWorld()->SpawnActor<AZombiWendi>(AZombiWendi::StaticClass());
	ZombiWendi->SetZombie(ZombiConcreto);

	//Spawn a Projectile Enemy and set its Enemy to the Melee one
	AZombiSpartano* ZombiSpartano = GetWorld()->SpawnActor<AZombiSpartano>(AZombiSpartano::StaticClass());
	ZombiSpartano->SetZombie(ZombiWendi);


	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Linda Chikilla a la Vista"));
	Zombie = ZombiWendi;
	Zombie->Caminan();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Los Spartanos vienen Corriendo!..."));
	
	Zombie->GetVelocidad();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Los espartanos aceleran!..."));
	Zombie = ZombiSpartano;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Zombis Wendi van a saltar de la tarima...."));
	Zombie->Brincar();

	
}

// Called every frame
void ADecorator_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


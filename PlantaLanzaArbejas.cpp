// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantaLanzaArbejas.h"
#include "Planta.h"

// Sets default values
APlantaLanzaArbejas::APlantaLanzaArbejas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void APlantaLanzaArbejas::BeginPlay()
{
	Super::BeginPlay();
	Planta = GetWorld()->SpawnActor<APlanta>(APlanta::StaticClass(), FVector(100.0f, 100.0f,500.0f), FRotator::ZeroRotator);

	Planta->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void APlantaLanzaArbejas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlantaLanzaArbejas::BuildTipo_Planta()
{

	if (!Planta) {
		UE_LOG(LogTemp, Error, TEXT("BuildTipo_Planta():Planta is NULL, make sure it's initialized.")); return;
	}
	//Set the Lobby Area of the Lodging
	Planta->SetTipo_Planta("Grand Hall");
	Planta->PlantaMesh->SetStaticMesh(PlantaMesh1);
}

void APlantaLanzaArbejas::BuildTipo_Arma()
{
	if (!Planta) {
		UE_LOG(LogTemp, Error, TEXT("BuildTipo_Arma():Lodging is NULL, make sure it's initialized.")); return; }
			//Set the Lobby Area of the Lodging
			Planta->SetTipo_Arma("Grand Hall");
}

void APlantaLanzaArbejas::BuildTipo_disparo()
{
	if (!Planta) {
		UE_LOG(LogTemp, Error, TEXT("BuildTipo_disparo():Planta is NULL, make sure it's initialized.")); return; }
			//Set the Lobby Area of the Lodging
			Planta->SetTipo_disparo("Grand Hall");
}

APlanta* APlantaLanzaArbejas::GetPlanta()
{
	return Planta;
}


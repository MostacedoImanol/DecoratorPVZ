// Fill out your copyright notice in the Description page of Project Settings.
#include "Planta.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlanta::APlanta()
{
 //	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    PlantaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantaMesh"));
    RootComponent = PlantaMesh;

    // Asignar el Mesh de un cubo al componente de malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CubeMesh.Succeeded())
    {
        PlantaMesh->SetStaticMesh(CubeMesh.Object);
    }

}

// Called when the game starts or when spawned
void APlanta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlanta::SetTipo_Planta(FString myTipo_Planta)
{
	Tipo_Planta = myTipo_Planta;
}

void APlanta::SetTipo_disparo(FString myTipo_disparo)
{
	Tipo_disparo = myTipo_disparo;
}

void APlanta::SetTipo_Arma(FString myTipo_Arma)
{
	Tipo_Arma = myTipo_Arma;

}

void APlanta::PlantaCharacteristicas()
{
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Tipo_Planta));
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Tipo_disparo));
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Tipo_Arma));
}


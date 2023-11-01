// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorador.h"

// Sets default values
ADecorador::ADecorador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DecoradorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DecoradorMesh"));
	RootComponent = DecoradorMesh;

	// Asignar el Mesh de tubo al componente de malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> TubeMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	if (TubeMesh.Succeeded())
	{
		DecoradorMesh->SetStaticMesh(TubeMesh.Object);
	}

}

// Called when the game starts or when spawned
void ADecorador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecorador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecorador::Caminan()
{
	this->Zombie->Caminan();
}

int ADecorador::GetVelocidad()
{
	return this->Zombie->GetVelocidad();
}

void ADecorador::Brincar()
{
	this->Zombie->Brincar();
}


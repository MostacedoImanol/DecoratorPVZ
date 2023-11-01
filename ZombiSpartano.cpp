// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombiSpartano.h"

void AZombiSpartano::Caminan()
{
	Super::Caminan();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		TEXT("Guerreros muertos Caminando ggg..."));
}

int AZombiSpartano::GetVelocidad()
{
	return Super::GetVelocidad() + 95;
}

void AZombiSpartano::Brincar()
{
	Super::Brincar();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		TEXT("Ahora los Estapartanos parecen Canguros..."));

}

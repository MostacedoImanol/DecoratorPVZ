// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombiWendi.h"

void AZombiWendi::Caminan()
{
	Super::Caminan();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		TEXT("Que bien se mueve la WENDY NO?"));
}

int AZombiWendi::GetVelocidad()
{
	return Super::GetVelocidad() + 5;
}

void AZombiWendi::Brincar()
{
	Super::Brincar();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		TEXT("Ahora los Zombis se pusieron a Brincar..."));
}

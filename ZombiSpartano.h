// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorador.h"
#include "ZombiSpartano.generated.h"

/**
 * 
 */
UCLASS()
class PROYSIS457_API AZombiSpartano : public ADecorador
{
	GENERATED_BODY()

public:
	virtual void Caminan() override;


	virtual int GetVelocidad() override;

	virtual void Brincar() override;
};

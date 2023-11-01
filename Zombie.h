// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Zombie.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UZombie : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROYSIS457_API IZombie
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Caminan() = 0;
	virtual int GetVelocidad() = 0;
	virtual void Brincar() = 0;

};

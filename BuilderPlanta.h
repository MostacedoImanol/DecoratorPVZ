// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuilderPlanta.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderPlanta : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROYSIS457_API IBuilderPlanta
{
	GENERATED_BODY()
public:
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	virtual void BuildTipo_Planta() = 0;
	virtual void BuildTipo_disparo() = 0;
	virtual void BuildTipo_Arma() = 0;
	virtual class APlanta* GetPlanta() = 0;
};

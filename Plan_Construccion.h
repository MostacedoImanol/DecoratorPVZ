// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Plan_Construccion.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlan_Construccion : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROYSIS457_API IPlan_Construccion
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the FloorPlan
	virtual void SetTipo_Planta(FString Tipo_Planta) = 0;
	virtual void SetTipo_disparo(FString Tipo_disparo) = 0;
	virtual void SetTipo_Arma(FString Tipo_Arma) = 0;
};

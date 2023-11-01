// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Plan_Construccion.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planta.generated.h"

UCLASS()
class PROYSIS457_API APlanta : public AActor, public IPlan_Construccion
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlanta();
	class UStaticMeshComponent* PlantaMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetTipo_Planta(FString myTipo_Planta);
	virtual void SetTipo_disparo(FString myTipo_disparo);
	virtual void SetTipo_Arma(FString myTipo_Arma);
	void PlantaCharacteristicas();
private:

	FString Tipo_Planta;

	FString Tipo_disparo;

	FString Tipo_Arma;

};

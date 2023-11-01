// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlantaLanzaTomates.generated.h"

UCLASS()
class PROYSIS457_API APlantaLanzaTomates : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere, Category = "Planta lanza Tomates")
	class APlanta* Planta;
	
public:	
	// Sets default values for this actor's properties
	APlantaLanzaTomates();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
//public:
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//	virtual void BuildTipo_Planta() override;
//	//Create the Lobby Area
//	virtual void BuildTipo_Arma() override;
//	//Create the Restaurants
//	virtual void BuildTipo_disparo() override;
//	//Create the
//	//Returns the Planta
//	virtual class APlanta* GetPlanta() override;



};

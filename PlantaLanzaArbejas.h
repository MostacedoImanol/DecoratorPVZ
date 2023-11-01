// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BuilderPlanta.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlantaLanzaArbejas.generated.h"

UCLASS()
class PROYSIS457_API APlantaLanzaArbejas : public AActor, public IBuilderPlanta
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere, Category = "Planta lanza arbejas")
	class APlanta* Planta;
public:	
	// Sets default values for this actor's properties
	APlantaLanzaArbejas();
	class UStaticMesh* PlantaMesh1 = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BuildTipo_Planta() override;
	//Create the Lobby Area
	virtual void BuildTipo_Arma() override;
	//Create the Restaurants
	virtual void BuildTipo_disparo() override;
	//Create the
	//Returns the Planta
	virtual class APlanta* GetPlanta() override;

};

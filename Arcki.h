// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BuilderPlanta.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arcki.generated.h"

UCLASS()
class PROYSIS457_API AArcki : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArcki();
	void ConstructorPlanta();
	//Set the Builder Actor
	void SetBuilderPlanta(AActor* Builder);
	//Get the Lodging of the Builder
	class APlanta* GetPlanta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Builder Actor, that must be a LodgingBuilder
	IBuilderPlanta* BuilderPlanta;


};

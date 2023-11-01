// Fill out your copyright notice in the Description page of Project Settings.


#include "Arcki.h"
#include "Planta.h"
#include "BuilderPlanta.h"


// Sets default values
AArcki::AArcki()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void AArcki::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArcki::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArcki::SetBuilderPlanta(AActor* Builder)
{
	BuilderPlanta = Cast<IBuilderPlanta>(Builder);
	if (!BuilderPlanta) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a LodgingBuilder!Are you sure that the Actor implements that interface ? "));
	}
}


APlanta* AArcki::GetPlanta()
{
	if (BuilderPlanta)
	{
		//Returns the Lodging of the Builder
		return BuilderPlanta->GetPlanta();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}
void AArcki::ConstructorPlanta()
{
	if (!BuilderPlanta) {
		UE_LOG(LogTemp, Error,TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized.")); return; }
				//Creates the buildings
		BuilderPlanta->BuildTipo_Planta();
		BuilderPlanta->BuildTipo_Arma();
		BuilderPlanta->BuildTipo_disparo();

}


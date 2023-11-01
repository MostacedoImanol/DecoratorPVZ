#include "PROYSIS457GameMode.h"
#include "Kismet/KismetMathLibrary.h"
#include "Planta.h"
#include "Zombi.h"
#include "Arcki.h"
#include "Plan_Construccion.h"
#include "PlantaLanzaArbejas.h"
#include "PlantaLanzaRepollos.h"
#include "PlantaLanzaTomates.h"

APROYSIS457GameMode::APROYSIS457GameMode()  // Definición del constructor
{
    // Inicialización del constructor
}

void APROYSIS457GameMode::BeginPlay()
{
    Super::BeginPlay(); 
    PlantaLanzaArbejas = GetWorld()->SpawnActor<APlantaLanzaArbejas>(APlantaLanzaArbejas::StaticClass());
    Arcki = GetWorld()->SpawnActor<AArcki>(AArcki::StaticClass());
    //Set the Builder for the Engineer and create the buildings
    Arcki->SetBuilderPlanta(PlantaLanzaArbejas);
    Arcki->ConstructorPlanta();
    //Get the Engineer's Lodging and Logs the created buildings
    APlanta* Planta = Arcki->GetPlanta();
    Planta->PlantaCharacteristicas();
    // Define el tamaño de tu matriz
   
//
//    AConcreteEnemy* ConcreteEnemy = GetWorld() -
//> SpawnActor<AConcreteEnemy>(AConcreteEnemy::StaticClass());
//    //Spawn a Melee Enemy and set its Enemy to the Concrete one
//    AMeleeEnemy* MeleeEnemy = GetWorld() -
//> SpawnActor<AMeleeEnemy>(AMeleeEnemy::StaticClass());
//    MeleeEnemy->SetEnemy(ConcreteEnemy);
//    //Spawn a Projectile Enemy and set its Enemy to the Melee one
//    AProjectileEnemy* ProjectileEnemy = GetWorld() -
//> SpawnActor<AProjectileEnemy>(AProjectileEnemy::StaticClass());
//    ProjectileEnemy->SetEnemy(MeleeEnemy);
//    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
//        TEXT("Melee Enemies are on the horizon"));
//    Enemy = MeleeEnemy;
//    Enemy->Fight();
//    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
//        FString::Printf(TEXT("Melee Enemies cause %i damage."), Enemy -
//> GetDamage()));
//    Enemy->Die();
//    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
//        TEXT("Enemies are now armed with guns"));
//    Enemy = ProjectileEnemy;
//    Enemy->Fight();
//    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
//        FString::Printf(TEXT("Projectile Enemies cause %i damage."), Enemy -
//> GetDamage()));
//    Enemy->Die();

}


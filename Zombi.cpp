#pragma once
#include "Zombi.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AZombi::AZombi()
{
    // Crear el componente de malla estática
    ZombiMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombiMesh"));
    RootComponent = ZombiMesh;

    // Asignar el Mesh de tubo al componente de malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> TubeMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
    if (TubeMesh.Succeeded())
    {
        ZombiMesh->SetStaticMesh(TubeMesh.Object);
    }
}



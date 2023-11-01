#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombi.generated.h"

UCLASS()
class PROYSIS457_API AZombi : public AActor
{
    GENERATED_BODY()

public:
    AZombi();

protected:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* ZombiMesh;
};

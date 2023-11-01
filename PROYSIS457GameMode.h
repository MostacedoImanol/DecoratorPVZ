
#include "CoreMinimal.h"
#include "Zombi.h"
#include "Planta.h"
#include "Zombie.h"
#include "GameFramework/GameModeBase.h"
#include "PROYSIS457GameMode.generated.h"

UCLASS(MinimalAPI)
class APROYSIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APROYSIS457GameMode();
public:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class APlantaLanzaArbejas* PlantaLanzaArbejas;
	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
	class AArcki* Arcki;




};







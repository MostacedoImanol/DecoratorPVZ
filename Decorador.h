// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Zombie.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Decorador.generated.h"


UCLASS()
class PROYSIS457_API ADecorador : public AActor, public IZombie	
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DecoradorMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	IZombie* Zombie;
public:

	virtual void Caminan() override;
	virtual int GetVelocidad() override;
	virtual void Brincar() override;

	void SetZombie(IZombie* _Zombie) { Zombie = _Zombie; }
	IZombie* GetZombie() { return Zombie; }



};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "GameFramework/Actor.h"
#include "Engine/StaticMesh.h"

#include "AOEClass.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class REALEASEGAME_API UAOEClass : public UActorComponent
{
	GENERATED_BODY()

private:
	float elapsedTime = 0;

public:	
	// Sets default values for this component's properties
	UAOEClass();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Project helper")
	void RotateTurret(AActor *actor);

	UFUNCTION(BlueprintCallable, Category = "Project helper")
	void ChangeTurretMesh(int upgradeCount, UStaticMesh *meshOne, UStaticMesh *meshTwo, UStaticMesh *meshThree, UStaticMesh *meshFour, UStaticMesh *meshFive, UStaticMeshComponent *actor);

		
};

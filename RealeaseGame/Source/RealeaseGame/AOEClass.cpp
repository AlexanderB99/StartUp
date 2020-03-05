// Fill out your copyright notice in the Description page of Project Settings.


#include "AOEClass.h"


// Sets default values for this component's properties
UAOEClass::UAOEClass()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAOEClass::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAOEClass::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	elapsedTime += DeltaTime;
	
}

void UAOEClass::RotateTurret( AActor *actor )
{
	FRotator newRotation=actor->GetActorRotation();// = actorRotation;
	newRotation.Yaw = FMath::RadiansToDegrees(FMath::Sin(elapsedTime));
	actor->SetActorRotation(newRotation);
}

void UAOEClass::ChangeTurretMesh(int upgradeCount,UStaticMesh *meshOne, UStaticMesh *meshTwo, UStaticMesh *meshThree, UStaticMesh *meshFour, UStaticMesh *meshFive, UStaticMeshComponent *actor)
{
	switch (upgradeCount)
	{
	case 1:
		actor->SetStaticMesh(meshOne);
		return;
	case 2:
		actor->SetStaticMesh(meshTwo);
		return;
	case 3:
		actor->SetStaticMesh(meshThree);
		return;
	case 4:
		actor->SetStaticMesh(meshFour);
		return;
	case 5:
		actor->SetStaticMesh(meshFive);
		return;
	default:
		break;
	}
	//actor.root
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/FPMovingActor.h"

// Sets default values
AFPMovingActor::AFPMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
	StaticMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFPMovingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	StaticMesh->AddRelativeLocation(OffsetAmount * DeltaTime * OffsetSpeed);
}


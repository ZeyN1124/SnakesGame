// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeElemetBase.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
ASnakeElemetBase::ASnakeElemetBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

}

// Called when the game starts or when spawned
void ASnakeElemetBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnakeElemetBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


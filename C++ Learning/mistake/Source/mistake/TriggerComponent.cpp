// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

// Called when the game starts

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("Trigger Component Alive."));
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);

	for ( AActor* Actor : Actors ) {
		FString ActorName = Actor->GetActorNameOrLabel();
		UE_LOG(LogTemp, Display, TEXT("Overlapping: %s"), *ActorName);
	}
}

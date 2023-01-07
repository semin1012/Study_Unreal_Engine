// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber2.h"
#include "Engine/World.h"
#include "Drawdebughelpers.h"
#include "Engine/EngineTypes.h"

// Sets default values for this component's properties
UGrabber2::UGrabber2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber2::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UGrabber2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle == nullptr) {
		return;
	} 

	if (PhysicsHandle->GetGrabbedComponent() != nullptr) {
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}

void UGrabber2::Grab()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if ( PhysicsHandle == nullptr ) {
		return;
	}

	FHitResult HitResult;
	bool HasHit = GetGrabbaleInReach(HitResult); 
	if ( HasHit ) {
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		HitComponent->WakeAllRigidBodies();
		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitResult.GetComponent(),
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()
		);
	}
	else {
		UE_LOG(LogTemp, Display, TEXT("No Hit Actor"));

	}
}

void UGrabber2::Release() 
{
	UPhysicsHandleComponent* PhysiscsHandle = GetPhysicsHandle();
	if (PhysiscsHandle == nullptr) {
		return;
	}

	if (PhysiscsHandle->GetGrabbedComponent() != nullptr) {
		PhysiscsHandle->GetGrabbedComponent()->WakeAllRigidBodies();
		PhysiscsHandle->ReleaseComponent();
	}
}

UPhysicsHandleComponent* UGrabber2::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (Result == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Grabber requires a UphysicsHandleComponent."));
	}
	return Result;
}

bool UGrabber2::GetGrabbaleInReach(FHitResult& OutHitResult) const
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxGrabDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);
	DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);

	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
	return GetWorld()->SweepSingleByChannel(
		OutHitResult,
		Start, End,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		Sphere
	);
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "ControllerHandeler.h"
#include "Engine.h"
#include "Runtime/Core/Public/Misc/CoreDelegates.h"

// Sets default values
AControllerHandeler::AControllerHandeler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControllerHandeler::BeginPlay()
{
	Super::BeginPlay();
	OnControllerConnectionHandle = FCoreDelegates::OnControllerConnectionChange.AddUFunction(this, FName("OnControllerConnectionChange"));
}

void AControllerHandeler::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	FCoreDelegates::OnControllerConnectionChange.Remove(OnControllerConnectionHandle);
}

// Called every frame
void AControllerHandeler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AControllerHandeler::OnControllerConnectionChange_Implementation(bool Connected, int32 UserID, int32 ControllerID) {

}
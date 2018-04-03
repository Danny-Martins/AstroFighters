// Fill out your copyright notice in the Description page of Project Settings.

#include "XboxLiveHandler.h"
#include "Online.h"
#include "Engine.h"


// Sets default values
AXboxLiveHandler::AXboxLiveHandler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AXboxLiveHandler::BeginPlay()
{
	Super::BeginPlay();
	/*
	auto online_subsystem = IOnlineSubsystem::Get();

	if (online_subsystem != nullptr) {

		auto user_identity = online_subsystem->GetIdentityInterface();

		if (user_identity.IsValid()) {
			this->gamer_tag = user_identity->GetPlayerNickname(0);
		}
	}
	else {
		this->gamer_tag = "Player";
	}
	*/
}

// Called every frame
void AXboxLiveHandler::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

}

FString AXboxLiveHandler::get_gamer_tag() {
	auto online_subsystem = IOnlineSubsystem::Get();

	if (online_subsystem != nullptr) {

		auto user_identity = online_subsystem->GetIdentityInterface();

		if (user_identity.IsValid()) {
			return online_subsystem->GetIdentityInterface()->GetPlayerNickname(0);
		}
	}
	return "Player";
}


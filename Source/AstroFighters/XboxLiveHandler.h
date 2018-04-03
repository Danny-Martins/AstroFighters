// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XboxLiveHandler.generated.h"

UCLASS()
class ASTROFIGHTERS_API AXboxLiveHandler : public AActor{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXboxLiveHandler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "XboxLive")
		FString get_gamer_tag();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "XboxLive")
	FString gamer_tag;
};

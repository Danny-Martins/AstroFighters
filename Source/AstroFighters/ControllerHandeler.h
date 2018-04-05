// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerHandeler.generated.h"

UCLASS()
class ASTROFIGHTERS_API AControllerHandeler : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControllerHandeler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	FDelegateHandle OnControllerConnectionHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual void SetupPlayerInputConn

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input")
		void OnControllerConnectionChange(bool connected, int32 UserID, int32 ControllerID);
};

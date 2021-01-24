// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_NPC.generated.h"

UCLASS()
class ROBOGOO_CPLUSPLUS_API ATest_NPC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_NPC();

	USceneComponent* RootComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* body;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* trigger;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

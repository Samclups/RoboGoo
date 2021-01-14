// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_Enemy.generated.h"

UCLASS()
class ROBOGOO_CPLUSPLUS_API ATest_Enemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_Enemy();

	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Health;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* body;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

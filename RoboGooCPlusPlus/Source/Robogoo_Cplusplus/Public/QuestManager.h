// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestManager.generated.h"

UCLASS()
class ROBOGOO_CPLUSPLUS_API AQuestManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuestManager();


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FString> ActiveQuests;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<int> ActiveQuestsID;



	// For UI Quest system and logging active quests / quest id's


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

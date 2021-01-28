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



	// Quest on/off  Variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// don't touch  - done via code
		bool Triggered;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// kill things then thing happens
		bool BloodlockQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// gather no of items
		bool FetchQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// take thing from npc to npc
		bool DeliverQuest;



	// Quest modifier

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// Add timer to any quest
		bool TimedQuestModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// time in seconds
		float TimedQuestTimerSeconds;

	FTimerHandle QuestTimer;

	UFUNCTION()
		void Time();



	// Objects related to quests

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> BloodlockObjects;			// objects to kill

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// enabled is turn on  - Disables is turn off object
		bool BlSolvedEnableDisable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// object to turn on or off on completion
		AActor* BloodlockSlovedSpawnObject;

		int deadnum;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// object to gather
		AActor* FetchQuestObjecttype;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// item id given for uses on multiple fetchquests -  TODO set to check when player pickup / already have
		int FetchQuestObjectID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// no of objects to gather
		int FetchQuestObjectNum;

		int itemscollected;	// Total objects gathered


	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// sending to other npc
		bool Deliversend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// Have to match between NPC's	TODO set to use
		int Deliverquestvalue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)		// recieving from other npc
		bool Deliverrecieve;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

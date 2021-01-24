// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_NPC.h"

// Sets default values
ATest_NPC::ATest_NPC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	RootComponent = RootComp;

	body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
	body->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	body->SetStaticMesh(SphereMeshAsset.Object);

	static ConstructorHelpers::FObjectFinder<UMaterial> plane_material(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// standard material
	body->GetStaticMesh()->SetMaterial(0, plane_material.Object);


	trigger = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("trigger"));
	trigger->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset1(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	trigger->SetStaticMesh(SphereMeshAsset1.Object);

	static ConstructorHelpers::FObjectFinder<UMaterial> plane_material1(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// standard material
	trigger->GetStaticMesh()->SetMaterial(0, plane_material1.Object);
}

// Called when the game starts or when spawned
void ATest_NPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


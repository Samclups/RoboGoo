// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_Enemy.h"

// Sets default values
ATest_Enemy::ATest_Enemy()
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

}

// Called when the game starts or when spawned
void ATest_Enemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
// Fill out your copyright notice in the Description page of Project Settings.


#include "ballmovement.h"

// Sets default values
Aballmovement::Aballmovement()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	RootComponent = RootComp;

	body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
	body->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	body->SetStaticMesh(SphereMeshAsset.Object);

	static ConstructorHelpers::FObjectFinder<UMaterial> plane_material(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// standard material
	body->GetStaticMesh()->SetMaterial(0, plane_material.Object);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	FollowCamera->bUsePawnControlRotation = false;

}

// Called when the game starts or when spawned
void Aballmovement::BeginPlay()
{
	Super::BeginPlay();

	body->SetSimulatePhysics(true);

}

// Called every frame
void Aballmovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Aballmovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &Aballmovement::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &Aballmovement::MoveRight);

}

void Aballmovement::MoveForward(float Axis)
{
	const FVector Torque = FVector(0.f, 1.f * Axis * 500000, 0.f);
	body->AddTorqueInRadians(Torque);
}

void Aballmovement::MoveRight(float Axis)
{
	const FVector Torque = FVector(-1.f * Axis * 500000, 0.f, 0.f);
	body->AddTorqueInRadians(Torque);
}
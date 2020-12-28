// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Movement.h"
#include "Bullet.h"

// Sets default values
ACharacter_Movement::ACharacter_Movement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	FollowCamera->bUsePawnControlRotation = false;

	GooSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GooObject"));
	GooSphere->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	GooSphere->SetStaticMesh(SphereMeshAsset.Object);
	static ConstructorHelpers::FObjectFinder<UMaterial> plane_material(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));
	GooSphere->GetStaticMesh()->SetMaterial(0, plane_material.Object);

	shootpoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("shootpoint"));
	shootpoint->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACharacter_Movement::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACharacter_Movement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (aim)
	{
		CameraBoom->TargetArmLength = 100.0f;
		CameraBoom->SetRelativeLocation(FMath::Lerp(CameraBoom->GetRelativeLocation(), FVector(0.f, 0.f, 70.f), 0.5f));
	}
	else
	{
		CameraBoom->TargetArmLength = 300.0f;
		CameraBoom->SetRelativeLocation(FMath::Lerp(CameraBoom->GetRelativeLocation(), FVector(0.f, 0.f, 0.f), 0.5f));
	}
}

// Called to bind functionality to input
void ACharacter_Movement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacter_Movement::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacter_Movement::MoveRight);

	PlayerInputComponent->BindAction("GooTrigger", IE_Pressed, this, &ACharacter_Movement::DisableActor);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACharacter_Movement::OnFire);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ACharacter_Movement::Aiming);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &ACharacter_Movement::AimReset);

}

void ACharacter_Movement::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ACharacter_Movement::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}

void ACharacter_Movement::DisableActor()
{
	flip = flip ? false : true;

	GooSphere->ToggleVisibility(flip);
}

void ACharacter_Movement::OnFire()
{
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();

		const FRotator SpawnRotation = GetControlRotation();

		const FVector SpawnLocation = ((shootpoint != nullptr && aim == true) ? shootpoint->GetComponentLocation() : GetActorLocation() + FVector(70.f, 0.f, 0.f));

		if (World != NULL)
		{
			ABullet* Bullet = World->SpawnActor<ABullet>(ProjectileClass, SpawnLocation, SpawnRotation);

			FVector NewVelocity = GetActorForwardVector() * 5000.f;

			Bullet->Velocity = FVector(NewVelocity);
		}
	}
}

void ACharacter_Movement::Aiming()
{
	aim = true;

	//cam move
}

void ACharacter_Movement::AimReset()
{
	aim = false;

	//cam move
}
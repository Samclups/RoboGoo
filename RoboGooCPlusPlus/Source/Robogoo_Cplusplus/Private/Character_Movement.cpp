#include "Character_Movement.h"
#include "Bullet.h"
#include "Test_Enemy.h"

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
	GetCharacterMovement()->JumpZVelocity = 800.0f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->GravityScale = 2.f;

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

	ConstructorHelpers::FObjectFinder<UMaterial> plane_material(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// Standard material
	GooSphere->GetStaticMesh()->SetMaterial(0, plane_material.Object);


	GooShield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GooShield"));
	GooShield->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset1(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	GooShield->SetStaticMesh(SphereMeshAsset1.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> plane_material1(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// Standard material
	GooShield->GetStaticMesh()->SetMaterial(0, plane_material1.Object);


	SoloMelee = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoloMelee"));
	SoloMelee->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset2(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	SoloMelee->SetStaticMesh(SphereMeshAsset2.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> plane_material2(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// Standard material
	SoloMelee->GetStaticMesh()->SetMaterial(0, plane_material2.Object);


	CombinedMelee = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CombinedMelee"));
	CombinedMelee->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset4(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	CombinedMelee->SetStaticMesh(SphereMeshAsset4.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> plane_material4(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// Standard material
	CombinedMelee->GetStaticMesh()->SetMaterial(0, plane_material4.Object);


	CombinedMeleeChild = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CombinedMeleeChild"));
	CombinedMeleeChild->SetupAttachment(CombinedMelee);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	CombinedMeleeChild->SetStaticMesh(CubeMeshAsset.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> plane_material3(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial'"));		// Standard material
	CombinedMeleeChild->GetStaticMesh()->SetMaterial(0, plane_material3.Object);



	aimshootpoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("aimshootpoint"));
	aimshootpoint->SetupAttachment(RootComponent);

	nonaimshootpoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("nonaimshootpoint"));
	nonaimshootpoint->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACharacter_Movement::BeginPlay()
{
	Super::BeginPlay();

	GooSphere->SetWorldScale3D(FVector(0.75f, 0.75f, 0.75f));
	GooSphere->ToggleVisibility(false);

	GooShield->SetWorldScale3D(FVector(0.2f, 1.f, 1.f));
	GooShield->SetRelativeLocation(FVector(40.f, 0.f, 30.f));
	GooShield->ToggleVisibility(false);

	SoloMelee->SetWorldScale3D(FVector(1.f, 2.f, 1.f));
	SoloMelee->SetRelativeLocation(FVector(40.f, 0.f, 0.f));
	SoloMelee->ToggleVisibility(false);

	CombinedMeleeChild->SetWorldScale3D(FVector(3.f, 1.f, 1.f));
	CombinedMeleeChild->SetRelativeLocation(FVector(125.f, 0.f, 0.f));
	CombinedMelee->SetRelativeRotation(FRotator(0.f, 50.f, 0.f));
	CombinedMeleeChild->ToggleVisibility(false);

	landed = true;
	glidenum = 0;
	block = false;
	aim = false;

	CombinedMeleeChild->OnComponentBeginOverlap.AddDynamic(this, &ACharacter_Movement::BeginOverlap);
	SoloMelee->OnComponentBeginOverlap.AddDynamic(this, &ACharacter_Movement::BeginOverlap);

	startposition = GetActorLocation();

	Health = PlayerHealth;

}

// Called every frame
void ACharacter_Movement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	height = GetActorLocation().X;

	if (Health <= 0)
	{
		flip = false;
		GooSphere->ToggleVisibility(flip);
		SetActorLocation(startposition);
		Health = PlayerHealth;
		GetCharacterMovement()->JumpZVelocity = nongoojump;
		GetCharacterMovement()->GravityScale = nongoogravity;
	}

	if (aim)
	{
		CameraBoom->TargetArmLength = 100.0f;
		CameraBoom->SetRelativeLocation(FMath::Lerp(CameraBoom->GetRelativeLocation(), FVector(0.f, 30.f, 70.f), 0.5f));

		bUseControllerRotationRoll = true;
		bUseControllerRotationYaw = true;
	}
	else
	{
		CameraBoom->TargetArmLength = 300.0f;
		CameraBoom->SetRelativeLocation(FMath::Lerp(CameraBoom->GetRelativeLocation(), FVector(0.f, 0.f, 0.f), 0.5f));

		bUseControllerRotationRoll = false;
		bUseControllerRotationYaw = false;
	}

	if (sweep)
	{	
		CombinedMelee->AddRelativeRotation(FRotator(0.f, -3.f, 0.f));
	}
}

// Called to bind functionality to input
void ACharacter_Movement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);		
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter_Movement::Jumpglide);

	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter_Movement::Stopglide);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacter_Movement::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacter_Movement::MoveRight);

	PlayerInputComponent->BindAction("GooTrigger", IE_Pressed, this, &ACharacter_Movement::DisableActor);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACharacter_Movement::OnFire);
	PlayerInputComponent->BindAction("Melee", IE_Pressed, this, &ACharacter_Movement::OnMelee);

	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ACharacter_Movement::Aiming);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &ACharacter_Movement::AimReset);

	PlayerInputComponent->BindAction("Block", IE_Pressed, this, &ACharacter_Movement::Blocking);
	PlayerInputComponent->BindAction("Block", IE_Released, this, &ACharacter_Movement::BlockReset);

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
	if (flip == false) flip = true;
	else if (flip == true) flip = false;

	//flip = flip ? true : false;

	GooSphere->ToggleVisibility(flip);

	if (flip)
	{
		GetCharacterMovement()->JumpZVelocity = goojump;
		GetCharacterMovement()->GravityScale = googravity;

		//landed = false;
	}
	else
	{
		GetCharacterMovement()->JumpZVelocity = nongoojump;
		GetCharacterMovement()->GravityScale = nongoogravity;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Bool: %s"), flip ? TEXT("true") : TEXT("false")));
}

void ACharacter_Movement::OnFire()
{
	if (ProjectileClass != NULL && block == false)
	{
		UWorld* const World = GetWorld();

		const FRotator SpawnRotation = ((aimshootpoint != nullptr && aim == true) ? GetControlRotation() : GetActorRotation());

		const FVector SpawnLocation = ((aimshootpoint != nullptr && aim == true) ? aimshootpoint->GetComponentLocation() : nonaimshootpoint->GetComponentLocation());

		if (World != NULL)
		{
			ABullet* Bullet = World->SpawnActor<ABullet>(ProjectileClass, SpawnLocation, SpawnRotation);

			FVector NewVelocity = GetActorForwardVector() * bulletspeed;

			Bullet->Velocity = FVector(NewVelocity);

			if (aim == true)
			{
				Bullet->aimlong = true;
			}
		}
	}
}

void ACharacter_Movement::OnMelee()
{
	if (flip)
	{
		if (!commeleeonce)
		{
			commeleeonce = true;

			CombinedMeleeChild->ToggleVisibility(true);
			sweep = true;

			GetWorld()->GetTimerManager().SetTimer(commeleetimer, this, &ACharacter_Movement::combinedmelee, commeleemaxtime, false);
		}
	}
	else
	{
		if (!smeleeonce)
		{
			smeleeonce = true;

			SoloMelee->ToggleVisibility(true);

			GetWorld()->GetTimerManager().SetTimer(smeleetimer, this, &ACharacter_Movement::smallmelee, smeleemaxtime, false);
		}
	}
}

void ACharacter_Movement::Aiming()
{
	aim = true;
}

void ACharacter_Movement::AimReset()
{
	aim = false;
}

void ACharacter_Movement::Blocking()
{
	if (flip)
	{
		//aim = true;
		block = true;
		GooShield->ToggleVisibility(true);
	}
}

void ACharacter_Movement::BlockReset()
{
	if (flip)
	{
		//aim = false;
		block = false;
		GooShield->ToggleVisibility(false);
	}
}

void ACharacter_Movement::Landed(const FHitResult& Hit)
{
	Super::OnLanded(Hit);

	landed = true;
	glidenum = 0;

	//if (flip)
	//{
	//	GetCharacterMovement()->JumpZVelocity = goojump;
	//	GetCharacterMovement()->GravityScale = googravity;
	//}
	//else
	//{
	//	GetCharacterMovement()->JumpZVelocity = nongoojump;
	//	GetCharacterMovement()->GravityScale = nongoogravity;
	//}

	//if (height - (damagedist + heightoffset))
	//{
	//	float damage = ((height - (damagedist + heightoffset)));
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::SanitizeFloat(damage));

	//	if (((height - (damagedist + heightoffset)) > minimumdropdist) && ((height - (damagedist + heightoffset))) < (minimumdropdist + (minimumdropdist / 2)) ) Health -= 1.f;

	//	if (((height - (damagedist + heightoffset)) > minimumdropdist + (minimumdropdist / 2) + 1) && ((height - (damagedist + heightoffset))) < (Maxfallheight - 1))
	//	{
	//		float tempdamage = ((height - (damagedist + heightoffset)) * damagemultiplier);
	//		int damageint = std::round(tempdamage);

	//		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::SanitizeFloat(damageint));

	//		Health -= damageint;
	//	}

	//	if ((height - (damagedist + heightoffset)) > Maxfallheight) Health -= 100.f;

	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(Health));
	//}

	//if (Health <= 0)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DEATH"));
	//}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("landed"));
}

void ACharacter_Movement::Jumpglide()
{
	heightoffset = GetActorLocation().X;

	if (flip)
	{
		landed = false;
		glidenum++;

		if (!landed && glidenum == 2)
		{
			glidenum = 3;

			GetCharacterMovement()->Velocity = FVector(GetCharacterMovement()->Velocity.X, GetCharacterMovement()->Velocity.Y, 0);

			GetCharacterMovement()->GravityScale = 0.2f;

		}
	}
}

void ACharacter_Movement::Stopglide()
{
	if (glidenum >= 3)
	{
		GetCharacterMovement()->GravityScale = 0.8f;
	}
}

void ACharacter_Movement::smallmelee()
{
	smeleeonce = false;
	SoloMelee->ToggleVisibility(false);

	GetWorld()->GetTimerManager().ClearTimer(smeleetimer);
}

void ACharacter_Movement::combinedmelee()
{
	sweep = false;
	commeleeonce = false;
	CombinedMelee->SetRelativeRotation(FRotator(0.f, 50.f, 0.f));
	CombinedMeleeChild->ToggleVisibility(false);

	GetWorld()->GetTimerManager().ClearTimer(commeleetimer);
}

void ACharacter_Movement::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Overlap

	if (OtherActor->IsA(ATest_Enemy::StaticClass()))
	{
		if (smeleeonce)
		{
			GetWorld()->GetTimerManager().SetTimer(damage_tick, this, &ACharacter_Movement::damage, smeleemaxtime, false);
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("smallhit")));

		}
		else if(commeleeonce)
		{
			GetWorld()->GetTimerManager().SetTimer(damage_tick, this, &ACharacter_Movement::damage, commeleemaxtime, false);
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("combohit")));

		}
	}
}

void ACharacter_Movement::damage()
{
	GetWorld()->GetTimerManager().ClearTimer(damage_tick);
}
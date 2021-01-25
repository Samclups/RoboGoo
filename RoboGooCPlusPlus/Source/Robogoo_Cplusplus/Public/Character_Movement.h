#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Engine.h"
#include "Bullet.h"
#include "Test_Enemy.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/SpringArmComponent.h"

#include "Character_Movement.generated.h"

UCLASS()
class ROBOGOO_CPLUSPLUS_API ACharacter_Movement : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_Movement();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* GooSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* GooShield;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* SoloMelee;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* CombinedMelee;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* CombinedMeleeChild;

	UFUNCTION(BlueprintCallable, Category = Disable)
	void DisableActor();

	void MoveForward(float Axis);
	void MoveRight(float Axis);

	void JonJump();

	void Jumpglide();
	void Stopglide();

	bool flip, aim, block, smeleeonce, commeleeonce, sweep, landed;
	int Health, glidenum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int PlayerHealth = 100;

	float height, damagedist = 200, heightoffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float smeleemaxtime = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float commeleemaxtime = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int bulletspeed = 5000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int nongoojump = 800;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float nongoogravity = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int goojump = 700;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float googravity = 0.8f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float damagemultiplier = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float minimumdropdist = 101.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Maxfallheight = 501.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector cutscenepositionofset = FVector(0.f, 0.f, 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator cutscenerotationofset = FRotator(0.f,0.f,0.f);


	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABullet> ProjectileClass;

	UFUNCTION(BlueprintCallable, Category = Disable)
		void OnFire();

	UFUNCTION(BlueprintCallable, Category = Disable)
		void OnMelee();

	UFUNCTION(BlueprintCallable, Category = Disable)
		void Aiming();

	UFUNCTION(BlueprintCallable, Category = Disable)
		void AimReset();

	UFUNCTION(BlueprintCallable, Category = Disable)
		void Blocking();

	UFUNCTION(BlueprintCallable, Category = Disable)
		void BlockReset();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Disable)
		UStaticMeshComponent* aimshootpoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Disable)
		UStaticMeshComponent* nonaimshootpoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UStaticMeshComponent* Cutsceneposition;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UStaticMeshComponent* Aimcamposition;

	UFUNCTION()
		void smallmelee();

	UFUNCTION()
		void combinedmelee();

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent,	AActor* OtherActor,	UPrimitiveComponent* OtherComp,	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void damage();

	FTimerHandle smeleetimer, commeleetimer, damage_tick;

	FVector startposition, camstartpos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool cutscene;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Landed(const FHitResult& Hit) override;
};

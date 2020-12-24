// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Engine.h"
#include "Bullet.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
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

	UFUNCTION(BlueprintCallable, Category = Disable)
	void DisableActor();

	void MoveForward(float Axis);
	void MoveRight(float Axis);

	bool flip;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABullet> ProjectileClass;

	UFUNCTION(BlueprintCallable, Category = Disable)
		void OnFire();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* shootpoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

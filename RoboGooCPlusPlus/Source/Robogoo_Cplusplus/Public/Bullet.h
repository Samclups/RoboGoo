#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "DestructibleComponent.h"
#include "DestructibleActor.h"
#include "Bullet.generated.h"

UCLASS()
class ROBOGOO_CPLUSPLUS_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* RootComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = speed)
		FVector Velocity = FVector(100.f);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sphere)
		UStaticMeshComponent* body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float nonaimlife = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float aimlife = 0.2f;

	float Bulletlife = 0;
	bool aimlong;
};

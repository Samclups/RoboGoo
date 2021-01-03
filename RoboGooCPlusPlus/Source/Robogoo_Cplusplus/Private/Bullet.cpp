#include "Bullet.h"

// Sets default values
ABullet::ABullet()
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
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	body->SetWorldScale3D(FVector(0.2f, 0.1f, 0.1f));

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FHitResult HitResult;

	FVector StartTrace = this->GetActorLocation();
	FVector EndTrace = (Velocity * DeltaTime) + StartTrace;
	EndTrace.Z += this->GetActorRotation().Pitch;

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Destructible, CollisionParams))
	{
		if (HitResult.GetActor())
		{
			ADestructibleActor* Mesh = Cast<ADestructibleActor>(HitResult.GetActor());

			if (Mesh)
			{
				Mesh->GetDestructibleComponent()->ApplyRadiusDamage(10.f, HitResult.ImpactPoint, 32.f, 10.f, false);
			}
		}

		Destroy();
	}
	else
	{
		Bulletlife += DeltaTime;

		//DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Emerald, true);

		SetActorLocation(EndTrace);

		Velocity += FVector(0.f, 0.f, -200.f) * DeltaTime;
	}

	if (!aimlong && Bulletlife > 0.1f)
	{
		Destroy();
	}

	if (aimlong && Bulletlife > 0.2f)
	{
		Destroy();
	}
}
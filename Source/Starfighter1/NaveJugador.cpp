// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugador.h"

/*#include "Proyectil.h"

#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
*/

#include "GameFramework/FloatingPawnMovement.h"	 //Incluye librería para proporcionar movimientos simples para la clase Peon 
#include "Components/StaticMeshComponent.h"

// Sets default values
ANaveJugador::ANaveJugador()// El constructor es la funcion que se llama igual que la clase

{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_NaveJugador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM NaveJugador"));//Inicializando SM_Jugador
					//CreateDefaultSubobject lista de sobrecarga

	RootComponent = SM_NaveJugador;//RootComponent define la transformación (ubicación,rotación,escala) de este Actor en el mundo,
								   //todos los componentes deben adjuntarse a el de alguna forma 

	SM_NaveJugador->SetEnableGravity(false);// componente primitivo que se ve afectado por la gravedad
	SM_NaveJugador->SetConstraintMode(EDOFMode::XZPlane);// establece el modo de restricción del componente, solo en los planos XZ
	SM_NaveJugador->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); // Controla el tipo de colisón que está habilitada para el cuerpo
																			 // QueryAndPhysics se puede utilizar para consultas espaciales (raycats, barridos, superposiciones) como para simulación (cuerpo rígido,restricciones)
	SM_NaveJugador->SetCollisionProfileName(TEXT("PhysicsActor"));//Establece el nombre del perfil de colsión.
																////Los constructores llaman a está función cuando establecen el nombre del perfil
																//Esto cambiará el nombre del perfil de colisión actual para que sea este y sobrescriba la configuración de colisión.
	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
						// CreateDefaultSubobject Crear un componente o subobjeto, permite crear una clase secundaria y devolver la clase principal 


	/////////////////////////////////////////////////////////

/*	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;

	Energy = 100.0f;

	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = false;

	FireForwardValue = 1.0f;
	FireRightValue = 0.0f;

	const FVector MoveDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);

	const FRotator FireRotation = MoveDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	
	*/

}
// Called when the game starts or when spawned
void ANaveJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	if (ForwardValue != 0.0f || RightValue != 0.0f) {

		if (ForwardValue != FireForwardValue) {
			FireForwardValue = ForwardValue;
		}

		if (RightValue != FireRightValue) {
			FireRightValue = RightValue;
		}
	}

	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	*/
}

// Called to bind functionality to input
void ANaveJugador::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

/*	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	//PlayerInputComponent->BindAction(Fire)
	InputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ANaveJugador::Fire);
	*/

}

/////////////////////////////

void ANaveJugador::MoverHorizontal(float AxisValue)
{
	AddMovementInput(FVector(AxisValue, 0.0f, 0.0f), 1.0f, false);
}   	//El valor de X que la va dar el jugadr, escala 1.0f, no hay rotación

void ANaveJugador::MoverVertical(float AxisValue)
{
	AddMovementInput(FVector(0.0f, 0.0f, AxisValue), 1.0f, false);
}

//////////////////////////////

/*
void ANaveJugador::Fire() {
	bCanFire = true;
	UE_LOG(LogTemp, Warning, TEXT("Se presiono la barra espaciadora"));
	// Create fire direction vector

	UE_LOG(LogTemp, Warning, TEXT("FireForwardValue: %f FireRightValue: %f"), FireForwardValue, FireRightValue);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	//const FVector FireDirection = GetActorLocation();
	// Try and fire a shot
	FireShot(FireDirection);
}

void ANaveJugador::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{

		// If we are pressing fire stick in a direction
		//if (FireDirection.SizeSquared() > 0.0f)
		//{
		const FRotator FireRotation = FireDirection.Rotation();
		// Spawn projectile at an offset from this pawn
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// spawn the projectile
			World->SpawnActor<AProyectil>(SpawnLocation, FireRotation);
			//UE_LOG(LogTemp, Warning, TEXT("SpawnLocation(X, Y) = %s, %s FireRotation(X, Y) =  s, s"), SpawnLocation.X, SpawnLocation.Y);
			//UE_LOG(LogTemp, Warning, TEXT("World not nullptr"));
		}



		//bCanFire = false;
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveJugador::ShotTimerExpired, FireRate);

		// try and play the sound if specified

	/*	if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}*/

	//	bCanFire = false;
		//}
	/*}
}

void ANaveJugador::ShotTimerExpired()
{
	bCanFire = true;
}
*/
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "NaveProyectil.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NaveJugador.generated.h"

class UFloatingPawnMovement;

UCLASS()
class STARFIGHTER1_API ANaveJugador : public APawn
{
	GENERATED_BODY()

		/** The camera */
		UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

public:
	// Sets default values for this pawn's properties
	ANaveJugador();

	// Begin Actor Interface
//virtual void Tick(float DeltaSeconds) override;
//virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	//void Fire();

	/* Fire a shot in the specified direction */
	//void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	//void ShotTimerExpired();

	/** Offset from the ships location to spawn projectiles */
	//UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		//FVector GunOffset;

	/* How fast the weapon will fire */
	//UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		//float FireRate;


	/** Returns CameraComponent subobject **/
//	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
//	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)// UPROPERTY permite que lo veas en la paleta de BlulePrints
		UStaticMeshComponent* SM_NaveJugador;	 //permite vestir al actor,
												 // manejar los modelos estáticos

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;	// Gestiona como se va mover el actor

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoverHorizontal(float AxisValue);

	virtual void MoverVertical(float AxisValue);

private:

	/* Flag to control firing  */
	//uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
//	FTimerHandle TimerHandle_ShotTimerExpired;

	//float FireForwardValue;
	//float FireRightValue;

};

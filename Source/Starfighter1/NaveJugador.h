// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NaveJugador.generated.h"

class UFloatingPawnMovement;

UCLASS()
class STARFIGHTER1_API ANaveJugador : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANaveJugador();

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

};

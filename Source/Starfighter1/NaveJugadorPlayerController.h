// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NaveJugadorPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER1_API ANaveJugadorPlayerController : public APlayerController
{
	GENERATED_BODY()

		ANaveJugadorPlayerController();

		UFUNCTION()
		virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;//BeginPlay Evento nativo reemplazable para cuando comienza el juego para este actor.

	void MoverHorizontal(float AxisValue);

	void MoverVertical(float AxisValue);


};

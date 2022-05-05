// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugadorPlayerController.h"

#include "Kismet/GameplayStatics.h" //Clase estática con útiles funciones de utilidad de juego que se pueden llamar desde Blueprint y C++
#include "Camera/CameraActor.h"

#include "NaveJugador.h"

ANaveJugadorPlayerController::ANaveJugadorPlayerController()
{
}

void ANaveJugadorPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	//LLamando a la clase padre
	//Componente que maneja la entrada para este actor, si la entrada está habilitada.

	EnableInput(this);

	InputComponent->BindAxis("MoverHorizontal", this, &ANaveJugadorPlayerController::MoverHorizontal);

	InputComponent->BindAxis("MoverVertical", this, &ANaveJugadorPlayerController::MoverVertical);
}

void ANaveJugadorPlayerController::BeginPlay()
{

	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	// // Todos los actores que estan en el "mundo" se cargaran "CameraActors

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);// define la camara que vera nuestro juego

}

void ANaveJugadorPlayerController::MoverHorizontal(float AxisValue)
{
	auto MyPawn = Cast<ANaveJugador>(GetPawn()); // Auto toma el tipo de variable del lado izquierdo, permite declarar la variable del tipo de resultado que te lanza hacia el lado derecho 
										// cast permite covertir rescatar o que esta en el escenario en un ANaveJugador

	if (MyPawn) { // MyPawn es un tipo de objeto NaveJugador, Jugador tiene un método moverHorizontal

		MyPawn->MoverHorizontal(AxisValue);
	}
}

void ANaveJugadorPlayerController::MoverVertical(float AxisValue)
{
	auto MyPawn = Cast<ANaveJugador>(GetPawn());

	if (MyPawn) {

		MyPawn->MoverVertical(AxisValue);

	}
}
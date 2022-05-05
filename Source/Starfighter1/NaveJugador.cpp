// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugador.h"

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
}						// CreateDefaultSubobject Crear un componente o subobjeto, permite crear una clase secundaria y devolver la clase principal 

// Called when the game starts or when spawned
void ANaveJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANaveJugador::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANaveJugador::MoverHorizontal(float AxisValue)
{
	AddMovementInput(FVector(AxisValue, 0.0f, 0.0f), 1.0f, false);
}   	//El valor de X que la va dar el jugadr, escala 1.0f, no hay rotación

void ANaveJugador::MoverVertical(float AxisValue)
{
	AddMovementInput(FVector(0.0f, 0.0f, AxisValue), 1.0f, false);
}


// Fill out your copyright notice in the Description page of Project Settings.

#include "LogicPawn_Main.h"

// Sets default values
ALogicPawn_Main::ALogicPawn_Main()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create a capsule component.
    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    RootComponent = CapsuleComponent;
    
    // Set size for collision capsule.
    CapsuleComponent->InitCapsuleSize(42.f, 96.0f);

    // Create a mesh component.
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);
    
}

// Called when the game starts or when spawned
void ALogicPawn_Main::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ALogicPawn_Main::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ALogicPawn_Main::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
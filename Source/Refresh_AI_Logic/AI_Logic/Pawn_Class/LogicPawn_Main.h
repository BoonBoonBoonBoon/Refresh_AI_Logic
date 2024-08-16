// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Pawn.h"
#include "LogicPawn_Main.generated.h"

UCLASS()
class REFRESH_AI_LOGIC_API ALogicPawn_Main : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ALogicPawn_Main();

	// Body of the pawn.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body")
	TObjectPtr<UCapsuleComponent> CapsuleComponent;

	// Mesh of the pawn.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body")
	TObjectPtr<UStaticMeshComponent> MeshComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

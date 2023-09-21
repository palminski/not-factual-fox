// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomColorBlock.generated.h"

UCLASS()
class WILLSGAME_API ARandomColorBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomColorBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	FLinearColor BlockColor;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
};

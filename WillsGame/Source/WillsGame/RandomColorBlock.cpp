// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomColorBlock.h"

// Sets default values
ARandomColorBlock::ARandomColorBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// MyStaticMeshComponent = nullptr;

}

// Called when the game starts or when spawned
void ARandomColorBlock::BeginPlay()
{
	Super::BeginPlay();

	StaticMeshComponent = FindComponentByClass<UStaticMeshComponent>();

	if (StaticMeshComponent) {
		UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(StaticMeshComponent->GetMaterial(0), this);

		BlockColor = FLinearColor(FMath::FRand(),FMath::FRand(),FMath::FRand(),1.0f);

		DynamicMaterial->SetVectorParameterValue("BaseColor", BlockColor);

		StaticMeshComponent->SetMaterial(0, DynamicMaterial);
	}

	
	
}

// Called every frame
void ARandomColorBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


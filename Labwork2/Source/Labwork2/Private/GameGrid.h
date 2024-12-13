// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameSlot.h"
#include "GameFramework/Actor.h"
#include "GameGrid.generated.h"

UCLASS()
class AGameGrid : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AGameGrid();

    virtual void OnConstruction(const FTransform& Transform) override;

    UPROPERTY(EditAnyWhere)
    TSubclassOf<AGameSlot> GridClass;

    UPROPERTY(EditAnywhere)
    int NumRows;

    UPROPERTY(EditAnywhere)
    int NumCols;

    UPROPERTY(VisibleAnywhere)
    TArray<UChildActorComponent*> GridActors;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    AGameSlot* GetSlot(FSGridPosition& Position);
    static AGameSlot* FindSlot(FSGridPosition Position);

private:
    static AGameGrid* GameGrid;

};

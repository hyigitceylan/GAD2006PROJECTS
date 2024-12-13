// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Commandsgame.h"

/**
 *
 */
class MoveCommand : public Commandsgame
{
public:
    MoveCommand(FSGridPosition Src, FSGridPosition Dst);
    ~MoveCommand();

    virtual void Execute() override;
    virtual void Revert() override;

private:
    FSGridPosition Source, Destination;
};

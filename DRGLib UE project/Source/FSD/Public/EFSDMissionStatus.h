#pragma once
#include "CoreMinimal.h"
#include "EFSDMissionStatus.generated.h"

UENUM()
enum class EFSDMissionStatus : uint8 {
    SpaceRig,
    InGame,
    Starting,
    EscapeSequence,
    FinalBattle,
};


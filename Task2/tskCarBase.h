#pragma once

#include "tskCargo.h"

class tskCarBase
{
public:
    tskCarBase() = default;
    virtual ~tskCarBase() = default;

    virtual bool CheckCargo(const tskCargo&) const = 0;
};


#pragma once
#include "tskCarBase.h"
class tskCar2 :
    public tskCarBase
{
public:
    tskCar2() = delete;

    tskCar2(double a_weight);

    ~tskCar2() = default;

    double get_weight() const;
    virtual bool CheckCargo(const tskCargo&) const override;

private:
    double m_weight = 0;
};

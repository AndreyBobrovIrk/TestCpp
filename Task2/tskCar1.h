#pragma once
#include "tskCarBase.h"
class tskCar1 :
    public tskCarBase
{
public:
public:
    tskCar1() = delete;

    tskCar1(double a_weight, double a_volume);

    ~tskCar1() = default;

    double get_weight() const;
    double get_volume() const;
    bool CheckCargo(const tskCargo&) const override;

private:
    double m_weight = 0;
    double m_volume = 0;
};


#pragma once
#include "tskCarBase.h"
class tskCar1 :
    public tskCarBase
{
public:
    tskCar1() = delete;

    tskCar1(double a_max_weight, double a_volume);

    ~tskCar1() = default;

    double get_max_weight() const;
    double get_max_volume() const;
    bool CheckCargo(const tskCargo& a_cargo) const override;
    void print() override;

private:
    double m_max_weight = 0;
    double m_max_volume = 0;
};


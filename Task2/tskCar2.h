#pragma once
#include "tskCarBase.h"
class tskCar2 :
    public tskCarBase
{
public:
    tskCar2() = delete;

    tskCar2(double a_max_weight);

    ~tskCar2() = default;

    double get_max_weight() const;
    virtual bool CheckCargo(const tskCargo&) const override;
    void print() override;

private:
    double m_max_weight = 0;
};


#include "pch.h"
#include "tskCar2.h"

tskCar2::tskCar2(double a_weight)
{
    m_weight = a_weight;
}

double tskCar2::get_weight() const
{
    return m_weight;
}

bool tskCar2::CheckCargo(const tskCargo& a_cargo) const
{
    return m_weight >= a_cargo.get_weight();
}

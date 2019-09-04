#include "pch.h"
#include "tskCar2.h"

tskCar2::tskCar2(double a_max_weight)
{
    m_max_weight = a_max_weight;
}

double tskCar2::get_max_weight() const
{
    return m_max_weight;
}

bool tskCar2::CheckCargo(const tskCargo& a_cargo) const
{
    return m_max_weight >= a_cargo.get_weight();
}

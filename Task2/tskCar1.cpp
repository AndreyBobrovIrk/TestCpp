#include "pch.h"
#include "tskCar1.h"


tskCar1::tskCar1(double a_max_weight, double a_max_volume)
{
    m_max_weight = a_max_weight;
    m_max_volume = a_max_volume;
}

double tskCar1::get_max_weight() const
{
    return m_max_weight;
}

double tskCar1::get_max_volume() const
{
    return m_max_volume;
}

bool tskCar1::CheckCargo(const tskCargo& a_cargo) const
{
    return m_max_weight >= a_cargo.get_weight() &&
        m_max_volume >= a_cargo.get_volume();
}

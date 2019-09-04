#include "pch.h"
#include "tskCar1.h"


tskCar1::tskCar1(double a_weight, double a_volume)
{
    m_weight = a_weight;
    m_volume = a_volume;
}

double tskCar1::get_weight() const
{
    return m_weight;
}

double tskCar1::get_volume() const
{
    return m_volume;
}

bool tskCar1::CheckCargo(const tskCargo& a_cargo) const
{
    return m_weight >= a_cargo.get_weight() &&
        m_volume >= a_cargo.get_volume();
}

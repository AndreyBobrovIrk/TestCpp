#include "pch.h"
#include "tskCar.h"

tskCar::tskCar(double a_weight, double a_volume)
{
    m_weight = a_weight;
    m_volume = a_volume;
}

double tskCar::get_weight() const
{
    return m_weight;
}

double tskCar::get_volume() const
{
    return m_volume;
}

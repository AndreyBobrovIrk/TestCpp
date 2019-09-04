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

void tskCar::set_weight(double a_value)
{
    m_weight = a_value;
}

double tskCar::get_volume() const
{
    return m_volume;
}

void tskCar::set_volume(double a_value)
{
    m_volume = a_value;
}

#include "pch.h"
#include "tskCar.h"

tskCar::tskCar(double a_max_weight, double a_max_volume)
{
    m_max_weight = a_max_weight;
    m_max_volume = a_max_volume;
}

double tskCar::get_max_weight() const
{
    return m_max_weight;
}

void tskCar::set_max_weight(double a_value)
{
    m_max_weight = a_value;
}

double tskCar::get_max_volume() const
{
    return m_max_volume;
}

void tskCar::set_max_volume(double a_value)
{
    m_max_volume = a_value;
}

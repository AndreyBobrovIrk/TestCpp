#include "pch.h"
#include "tskCargo.h"


tskCargo::tskCargo(double a_weight, double a_volume)
{
    m_weight = a_weight;
    m_volume = a_volume;
}

double tskCargo::get_weight() const
{
    return m_weight;
}

void tskCargo::set_weight(double a_value)
{
    m_weight = a_value;
}

double tskCargo::get_volume() const
{
    return m_volume;
}

void tskCargo::set_volume(double a_value)
{
    m_volume = a_value;
}

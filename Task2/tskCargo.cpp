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

double tskCargo::get_volume() const
{
    return m_volume;
}


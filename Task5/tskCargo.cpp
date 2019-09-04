#include "pch.h"
#include <iostream>

#include "tskCargo.h"

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

void tskCargo::print()
{
    std::cout << "Weight: " << m_weight << "; Volume: " << m_volume << std::endl;
}

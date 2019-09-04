#pragma once

class tskCargo
{
public:
    tskCargo() = delete;
    tskCargo(double a_weight, double a_volume);

    ~tskCargo() = default;

    double get_weight() const;
    double get_volume() const;

private:
    double m_weight = 0;
    double m_volume = 0;
};


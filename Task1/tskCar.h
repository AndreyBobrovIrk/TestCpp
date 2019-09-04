#pragma once

class tskCar
{
public:
    tskCar() = delete;

    tskCar(double a_weight, double a_volume);

    ~tskCar() = default;

    double get_max_weight() const;
    double get_max_volume() const;

private:
    double m_max_weight = 0;
    double m_max_volume = 0;
};

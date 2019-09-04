#pragma once

class tskCar
{
public:
    tskCar() = delete;

    tskCar(double a_weight, double a_volume);

    ~tskCar() = default;

    double get_weight() const;
    double get_volume() const;

private:
    double m_weight = 0;
    double m_volume = 0;
};

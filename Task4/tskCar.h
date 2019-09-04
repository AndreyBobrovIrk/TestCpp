#pragma once

class tskCar
{
public:
    tskCar() = delete;

    tskCar(double a_weight, double a_volume);

    ~tskCar() = default;

    double get_weight() const;
    void set_weight(double a_value);

    double get_volume() const;
    void set_volume(double a_value);


private:
    double m_weight = 0;
    double m_volume = 0;
};

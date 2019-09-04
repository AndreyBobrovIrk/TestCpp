#pragma once

class tskCar
{
public:
    tskCar() = default;
    ~tskCar() = default;

    double get_max_weight() const;
    void set_max_weight(double a_value);

    double get_max_volume() const;
    void set_max_volume(double a_value);

    virtual void print();

private:
    double m_max_weight = 0;
    double m_max_volume = 0;
};

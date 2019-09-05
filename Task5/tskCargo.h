#pragma once

class tskCargo
{
public:
    tskCargo() = default;
    virtual ~tskCargo() = default;

    double get_weight() const;
    void set_weight(double a_value);

    double get_volume() const;
    void set_volume(double a_value);

    virtual void print();

private:
    double m_weight = 0;
    double m_volume = 0;
};


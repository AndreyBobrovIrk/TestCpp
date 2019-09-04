// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

#include "tskCar.h"
#include "tskCargo.h"

template<typename C>
void inc(std::vector<C>& a_list)
{

}

template<>
void inc(std::vector<int>& a_list)
{
    for (int& i : a_list) {
        ++i;
    }
}

template<>
void inc(std::vector<tskCar>& a_list)
{
    for (tskCar& o : a_list) {
        o.set_weight(o.get_weight() + 1);
        o.set_volume(o.get_volume() + 1);
    }
}

template<>
void inc(std::vector<tskCargo>& a_list)
{
    for (tskCargo& o : a_list) {
        o.set_weight(o.get_weight() + 1);
        o.set_volume(o.get_volume() + 1);
    }
}

int main()
{
    std::cout << "Task #4" << std::endl;

    std::vector<int> num_list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    std::vector<tskCar> car_list = {
        tskCar(1, 1),
        tskCar(2, 2),
        tskCar(3, 3),
        tskCar(4, 4),
        tskCar(5, 5)
    };

    std::vector<tskCargo> cargo_list = {
        tskCargo(1, 1),
        tskCargo(2, 2),
        tskCargo(3, 3),
        tskCargo(4, 4),
        tskCargo(5, 5)
    };

    inc<int>(num_list);
    inc<tskCar>(car_list);
    inc<tskCargo>(cargo_list);
}

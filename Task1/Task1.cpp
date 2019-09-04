// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

#include "tskCar.h"

void print_list(const std::vector<tskCar>& a_list)
{
    int n = 0;
    for (auto car : a_list)
    {
        std::cout << " - #" << ++n <<
            " Weight: " << car.get_weight() <<
            " Volume: " << car.get_volume() <<
            std::endl;
    }
}

int main()
{
    std::cout << "Task #1" << std::endl;
    std::vector<tskCar> car_list = { 
        tskCar(10.1, 10.2),
        tskCar(5.6, 5.6),
        tskCar(7, 3),
        tskCar(5, 7),
        tskCar(7, 5),
        tskCar(5.6, 5.6)
    };

    std::cout << "Unsorted list:" << std::endl;
    print_list(car_list);

    std::cout << std::endl;

    std::sort(
        car_list.begin(),
        car_list.end(),
        [](const tskCar& o1, const tskCar& o2) {
            if (o1.get_weight() != o2.get_weight()) return o1.get_weight() > o2.get_weight();
            return o1.get_volume() > o2.get_volume();
        }
    );

    std::cout << "Sorted list:" << std::endl;
    print_list(car_list);
}

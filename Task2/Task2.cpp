// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

#include "tskCar1.h"
#include "tskCar2.h"

void print_list(const std::vector< std::shared_ptr<tskCarBase>>& a_list)
{
    int n = 0;
    for (auto car : a_list)
    {
        std::cout << ++n << ") ";
        car->print();
    }

    std::cout << std::endl;
}

int main()
{
    std::cout << "Task #2" << std::endl;

    std::vector<std::shared_ptr<tskCarBase>> car_list;
    
    car_list.emplace_back(new tskCar1(10.1, 10.2));
    car_list.emplace_back(new tskCar2(9));
    car_list.emplace_back(new tskCar1(7, 5));
    car_list.emplace_back(new tskCar2(5));
    car_list.emplace_back(new tskCar1(7, 3));
    car_list.emplace_back(new tskCar2(5.6));

    std::cout << "Unfiltered list:" << std::endl;
    print_list(car_list);
    tskCargo cargo(6, 4);

    std::cout << "Cargo:" << " Max weight: " << cargo.get_weight() << "; Max volume: " << cargo.get_volume() << std::endl;
    std::cout << std::endl;

    auto new_end = std::remove_if(
        car_list.begin(),
        car_list.end(),
        [&cargo](std::shared_ptr<tskCarBase> o) { return !o->CheckCargo(cargo); }
    );

    car_list.erase(new_end, car_list.end());

    std::cout << "Filtered list:" << std::endl;
    print_list(car_list);
}

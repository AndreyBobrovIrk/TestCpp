// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "tskNamedObject.h"
#include "tskCar.h"
#include "tskCargo.h"

int main()
{
    std::cout << "Task #5" << std::endl;

    tskNamedObject<tskCar> car;
    car.set_max_weight(10);
    car.set_max_volume(20);

    tskNamedObject<tskCargo> cargo;
    cargo.set_weight(15);
    cargo.set_volume(22);

    car.print();
    cargo.print();

    std::cout << std::endl;
}

#include "pch.h"
#include <iostream>
#include "tskNamedObject.h"
#include "tskCar.h"
#include "tskCargo.h"

template<>
const char* tskNamedObject<tskCar>::s_name = "Car with name";

template<>
const char* tskNamedObject<tskCargo>::s_name = "Cargo with name";

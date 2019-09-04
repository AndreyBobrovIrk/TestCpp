// Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

void print_list(const std::vector<int>& a_list)
{
    for (auto o : a_list) {
        std::cout << o << ", ";
    }
}

void inc(std::vector<int>::iterator a_val, std::vector<int>::iterator a_end)
{
    if (a_val == a_end) return;

    ++(*a_val);
    ++(a_val);
    inc(a_val, a_end);
}

int main()
{
    std::cout << "Task #3" << std::endl;
    std::vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "Base list: ";
    print_list(list);
    std::cout << std::endl;

    inc(list.begin(), list.end());

    std::cout << "Processed list: ";
    print_list(list);
    std::cout << std::endl;
}

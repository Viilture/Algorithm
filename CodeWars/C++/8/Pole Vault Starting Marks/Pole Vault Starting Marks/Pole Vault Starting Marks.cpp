// Pole Vault Starting Marks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

double startingMark(double bodyHeight)
{
    return 8.27 + (4 * (bodyHeight-1.27 - 0.05));
}

int main()
{
    std::cout << startingMark(1.52) << std::endl;
    std::cout << startingMark(1.83) << std::endl;
    std::cout << startingMark(1.22) << std::endl;
    std::cout << startingMark(2.13) << std::endl;
}

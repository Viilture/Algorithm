// What's the real floor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int getRealFloor(int f)
{

    return f > 13 ? f - 2 : f > 1 ? f - 1 : f < 0 ? f : 0;
}

int main()
{
    std::cout << getRealFloor(1) << std::endl;
    std::cout << getRealFloor(5) << std::endl;
    std::cout << getRealFloor(15) << std::endl;
}


// Grasshopper - Check for factor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


bool checkForFactor(int base, int factor) {
   
    return base % factor == 0;
}

int main()
{
    std::cout << checkForFactor(2453, 5);
}

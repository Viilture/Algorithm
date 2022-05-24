// Find the Integral.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string integrate( int coefficient,  int exponent) 
{   
    return std::to_string(coefficient / (exponent + 1)) + "x^" + std::to_string(exponent + 1);;
}

int main()
{
    std::cout << integrate(3, 2) << std::endl;
    std::cout << integrate(12, 5) << std::endl;
    std::cout << integrate(20, 1) << std::endl;
    std::cout << integrate(40, 3) << std::endl;
    std::cout << integrate(90, 2) << std::endl;
}


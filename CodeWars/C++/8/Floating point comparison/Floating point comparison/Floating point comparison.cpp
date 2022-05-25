// Floating point comparison.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) 
{
    return std::abs(a-b)>0.001?false:true;
}

int main()
{
    std::cout << approx_equals(175.9827, 82.25) << std::endl;
    std::cout << approx_equals(-156.24037, -156.24038) << std::endl;
    std::cout << approx_equals(123.2345, 123.234501) << std::endl;
    std::cout << approx_equals(1456.3652, 1456.3641) << std::endl;
    std::cout << approx_equals(-1.234, -1.233999) << std::endl;
    std::cout << approx_equals(98.7655, 98.7654999) << std::endl;
    std::cout << approx_equals(-7.28495, -7.28596) << std::endl;
}


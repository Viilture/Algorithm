// Is it even.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

bool is_even(double n)
{
    return std::fmod(n,2)==0;
}

int main()
{
    std::cout << is_even(0.5);;
}


// The falling speed of petals.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

double SakuraFall(double v)
{
    return v>0?400 / v:0;
}

int main()
{
    std::cout << SakuraFall(5);
}

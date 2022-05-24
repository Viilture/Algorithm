// The 'if' function.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <functional>



bool ran_expected;
void Expected() { ran_expected = true; }
void Unexpected() { ran_expected = false; }

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
    value ? func1() : func2();
}

int main()
{
    _if(true, Expected, Unexpected);

    std::cout << ran_expected;
}


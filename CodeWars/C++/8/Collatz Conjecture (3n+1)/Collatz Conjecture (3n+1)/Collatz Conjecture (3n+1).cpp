// Collatz Conjecture (3n+1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

unsigned int hotpo(unsigned int n)
{
    int out = 0;
    while (n != 1)
    {
        ++out;
        n%2==0?n=n/2:n=3*n+1;
    }

    return out;
}

int main()
{
    std::cout << hotpo(1) << std::endl;
    std::cout << hotpo(5) << std::endl;
    std::cout << hotpo(6) << std::endl;
    std::cout << hotpo(23) << std::endl;
}

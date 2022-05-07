// Wilson primes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

long double factorial(long double n)
{
    return n > 1 ? n * factorial(n - 1) : 1;
}

bool amIWilson(long double n)
{
    

    return std::fmod(((factorial(n-1)+1)/n*n),2);
}

int main()
{
    std::cout << amIWilson(2);
    //std::cout << factorial(17);
}


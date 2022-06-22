// Find the next perfect square.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>

long long findNextSquare(long long sq)
{
    long double sqr = sqrtl(sq);
    std::cout << sqr * sqr <<"  " << sq << "  ";
    if ((sqr * sqr) == (nearbyintl(sqr) * nearbyintl(sqr)))
    {
        return (static_cast<long long>(sqr) + 1) * (static_cast<long long>(sqr) + 1);
    }
    return -1;
}

int main()
{
    std::cout << findNextSquare(121) << std::endl;
    std::cout << findNextSquare(625) << std::endl;
    std::cout << findNextSquare(319225) << std::endl;
    std::cout << findNextSquare(15241383936) << std::endl;
    std::cout << findNextSquare(155) << std::endl;
}


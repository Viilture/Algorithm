// Pythagorean Triple.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

bool PythagoreanTriple(const int a, const int b, const int c)
{
    return (a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b)?true:false;
}

int main()
{
    std::cout << PythagoreanTriple(3, 4, 5) << std::endl;
    std::cout << PythagoreanTriple(5, 3, 4) << std::endl;
    std::cout << PythagoreanTriple(3, 5, 9) << std::endl;
    std::cout << PythagoreanTriple(5, 2, 4) << std::endl;
}
// Terminal game combat function.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int combat(int health, int damage) 
{
    return health > damage ? health - damage : 0;
}

int main()
{
    std::cout << combat(100, 5) << std::endl;
    std::cout << combat(83, 16) << std::endl;
    std::cout << combat(20, 30) << std::endl;
}


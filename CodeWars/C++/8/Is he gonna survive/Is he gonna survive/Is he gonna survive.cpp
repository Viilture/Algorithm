// Is he gonna survive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

bool hero(int bullets, int dragons) {
    return (bullets >= dragons+dragons) ? true : false;
}

int main()
{
    std::cout << hero(9,5);
}

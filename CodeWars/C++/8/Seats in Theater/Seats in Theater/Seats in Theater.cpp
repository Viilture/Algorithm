// Seats in Theater.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int seats_in_theater(int total_col, int total_row, int col, int row)
{
    return (total_col+1- col)*(total_row-row);
}

int main()
{
    std::cout << seats_in_theater(16, 11, 5, 3) << std::endl;
    std::cout << seats_in_theater(1, 1, 1, 1) << std::endl;
    std::cout << seats_in_theater(13, 6, 8, 3) << std::endl;
    std::cout << seats_in_theater(60, 100, 60, 1) << std::endl;
    std::cout << seats_in_theater(1000, 1000, 1000, 1000) << std::endl;
}



// Grasshopper - Grade book.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


char getGrade(int a, int b, int c) {
    int middle_ball = (a + b + c) / 3;

    switch (middle_ball)
    {
    case 90 ... 100: return 'A';
    }


}

int main()
{
    std::cout << getGrade(70, 70, 100);
}

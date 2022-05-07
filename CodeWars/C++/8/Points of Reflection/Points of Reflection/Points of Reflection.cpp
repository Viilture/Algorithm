﻿// Points of Reflection.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include <utility>

std::pair<int, int> symmetricPoint(const std::pair<int, int>& p,
    const std::pair<int, int>& q)
{
int a = (p.first > q.first) ? (q.first - (p.first - q.first)) : (q.first + (q.first - p.first));
int b = (p.second > q.second) ? (q.second - (p.second - q.second)) : (q.second + (q.second - p.second));

    return { a, b};
}

int main()
{
    std::pair<int, int> out = symmetricPoint({ 1, -35 }, { -12, 1 });
    std::cout << out.first << " " << out.second;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

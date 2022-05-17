// Find numbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include <vector>
#include <algorithm>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{   
    std::vector<int> out;

    for (auto i : numbers)
    {
        if (i % divisor == 0)
        {
            out.push_back(i);

        }
    }

    return out;
}

std::vector<int> divisible_by2(std::vector<int> numbers, int divisor)
{
   
    std::remove_if(numbers.begin(), numbers.end(), 
        [divisor](int n) {return n % divisor; });

    return numbers;
}

int main()
{
    for ( auto i:divisible_by2({ 1, 2, 3, 4, 5, 6 }, 2))
    {
        std::cout << i << " ";;
    }
    std::cout << std::endl;
    for (auto i : divisible_by2({ 1, 2, 3, 4, 5, 6 }, 3))
    {
        std::cout << i << " ";;
    }
    std::cout << std::endl;
    for (auto i : divisible_by2({ 0, 1, 2, 3, 4, 5, 6 }, 4))
    {
        std::cout << i << " ";;
    }
    std::cout << std::endl;
    for (auto i : divisible_by2({ 0 }, 4))
    {
        std::cout << i << " ";;
    }
    std::cout << std::endl;
    for (auto i : divisible_by2({ 1, 3, 5 }, 2))
    {
        std::cout << i << " ";;
    }
    std::cout << std::endl;
    for (auto i : divisible_by2({ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 1))
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

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

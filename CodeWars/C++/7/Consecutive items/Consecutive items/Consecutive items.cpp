// Consecutive items.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

bool consecutive(std::vector<int>arr, int a, int b)
{   
    bool out = false;
    int in1=0, in2 = 0;
    std::vector <int> ::iterator it;
    for (it=arr.begin(); it<arr.end()-1; ++it)
    {   
        in1 = *it; in2 = *(it + 1);
        out = (*it == a) ? (*(it+1) == b ? true : false)
            : (*it == b) ? (*(it+1) == a ? true : false):false;
        if (out)
            return true;
      
    }

    return out;
}

bool consecutive2(std::vector<int>arr, int a, int b)
{
    return std::abs(std::find(arr.begin(),arr.end(),a)- std::find(arr.begin(), arr.end(), b))==1;
}

int main()
{
    std::cout << consecutive2({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 2, 8) << std::endl;
    std::cout << consecutive2({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 2, 3) << std::endl;
    std::cout << consecutive2({ 1, 4, 5, 3, 2, 7, 6, 23, 76, 11, 0 }, 2, 3) << std::endl;
    std::cout << consecutive2({ 1, -4, -5, 3, -2, 11, 23, -76, 6, -7, 2 }, 2, 3) << std::endl;
    std::cout << consecutive2({ 1, 2, 3, 4, 5 }, 1, 5) << std::endl;
    std::cout << consecutive2({ 1, 2, 3, 4, 5 }, 5, 1) << std::endl;
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

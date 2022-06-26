// Cesrd Strings.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

std::string uncensor(std::string infected,
    std::string discovered) 
{
    for (auto &i : infected)
    {
        if (i == '*')
        {
            i = discovered.at(0);
            discovered.erase(0,1);
        }           
    }
    return infected;
}

std::string uncensor2(std::string infected,
    std::string discovered)
{
    std::string out;
    
    std::transform(infected.cbegin(), infected.cend(),
        )

}


int main()
{
    std::cout << uncensor("*h*s *s v*ry *tr*ng*", "Tiiesae") << std::endl;

    std::cout << uncensor("A**Z*N*", "MAIG") << std::endl;

    std::cout << uncensor("xyz", "") << std::endl;

    std::cout << uncensor("", "") << std::endl;

    std::cout << uncensor("***", "abc") << std::endl;
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

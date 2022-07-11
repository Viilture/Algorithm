// Char Code Calculation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
int calc(const std::string& x) 
{
    return std::accumulate(x.begin(), x.end(), 0, [](int sum, int x) 
        {   
            int out=0;
            for (auto it:std::to_string(x))
            {
                if (it == '7')
                {
                    out += 6;
                }

            }
    return  sum+out; 
        });
}

int main()
{
    std::cout << calc("ABC") << std::endl;
    std::cout << calc("AFHJD") << std::endl;
    std::cout << calc("FVJFVDF") << std::endl;
    std::cout << calc("AOUCUAOF") << std::endl;
    std::cout << calc("abcdef") << std::endl;
    std::cout << calc("ifkhchlhfd") << std::endl;
    std::cout << calc("aaaaaddddr") << std::endl;
    std::cout << calc("jfmgklf8hglbe") << std::endl;
    std::cout << calc("jaam") << std::endl;
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

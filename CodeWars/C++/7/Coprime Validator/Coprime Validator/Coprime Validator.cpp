// Coprime Validator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <numeric>

template <class T>
T NOD1(T in1, T in2)
{
    if (in1 % in2 == 0)         return in2;
    else if (in2 % in1 == 0)    return in1;
    else if (in1 > in2)         return  NOD1(in1 % in2, in2);
    else                        return  NOD1(in1, in2 % in1);
}

template <class T>
T NOD2(T in1, T in2)
{   
    T out;
    while ((in1 > in2 ? in1 % in2: in2 % in1) != 0)
    {
        in1 > in2 ? in1 = in1 % in2 : in2 = in2 % in1;
    }
    return in1 > in2 ? in2 : in1;
}

bool are_coprime(unsigned int a, unsigned int b) 
{
    return gcd(a, b)==1;
}


int main()
{
    std::cout << are_coprime(20, 27) << std::endl;
    std::cout << are_coprime(12, 39) << std::endl;
    std::cout << are_coprime(17, 34) << std::endl;
    std::cout << are_coprime(34, 17) << std::endl;
    std::cout << are_coprime(35, 10) << std::endl;
    std::cout << are_coprime(64, 27) << std::endl;
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

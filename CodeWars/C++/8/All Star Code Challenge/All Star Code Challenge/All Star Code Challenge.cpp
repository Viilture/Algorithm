// All Star Code Challenge.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include <string>
#include <numeric>

unsigned int strCount(std::string word, char letter)
{
    return std::accumulate(word.begin(), word.end(), 0, 
        [letter](int start, char it) 
    {return it == letter ? start += 1 : start; });
}

unsigned int strCount2(std::string word, char letter)
{
    return std::count(word.begin(), word.end(), letter);
}

int main()
{
    std::cout << strCount2("Hello", 'o') << std::endl;
    std::cout << strCount2("Hello", 'l') << std::endl;
    std::cout << strCount2("Hello", 'q') << std::endl;
    std::cout << strCount2("Pippi", 'p') << std::endl;
    std::cout << strCount2("", 'l') << std::endl;
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

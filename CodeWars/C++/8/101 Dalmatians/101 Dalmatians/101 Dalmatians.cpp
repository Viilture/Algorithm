// 101 Dalmatians.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

std::string howManyDalmatians(int number)
{
    std::vector<std::string> dogs{ "Hardly any", "More than a handful!","Woah that's a lot of dogs!", "101 DALMATIONS!!!" };
    return number <= 10 ? dogs[0] : number <= 50 ? dogs[1] : number == 101 ? dogs[3]:dogs[2];
}

int main()
{

    std::cout << howManyDalmatians(26) << std::endl;
    std::cout << howManyDalmatians(8) << std::endl;
    std::cout << howManyDalmatians(14) << std::endl;
    std::cout << howManyDalmatians(80) << std::endl;
    std::cout << howManyDalmatians(100) << std::endl;
    std::cout << howManyDalmatians(50) << std::endl;
    std::cout << howManyDalmatians(10) << std::endl;
    std::cout << howManyDalmatians(101) << std::endl;
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

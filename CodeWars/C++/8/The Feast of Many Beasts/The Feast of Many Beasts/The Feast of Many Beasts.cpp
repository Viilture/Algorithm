// The Feast of Many Beasts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include <string>

bool feast(std::string beast, std::string dish) 
{

    return beast.back() == dish.back() && beast.front() == dish.front()
        ? true : false;
}

int main()
{
    std::cout << feast("great blue heron", "garlic naan") << std::endl;
    std::cout << feast("chickadee", "chocolate cake") << std::endl;
    std::cout << feast("brown bear", "bear claw") << std::endl;
    std::cout << feast("marmot", "mulberry tart") << std::endl;
    std::cout << feast("porcupine", "pie") << std::endl;
    std::cout << feast("electric eel", "lasagna") << std::endl;
    std::cout << feast("slow loris", "salsas") << std::endl;
    std::cout << feast("ox", "orange lox") << std::endl;
    std::cout << feast("blue-footed booby", "blueberry") << std::endl;
    std::cout << feast("blue-footed booby", "binary human") << std::endl;
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

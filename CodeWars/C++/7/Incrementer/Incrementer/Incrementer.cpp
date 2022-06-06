// Incrementer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

std::vector<int> incrementer(std::vector<int> nums) 
{
    for (int i = 0; i < nums.size(); ++i)
    {
        nums[i] += i+1;
        
        while (nums[i] >= 10)
        {
            nums[i] = nums[i] % 10;
        }
    }
    return nums;
}

int main()
{
    std::vector<int> nums = {};

    for (auto i : incrementer(nums))
    {
        std::cout << i << std::endl;
    }
    nums = { 1,2,3 };

    std::cout << std::endl;
    for (auto i : incrementer(nums))
    {
        std::cout << i << std::endl;
    }
    nums = { 4, 6, 7, 1, 3 };
    std::cout << std::endl;
    for (auto i : incrementer(nums))
    {
        std::cout << i << std::endl;
    }
    nums = { 3, 6, 9, 8, 9 };
    std::cout << std::endl;
    for (auto i : incrementer(nums))
    {
        std::cout << i << std::endl;
    }
    nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 8 };
    std::cout << std::endl;
    for (auto i : incrementer(nums))
    {
        std::cout << i << std::endl;
    }
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

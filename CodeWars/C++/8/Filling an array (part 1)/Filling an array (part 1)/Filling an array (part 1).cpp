// Filling an array (part 1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>

std::vector<int> arr1(int n = 0)
{
    std::vector<int> out;

    for (int i = 0; i < n; ++i)
    {
        out.push_back(i);
    }
    return out;
}

std::vector<int> arr2(int n = 0)
{
    std::vector<int> out(n);

    std::iota(out.begin(), out.end(),0);

    return out;
}

int main()
{

    for (auto i : arr1())
    {
        std::cout << i << std::endl;
    }

    for (auto i : arr1(4))
    {
        std::cout << i << std::endl;
    }
    for (auto i : arr2(7))
    {
        std::cout << i << std::endl;
    }

}


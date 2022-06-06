// Minimize Sum Of Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include <vector>
#include <algorithm>

int minSum(std::vector<int>passed)
{
    std::sort(passed.begin(),passed.end());
    int out = 0;
    for (int i = 0; i < (passed.size()/2); ++i)
    {
        out += (passed[i]* passed[passed.size()-1-i]);
    }

    return out;
}

int main()
{
    std::cout << minSum({ 5,4,2,3 }) << std::endl;
    std::cout << minSum({ 12,6,10,26,3,24 }) << std::endl;
    std::cout << minSum({ 9,2,8,7,5,4,0,6 }) << std::endl;
}

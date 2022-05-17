// Reduce but Grow.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>


int grow(std::vector<int> nums) {
    int out=1;

    for (auto i : nums)
    {
        out *= i;
    }

    return out;
}

int grow2(std::vector<int> nums) 
{
    int out = std::accumulate(nums.begin(), nums.end(), 1, 
        std::multiplies<int>());

    return out;
}

int main()
{   

    std::cout << grow2({ 1, 2, 3 }) << std::endl;
    std::cout << grow2({ 4, 1, 1, 1, 4 }) << std::endl;
    std::cout << grow2({ 2, 2, 2, 2, 2, 2 }) << std::endl;
}

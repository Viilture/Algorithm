// Sum of differences in array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>

int sumOfDifferences1(const std::vector<int>& arr) 
{   
    if (!arr.empty())
    {
        auto max = std::max_element(arr.begin(), arr.end());
        auto min = std::min_element(arr.begin(), arr.end());
        return *max - *min;
    }
    else return 0;
}

int sumOfDifferences2(const std::vector<int>& arr)
{
    if (!arr.empty())
    {
        auto it = std::minmax_element(arr.begin(), arr.end());

        return *it.second - *it.first;

    }
    else return 0;
}

int main()
{
    
    std::cout << sumOfDifferences1({ 1,2,10 }) << std::endl;
    std::cout << sumOfDifferences1({ -3,-2,-1 }) << std::endl;
    std::cout << sumOfDifferences1({ 1,1,1,1 }) << std::endl;
    std::cout << sumOfDifferences1({ -17,17 }) << std::endl;
    std::cout << sumOfDifferences1({}) << std::endl;
    std::cout << sumOfDifferences1({ -1 }) << std::endl;
    std::cout << sumOfDifferences1({ 1 }) << std::endl;

    std::cout << sumOfDifferences2({ 1,2,10 }) << std::endl;
    std::cout << sumOfDifferences2({ -3,-2,-1 }) << std::endl;
    std::cout << sumOfDifferences2({ 1,1,1,1 }) << std::endl;
    std::cout << sumOfDifferences2({ -17,17 }) << std::endl;
    std::cout << sumOfDifferences2({}) << std::endl;
    std::cout << sumOfDifferences2({ -1 }) << std::endl;
    std::cout << sumOfDifferences2({ 1 }) << std::endl;
}

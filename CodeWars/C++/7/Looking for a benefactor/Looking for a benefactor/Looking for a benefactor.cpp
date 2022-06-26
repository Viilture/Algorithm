// Looking for a benefactor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>
#include <stdexcept>

class NewAverage
{
public:
    static long long newAvg(std::vector<double>& arr, double navg)
    {
        long double mid = std::accumulate(arr.begin(),arr.end(),0)/arr.size();
        std::cout << mid << " " << navg << std::endl;
        if (mid > navg)
        {
        
        }
        else
        {
            return navg * (arr.size() + 1) - std::accumulate(arr.begin(), arr.end(), 0);
        }

    }
};


int main()
{
    std::cout << "Hello World!\n";

    std::vector<double> arr1 = { 14.0, 30.0, 5.0, 7.0, 9.0, 11.0, 16.0 };
    std::cout << NewAverage::newAvg(arr1, 90) << std::endl;

    std::vector<double> arr2 = { 14, 30, 5, 7, 9, 11, 15 };
    std::cout << NewAverage::newAvg(arr2, 92) << std::endl;

    std::vector<double> arr3 = { 14, 30, 5, 7, 9, 11, 15 };
    std::cout << NewAverage::newAvg(arr3, 2) << std::endl;
}
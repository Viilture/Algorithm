// Sum without highest and lowest number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int sum(vector<int> numbers)
{
    if (numbers.size() > 2)
    {
        std::sort(numbers.begin(), numbers.end());
        return std::accumulate(numbers.begin() + 1, numbers.end() - 1, 0);
    }
    else return 0;
}

int main()
{
    std::cout << sum({ 6, 2, 1, 8, 10 }) << std::endl;
    std::cout << sum({ 1, 1, 11, 2, 3 }) << std::endl;
}

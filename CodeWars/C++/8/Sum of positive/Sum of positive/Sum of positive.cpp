// Sum of positive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>

int positive_sum(const std::vector<int> arr) {

    int out = std::accumulate(arr.begin(), arr.end(), 0, [](int in, int i) {return i > 0 ? in + i : in; });
    return out;
}


int main()
{
    
    std::cout << positive_sum({ 1,2,3,4,5 });
}


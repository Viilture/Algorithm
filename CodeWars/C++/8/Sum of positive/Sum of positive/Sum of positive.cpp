// Sum of positive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>

int positive_sum(const std::vector<int> arr) {

    int out = std::accumulate(arr.begin(), arr.end(), 0, [](int start_count, int iterator_arr) {return iterator_arr > 0 ? start_count + iterator_arr : iterator_arr; });
    return out;
}


int main()
{
    
    std::cout << positive_sum({ 1,2,3,4,5 });
}


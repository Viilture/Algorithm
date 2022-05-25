// Find the Missing Number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int missingNo(vector<int> arr) 
{
    return 5050-std::accumulate(arr.begin(), arr.end(), 0);
}

int main()
{
    vector<int> in(101);
    std:iota(in.begin(), in.end(), 0);
    std::cout << missingNo(in);
}

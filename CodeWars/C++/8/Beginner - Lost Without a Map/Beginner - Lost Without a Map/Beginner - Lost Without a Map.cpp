// Beginner - Lost Without a Map.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maps(const std::vector<int>& values) {

    std::vector<int> out(values.size());

    std::generate(out.begin(), out.end(), [n = 0 ](const std::vector<int>& values) {return values[n];  });

        return out;
}

int main()
{
    std::cout << "Hello World!\n";
}



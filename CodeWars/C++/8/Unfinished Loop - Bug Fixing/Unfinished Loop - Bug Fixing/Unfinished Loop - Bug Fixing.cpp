// Unfinished Loop - Bug Fixing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

std::vector<int> createVector(const int n)
{
	std::vector<int> res;

	for (int i = 1; i <= n; ++i)
	{
		res.push_back(i);
	}

	return res;
}

int main()
{
    std::cout << "Hello World!\n";
}

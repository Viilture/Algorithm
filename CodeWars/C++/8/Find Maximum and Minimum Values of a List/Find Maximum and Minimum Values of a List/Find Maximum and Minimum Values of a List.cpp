// Find Maximum and Minimum Values of a List.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min(vector<int> list) {

    return *min_element(list.begin(),list.end());
}

int max(vector<int> list) {

    return *max_element(list.begin(), list.end());;
}


int main()
{

}


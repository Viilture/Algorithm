// Thinkful.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <map>


std::string update_light(std::string current) 
{
    std::map <std::string, std::string> map{ {"green", "yellow"}, {"yellow", "red"}, {"red", "green"} };

    return map[current];
}

int main()
{
    std::cout << update_light("green");
}



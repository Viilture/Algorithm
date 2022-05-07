// ALTERNATING CASE.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cctype>


std::string to_alternating_case(const std::string& str)
{
    std::string out;

    for (auto i : str)
    {
        if (std::islower(i))
            out.push_back(std::toupper(i));
        else if (std::isupper(i))
            out.push_back(std::tolower(i));
        else
            out.push_back(i);
    }
    return out;
}

int main()
{
    std::cout << to_alternating_case("1a2b3c4d5e");
}


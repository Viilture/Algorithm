// Is the string uppercase.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cctype>
#include <string>

bool is_uppercase(const std::string& s) {

    for (auto i : s)
    {
        if (std::islower(i)) return false;

    }
    return true; // TODO
}

int main()
{
    std::cout << is_uppercase("c") << std::endl;
    std::cout << is_uppercase("C") << std::endl;
    std::cout << is_uppercase("hello I AM DONALD") << std::endl;
    std::cout << is_uppercase("HELLO I AM DONALD") << std::endl;
    std::cout << is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") << std::endl;
    std::cout << is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") << std::endl;
}


// Adding Big Numbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iterator>

std::string add(const std::string& a, const std::string& b)
{
   return ((!a.empty()) && (!b.empty()))
       ?std::to_string(stoll(a) + stoll(b))
       :a.empty() ?b :a;
}

int main()
{
    std::cout << add("123", "456") << std::endl;
    std::cout << add("0", "0") << std::endl;
    std::cout << add("99", "2") << std::endl;
    std::cout << add("10", "35679") << std::endl;
    std::cout << add("", "5") << std::endl;
    std::cout << add("192", "") << std::endl;
    std::cout << add("99945546646", "1111") << std::endl;
}

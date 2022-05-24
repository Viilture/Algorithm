// Exclamation marks series.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <regex>

using namespace std;

string replace1(string s)
{
    for (auto& i : s)
    {
        if ((i == 'a') || (i == 'e') || (i == 'i') || (i == 'o') || (i == 'u') || (i == 'y') || (i == 'A') || (i == 'E') || (i == 'I') || (i == 'O') || (i == 'U') || (i == 'Y'))
        {
            i = '!';
        }
    }
    return s; //coding and coding....
}

string replace2(const string& s)
{
    return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}

int main()
{
    std::cout << replace1("Hi!") << std::endl;
    std::cout << replace1("!Hi! Hi!") << std::endl;
    std::cout << replace1("aeiou") << std::endl;
    std::cout << replace1("ABCDE") << std::endl;
}

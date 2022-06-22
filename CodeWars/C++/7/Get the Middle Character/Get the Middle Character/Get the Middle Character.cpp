// Get the Middle Character.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string get_middle2(std::string in)
{   
    //Если в строке четное числа символов, то вернем 2 символа из середины, в противном случае вернем средний символ
    return (in.size() % 2 == 0) ? in.substr(in.size() / 2 - 1, 2) : in.substr(in.size() / 2, 1);                           
}

std::string get_middle(std::string input)
{   
    std::string out;
    if (input.empty())
    {
        return out;
    }
    
    if (input.size() % 2 == 0)
    {
        out.push_back(input[input.size()/2-1]);
        out.push_back(input[input.size()/2]);
    }
    else
    {
        out.push_back(input[input.size()/2]);
    }
    return out;
}

int main()
{
    std::cout << get_middle2("test") << std::endl;
    std::cout << get_middle2("tesring") << std::endl;
}

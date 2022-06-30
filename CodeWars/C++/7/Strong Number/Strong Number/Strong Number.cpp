// Strong Number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

long long fact(long long in)
{
    long long out=in;
    while (--in)
    {
        out *= in;
    }
    return out;
}

long long sum_num(long long in)
{
    long long out =0;

    while (in > 9)
    {
        out += fact(in % 10);
        in = in / 10;
    }
    out += fact(in);
    return out;

}

std::string strong_num(int number)
{   

    return sum_num(number)== number? "STRONG!!!!" : "Not Strong !!";
}

int main()
{       
        std::cout << strong_num(1) << std::endl;
        std::cout << strong_num(2) << std::endl;
        std::cout << strong_num(145) << std::endl;
        std::cout << strong_num(7) << std::endl;
        std::cout << strong_num(93) << std::endl;
        std::cout << strong_num(185) << std::endl;
}


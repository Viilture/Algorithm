// Going to the cinema.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

class Movie
{
public:
    static int movie(int card, int ticket, double perc)
    {
        int state = true;
        int sum1 = 0;
        int sum2 = 0;
        int out = 0;


        for(int i=1;state;++i)
        {
            sum1 = i * ticket;
            ticket += ticket * perc;

            sum2 = card + ticket;
            if (sum1 > sum2)
            {
                state = false;
                out = i;
            }
        }

        return out;
    }

};


int main()
{
    std::cout << Movie::movie(500, 15, 0.9) << std::endl;
    std::cout << Movie::movie(100, 10, 0.95) << std::endl;
}


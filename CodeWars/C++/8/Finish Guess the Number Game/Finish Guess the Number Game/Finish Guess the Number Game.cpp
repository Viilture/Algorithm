// Finish Guess the Number Game.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdexcept>

class Guesser
{
public:
    Guesser(int number, int lives)
        : number(number), lives(lives)
    { }
    bool guess(int n)
    {
        if ((number == n) && (lives > 0))
        {
            return true;
        }
        else if ((number != n) && ((lives > 0)))
        {
            --lives;
            return false;

        }
        else
        {
            cerr();
        }
        return false;
    }
private:
    int number = 0, lives = 0;
};

int main()
{
    std::cout << "Hello World!\n";
}

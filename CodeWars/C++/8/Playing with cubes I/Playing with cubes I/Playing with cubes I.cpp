// Playing with cubes I.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

class Cube
{
public:
    int GetSide() { return s;};
    void SetSide(int in) { s = in;};
private:
    int s=0;
};

int main()
{
    Cube c;
    std::cout << c.GetSide() << std::endl;
    c.SetSide(10);
    std::cout << c.GetSide() << std::endl;
}


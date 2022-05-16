// Opposite number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


class INT 
{
    int int_INT = 0;
public:
    INT(int in) :int_INT(in)
    {}

    int get() { return int_INT; }
    void set(int in) {int_INT = in; }
    private:

    friend INT operator+ (INT in1, INT in2)
    {
        return in1.get() + in2.get();
    }
    friend INT operator- (INT in1, INT in2)
    {
        return in1.get() - in2.get();
    }
    friend INT operator* (INT in1, INT in2)
    {
        return in1.get() * in2.get();
    }
    friend INT operator/ (INT in1, INT in2)
    {
        return in1.get() / in2.get();
    }

    friend INT operator^ (INT in1, INT in2)
    {
        int in3 = in1.get();
        int in4 = in2.get();

        for (int i = 1; i < in4; ++i)
        {
            in3 *= in1.get();
        }
        return in3;
    }


};

int opposite(int number)
{
    INT h1(-1);
    INT h2(10000001);
    INT h3 = h1 ^ h2;
    return number*h3.get() ;
}

int main()
{
    std::cout << opposite(-178);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

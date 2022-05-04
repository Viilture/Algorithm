// Value_of_x.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;
/*
int solve(const std::string& eq)
{
    int x = 0;

    int Operator = 0;
    int Operator2 = 0;
    std::string str,in=eq;

    for (int i = 0; i < in.size(); ++i)
    {


        if (in[i] == ' ' || in[i] == 'x') continue;//Если это пробел, то он нам не нужен

        if (in[i] == '+') { Operator = 1; continue; }
        if (in[i] == '-') { Operator = 2; continue; }
        if (in[i] == '=') { Operator2 = 3; continue; }
       
        
        if (in[i] > 0x29 && in[i] < 0x3A)
        {
            
            
            switch (Operator)
            {
            case 1:
                str.push_back(in[i]);

                if (in[i+1] != ' ')
                    str.push_back(in[i+1]);
                x -= std::stoi(str.c_str());

                Operator = 0;
                Operator2 = 0;
                str.clear();
                break;
            case 2:
                str.push_back(in[i]);

                if (in[i + 1] != ' ')
                    str.push_back(in[i + 1]);
                x += std::stoi(str.c_str());

                Operator = 0;
                Operator2 = 0;
                str.clear();
                break;
            case 3:

                str.push_back(in[i]);

                if (in[i + 1] != ' ')
                    str.push_back(in[i + 1]);
                x += std::stoi(str.c_str());

                Operator = 0;
                Operator2 = 0;
                str.clear();
                break;
            default:

                Operator = 0;
                Operator2 = 0;
                break;
            }
              
        }
        
       
    }

    return x;
}
*/

bool betterThanAverage(std::vector<int> classPoints, int yourPoints=5) {



    return (yourPoints > (std::accumulate(classPoints.begin(), classPoints.end(), 1))) ? 1 : 0;
    // your code here
}

int main()
{
    std::vector<int> a = { 3,45,51,124,1,66,1 };

    betterThanAverage(a);
    
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

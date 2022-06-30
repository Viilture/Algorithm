// Rotate for a Max.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
class MaxRotate
{
public:
    static long long maxRot(long long n)
    {   
        std::string str = std::to_string(n);
        std::vector<long long> out;
        std::cout << str << std::endl;
        out.push_back(std::stoll(str));
        //Возьмите число: 56789. Поверните влево, вы получите 67895.
        std::swap(str[0], str[str.size()-1]);
        std::cout << str << std::endl;
        out.push_back(std::stoll(str));
        //Оставьте первую цифру на месте и поверните влево остальные цифры: 68957.
        std::swap_ranges(str.begin()+2, str.end(), str.begin() + 1);
        std::cout << str << std::endl;
        out.push_back(std::stoll(str));
        //Оставьте первые две цифры на месте, а остальные поменяйте местами: 68579.
        std::swap_ranges(str.begin() + 3, str.end(), str.begin() + 2);
        std::cout << str << std::endl;
        out.push_back(std::stoll(str));
        //Сохраните первые три цифры и поверните влево остальные: 68597. 
        std::swap_ranges(str.begin() + 4, str.end(), str.begin() + 3);
        std::cout << str << std::endl;
        out.push_back(std::stoll(str));

        std::sort(out.begin(), out.end());
        
        return out[1];
    }
};


int main()
{
    std::cout << MaxRotate::maxRot(38458215) << std::endl;
    std::cout << MaxRotate::maxRot(195881031) << std::endl;
    std::cout << MaxRotate::maxRot(896219342) << std::endl;
    std::cout << MaxRotate::maxRot(69418307) << std::endl;
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

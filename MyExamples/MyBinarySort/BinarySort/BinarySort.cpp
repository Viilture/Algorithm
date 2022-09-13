// BinarySort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <vector>

//Рекурсивный вариант бинарной сортировки
long long RecBinarySort(std::vector<long long> a, const long long& searchNum)
{   
    //Если массив пустой или искомый индекс отрицателен уходим
    if (a.size() <= 0 || searchNum < 0) return 1;

    //Если центральный элемент равен искомому, то мы нашли то, что искали
    if (a[a.size() / 2] == searchNum) return a.size()/2;

    //Иначе 
    if (a[a.size() / 2] > searchNum)
}

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";
    std::cout << "Hello World!\n";
}

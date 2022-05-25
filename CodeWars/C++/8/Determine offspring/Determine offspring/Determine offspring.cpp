// Determine offspring.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

std::string chromosomeCheck(std::string sperm) {

    if (sperm == "XY") return "Congratulations! You're going to have a son.";
    else if (sperm =="XX") return "Congratulations! You're going to have a daughter.";

}

int main()
{

    std::cout << chromosomeCheck("XY") << std::endl;
    std::cout << chromosomeCheck("XX") << std::endl;
}

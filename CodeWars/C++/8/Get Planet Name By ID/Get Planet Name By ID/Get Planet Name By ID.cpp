// Get Planet Name By ID.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string get_planet_name(int id)
{
    switch (id)
    {
    case 1: return "Mercury";
    case 2: return "Venus";
    case 3: return "Earth";
    case 4: return "Mars";
    case 5: return "Jupiter";
    case 6: return "Saturn";
    case 7: return "Uran";
    case 8: return "Neptune";
    case 9: return "Pluton";

    }
}


int main()
{
    std::cout << get_planet_name(2) << std::endl;
    std::cout << get_planet_name(5) << std::endl;
    std::cout << get_planet_name(3) << std::endl;
    std::cout << get_planet_name(4) << std::endl;
    std::cout << get_planet_name(8) << std::endl;
    std::cout << get_planet_name(1) << std::endl;
}


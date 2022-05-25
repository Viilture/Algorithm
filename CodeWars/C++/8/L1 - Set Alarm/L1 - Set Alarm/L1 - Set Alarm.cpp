// L1 - Set Alarm.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

bool set_alarm(const bool& employed, const bool& vacation) 
{

    return employed && !vacation?true:false;
}

int main()
{
    std::cout << set_alarm(true, true) << std::endl;
    std::cout << set_alarm(false, true) << std::endl;
    std::cout << set_alarm(false, false) << std::endl;
    std::cout << set_alarm(true, false) << std::endl;
}


// Subtract the Sum.cpp : return "Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>


std::string get_num(const int& in_number)
{
    switch (in_number)
    {
    case  1: return "kiwi";
    case  2: return "pear";
    case  3: return "kiwi";
    case  4: return "banana";
    case  5: return "melon";
    case  6: return "banana";
    case  7: return "melon";
    case  8: return "pineapple";
    case  9: return "apple";
    case 10: return "pineapple";
    case 11: return "cucumber";
    case 12: return "pineapple";
    case 13: return "cucumber";
    case 14: return "orange";
    case 15: return "grape";
    case 16: return "orange";
    case 17: return "grape";
    case 18: return "apple";
    case 19: return "grape";
    case 20: return "cherry";
    case 21: return "pear";
    case 22: return "cherry";
    case 23: return "pear";
    case 24: return "kiwi";
    case 25: return "banana";
    case 26: return "kiwi";
    case 27: return "apple";
    case 28: return "melon";
    case 29: return "banana";
    case 30: return "melon";
    case 31: return "pineapple";
    case 32: return "melon";
    case 33: return "pineapple";
    case 34: return "cucumber";
    case 35: return "orange";
    case 36: return "apple";
    case 37: return "orange";
    case 38: return "grape";
    case 39: return "orange";
    case 40: return "grape";
    case 41: return "cherry";
    case 42: return "pear";
    case 43: return "cherry";
    case 44: return "pear";
    case 45: return "apple";
    case 46: return "pear";
    case 47: return "kiwi";
    case 48: return "banana";
    case 49: return "kiwi";
    case 50: return "banana";
    case 51: return "melon";
    case 52: return "pineapple";
    case 53: return "melon";
    case 54: return "apple";
    case 55: return "cucumber";
    case 56: return "pineapple";
    case 57: return "cucumber";
    case 58: return "orange";
    case 59: return "cucumber";
    case 60: return "orange";
    case 61: return "grape";
    case 62: return "cherry";
    case 63: return "apple";
    case 64: return "cherry";
    case 65: return "pear";
    case 66: return "cherry";
    case 67: return "pear";
    case 68: return "kiwi";
    case 69: return "pear";
    case 70: return "kiwi";
    case 71: return "banana";
    case 72: return "apple";
    case 73: return "banana";
    case 74: return "melon";
    case 75: return "pineapple";
    case 76: return "melon";
    case 77: return "pineapple";
    case 78: return "cucumber";
    case 79: return "pineapple";
    case 80: return "cucumber";
    case 81: return "apple";
    case 82: return "grape";
    case 83: return "orange";
    case 84: return "grape";
    case 85: return "cherry";
    case 86: return "grape";
    case 87: return "cherry";
    case 88: return "pear";
    case 89: return "cherry";
    case 90: return "apple";
    case 91: return "kiwi";
    case 92: return "banana";
    case 93: return "kiwi";
    case 94: return "banana";
    case 95: return "melon";
    case 96: return "banana";
    case 97: return "melon";
    case 98: return "pineapple";
    case 99: return "apple";
    case 100: return "pineapple";


    default: return "null";
    }
}

std::string SubtractSum(int n)
{
    std::string out = "null";
    int sum = 0;
    int sum1, sum2, sum3, sum4;
    while (out == "null")
    {
        sum = n%1000 + n%100 + sum3 + sum4;
        out = get_num(n -= sum);
    }

    return out;
}

int main()
{
  std::cout << SubtractSum(10);
}

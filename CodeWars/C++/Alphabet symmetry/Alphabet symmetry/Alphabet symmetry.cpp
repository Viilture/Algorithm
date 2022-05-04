// Alphabet symmetry.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;


template <class T>

void Cout(T  in)
{
    std::cout << std::hex << in;
}


std::vector<int> solve(const std::vector<std::string>& arr) {

    
    std::vector<int> Out;

    for (int i = 0; i < arr.size(); i++)
    {
        int Coincidence = 0;
        for (int j=0;j<arr[i].size();j++)
        {
            if ((arr[i][j] == 0x61 + j) || (arr[i][j] == 0x41 + j))
                Coincidence++;
            
        }
        Out.push_back(Coincidence);
    }
    
    


    return Out;
};

void main()
{

    std::vector<std::string> STR;

    STR.push_back("a`123`3");
    STR.push_back("ab");
    STR.push_back("c");
    STR.push_back("d");
    STR.push_back("ewww");
    STR.push_back("g");

   
    solve(STR);

   // if(*STR[1].c_str() == (0x61+1))
   // std::cout << std::hex << static_cast<unsigned short>(c) << std::endl;



}


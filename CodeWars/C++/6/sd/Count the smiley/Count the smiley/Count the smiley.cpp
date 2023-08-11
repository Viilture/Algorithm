
#include <iostream>
#include <string>
#include <vector>
#include <regex>

int square_digits(int num) 
{
    std::string in = std::to_string(num);
    std::string out;
    
    for (auto it : in)
    {
        int n1 = atoi(&it)* atoi(&it);
       out.push_back(std::to_string(n1));
    }

    return 0;
}

int main()
{

}


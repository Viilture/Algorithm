#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <String>
#include <cmath>

class Solution {
public:
    int size=0;//Размер числа
    bool isPalindrome(int x)
    {
        std::string in = std::to_string(x);
        for(int i=0; i<(in.size()/2); ++i)
        {   std::cout << in << std::endl;

            if(in[i]!=in[in.size()-i-1])
            {   qDebug() << in[i];
                qDebug() << in[in.size()-i];
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Solution b;

    qDebug() << b.isPalindrome(-1001);

    return a.exec();
}

// Two fighters, one winner.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>


class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
};

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
    if (fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
    {
        bool p = fighter1->getName() == firstAttacker ? 1 : 0;

        while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
        {
            p ? fighter2->setHealth(fighter2->getHealth() - fighter1->getDamagePerAttack())
                : fighter1->setHealth(fighter1->getHealth() - fighter2->getDamagePerAttack());
            p = p ? 0 : 1;
        }
    }

    return fighter1->getHealth() > fighter2->getHealth() ? fighter1->getName() : fighter2->getName();
}

std::string declareWinner2(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{

    return fighter1->getHealth() > fighter2->getHealth() ? fighter1->getName() : fighter2->getName();
}

int main()
{
    Fighter fighter1("Lew", 10, 2);
    Fighter fighter2("Harry", 5, 4);
    std::cout << declareWinner(&fighter1, &fighter2, "Lew");
}


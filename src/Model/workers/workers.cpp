#include "workers.h"

void Lumberjack::produce_wood(Coniferous coniferous)
{
    Wood produced = coniferous.produce_wood();
    
    this->v.push_back(produced);
}

void Lumberjack::sell_wood(Trader trader)
{
    Wood wood = v.back();
    v.pop_back();
    int money = trader.pay_tree(2, wood);
    its_own_money += money;

}

void Farmer::produce_wheat(Field field)
{
    Cereals* cereal = field.produce_Cereals();
    Wheat* pwheat = dynamic_cast<Wheat*>(cereal);
    Wheat wheat = *pwheat;
    v.push_back(wheat);
}

void Farmer::sell_wheat(Trader trader)
{
    Wheat wheat = v.back();
    v.pop_back();
    int money = trader.pay_wheat(1, wheat);
    its_own_money += money;
}

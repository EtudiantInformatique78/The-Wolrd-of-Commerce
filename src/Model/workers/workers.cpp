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


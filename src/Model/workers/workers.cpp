#include "workers.h"

void Worker::produce_wood(Coniferous coniferous)
{
    Wood produced = coniferous.produce_wood();
    
    this->v.push_back(produced);
}

void Worker::sell_wood(Trader trader)
{
    Wood wood = v.back();
    v.pop_back();
    int money = trader.pay_tree(2, wood);
    its_own_money += money;

}

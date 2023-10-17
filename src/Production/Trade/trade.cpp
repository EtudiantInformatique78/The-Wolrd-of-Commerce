#include <iostream>
#include <cstdio>
#include "trade.h"



void Trader::set_money(int money){
    this->money = money;
}

int Trader::get_money() {
    return this->money;
}

void HomeTrader::wholesale()
{
    std::cout<< "I am a wholesaler" << std::endl;
}

void HomeTrader::retail()
{
    std::cout<< "I am a retailer" << std::endl;
}

void ForeignTrader::import_trade()
{
    std::cout<< "I import goods from another country to my country" << std::endl;
}

void ForeignTrader::export_trade()
{
    std::cout<< "I export my goods to another country" << std::endl;
}



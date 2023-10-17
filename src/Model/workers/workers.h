#pragma once
#include <vector>

#include "../../Geography/South-Artic-Circle/coniferous.h"
#include "../../Production/Trade/trade.h"

class Worker {
    private:
        int its_own_money = 100;
        std::vector<Wood> v;

    public:
        void produce_wood(Coniferous coniferous);
        void sell_wood(Trader trader);

};
#pragma once
#include <vector>

#include "../../Geography/South-Artic-Circle/coniferous.h"
#include "../../Production/Trade/trade.h"
#include "../../Geography/cereals.h"

class Worker {
    private:
    /* data */
        
    protected:    
        int its_own_money ;

    public:
        Worker() {}
};

class Lumberjack: public Worker {
    private:
        
        std::vector<Wood> v;

    public:
        Lumberjack(){
            its_own_money = 100;
        }

        void produce_wood(Coniferous coniferous);
        void sell_wood(Trader trader);

};

class Farmer: public Worker {
    private:
        std::vector<Wheat> v;
    public:
        Farmer() {
            its_own_money = 100;
        }
        void produce_wheat(Field field);
        void sell_wheat(Trader trader);
};
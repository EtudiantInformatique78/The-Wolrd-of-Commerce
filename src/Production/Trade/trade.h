#pragma once
#include "../../Geography/South-Artic-Circle/coniferous.h"


class Trader {
    private:
        Wood its_wood;
        int money;

    public:
        void set_money(int money);
        int get_money();
        int pay_tree(int money, Wood wood);
        // void set_forest(Coniferous tree);
        
};

class HomeTrader: public Trader {

    public:
        void wholesale();
        void retail();
};


class ForeignTrader: public Trader {
    public:
        void import_trade();
        void export_trade();
};


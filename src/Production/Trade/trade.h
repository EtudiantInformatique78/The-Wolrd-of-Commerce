#include "../../Geography/South-Artic-Circle/coniferous.h"

class Trader {
    private:
        Coniferous its_own_forest;
        int money;

    public:
        void set_money(int money);
        int get_money();

        void set_forest(Coniferous tree);
        
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


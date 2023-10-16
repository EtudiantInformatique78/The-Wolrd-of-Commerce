class Trader {
    private:
        int money;

    public:
        void set_money(int money);

        int get_money();
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


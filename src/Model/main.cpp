#include <iostream>
#include <cstdio>
#include <exception>
#include "../Production/Trade/trade.h"

int main() {
    

    // Trader trader = Trader();
    // trader.set_money(8);

    // std::cout << "Hello, World!" << std::endl;
    // std::cout << trader.get_money() << std::endl;
    
    try {

        Trader * home_trader = new HomeTrader;
        Trader * foreign_trader = new ForeignTrader;
        HomeTrader *ht;
        ForeignTrader *ft;

        home_trader->set_money(3);
        foreign_trader->set_money(6);

        ht = static_cast<HomeTrader*>(home_trader);
        ht->retail();
        ht->wholesale();

        std::cout <<  ht->get_money() << std::endl;

        ft = static_cast<ForeignTrader*>(foreign_trader);
        ft->export_trade();
        ft->import_trade();

        std::cout <<  ft->get_money() << std::endl;

    } catch (std::exception& e){
        std::cout << "Exception: " << e.what();
    }
    
    return 0;


}

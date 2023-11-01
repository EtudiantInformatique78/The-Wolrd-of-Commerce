#include <iostream>
#include <cstdio>
#include <exception>
#include "../Production/Trade/trade.h"
#include "../Geography/South-Artic-Circle/coniferous.h"
#include "workers/workers.h"

int main() {
    

    // Trader trader = Trader();
    // trader.set_money(8);

    // std::cout << "Hello, World!" << std::endl;
    // std::cout << trader.get_money() << std::endl;
    Coniferous tree = Coniferous();
    Field field = Field();

    Worker lumberjack_worker = Lumberjack();
    Worker farmer_worker = Farmer();
//    worker.produce_wood(tree);
    Lumberjack lumberjack = *static_cast<Lumberjack*>(&lumberjack_worker);
    Farmer farmer = *static_cast<Farmer*>(&farmer_worker);
    lumberjack.produce_wood(tree);
    farmer.produce_wheat(field);

    try {

        Trader * home_trader = new HomeTrader;
        Trader * foreign_trader = new ForeignTrader;
        HomeTrader *ht;
        ForeignTrader *ft;

        home_trader->set_money(3);
        foreign_trader->set_money(6);

//         ht = static_cast<HomeTrader*>(home_trader);
//         ht->retail();
//         ht->wholesale();

//         std::cout <<  ht->get_money() << std::endl;

//         ft = static_cast<ForeignTrader*>(foreign_trader);
//         ft->export_trade();
//         ft->import_trade();
//   //      worker.sell_wood(*dynamic_cast<Trader*>(ft));

//         std::cout <<  ft->get_money() << std::endl;

        std::cout <<  ht->get_money() << std::endl;
        lumberjack.sell_wood(*ft);
        farmer.sell_wheat(*ht);
        std::cout <<  "The lumberjack and the farmer selled wood and wheat." << std::endl;

        std::cout <<  ht->get_money() << std::endl;
        std::cout <<  ft->get_money() << std::endl;

    } catch (std::exception& e){
        std::cout << "Exception: " << e.what();
    }
    
    return 0;


}

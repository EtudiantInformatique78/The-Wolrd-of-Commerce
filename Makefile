



compile: src/Model/main.cpp trade
	g++ -o bin/main.o -c src/Model/main.cpp
	g++ -o bin/main bin/main.o bin/trade.o

trade: src/Production/Trade/trade.cpp
	g++ -o bin/trade.o -c src/Production/Trade/trade.cpp

Main: bin/main
	bin/main
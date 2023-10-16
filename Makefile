

compile: Model/main.cpp Production/Trade/src/trade.o
	g++ -o Model/main.o -c Model/main.cpp
	g++ -o Model/bin/main Model/main.o Production/Trade/src/trade.o

Production/Trade/src/trade.o: Production/Trade/src/trade.cpp
	g++ -o Production/Trade/src/trade.o -c Production/Trade/src/trade.cpp

Main: Model/bin/main
	Model/bin/main
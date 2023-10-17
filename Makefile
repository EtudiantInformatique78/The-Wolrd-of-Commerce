



compile: src/Model/main.cpp trade worker tree
	g++ -o bin/main.o -c src/Model/main.cpp
	g++ -o bin/main bin/main.o bin/trade.o bin/workers.o bin/coniferous.o
	rm bin/*.o

trade: src/Production/Trade/trade.cpp
	g++ -o bin/trade.o -c src/Production/Trade/trade.cpp

worker: src/Model/workers/workers.cpp
	g++ -o bin/workers.o -c src/Model/workers/workers.cpp

tree: src/Geography/South-Artic-Circle/coniferous.cpp
	g++ -o bin/coniferous.o -c src/Geography/South-Artic-Circle/coniferous.cpp

Main: bin/main
	bin/main
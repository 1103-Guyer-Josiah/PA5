game: main.o board.o player.o trophy.o trap.o item.o
	g++ -o game main.o board.o player.o trophy.o trap.o item.o

main.o: main.cpp
	g++ -c main.cpp -g

player.o: player.cpp player.h
	g++ -c player.cpp -g

board.o: board.cpp board.h
	g++ -c board.cpp -g

trophy.o: trophy.cpp trophy.h
	g++ -c trophy.cpp -g

trap.o: trap.cpp trap.h
	g++ -c trap.cpp -g

item.o: item.cpp item.h
	g++ -c item.cpp -g

clean:
	rm *.o game
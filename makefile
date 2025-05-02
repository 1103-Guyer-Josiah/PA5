game: main.o board.o player.o #player.o #We will add objects as we build them
	g++ -o game main.o board.o player.o

main.o: main.cpp
	g++ -c main.cpp -g

player.o: player.cpp player.h
	g++ -c player.cpp -g

board.o: board.cpp board.h
	g++ -c board.cpp -g


clean:
	rm *.o game
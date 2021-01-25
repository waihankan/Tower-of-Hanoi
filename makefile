all: main.o Cube.o Stack.o Game.o 
	g++ main.o Cube.o Stack.o Game.o -o main

main.o: main.cpp
	g++ -c main.cpp

Cube.o: Cube.cpp
	g++ -c Cube.cpp

Stack.o: Stack.cpp
	g++ -c Stack.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

clean:
	rm *.o main *.exe

window: main.cpp Cube.cpp Stack.cpp Game.cpp
	x86_64-w64-mingw32-g++ -o main64.exe main.cpp Cube.cpp Game.cpp Stack.cpp

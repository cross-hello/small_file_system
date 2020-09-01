main: main.o list.o file.o
	g++ -o main main.o list.o file.o
main.o: main.cpp file.h list.h
	g++ -c -o main.o main.cpp
	
list.o: list.h list.cpp
	g++ -c -o list.o list.cpp

file.o: file.cpp file.h
	g++ -c -o file.o file.cpp file.h 

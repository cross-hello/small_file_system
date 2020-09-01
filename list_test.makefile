list_test: list_test.o list.o
	g++ -s  -o list_test list_test.o list.o
list_test.o:list_test.cpp list.h
	g++  -c -o list_test.o list_test.cpp    
list.o: list.h list.cpp
	g++   -c -o list.o list.cpp     



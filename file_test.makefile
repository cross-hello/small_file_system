file_test: file_test.o file.o
	g++ -o file_test file_test.o file.o

file_test.o: file_test.cpp file.h
	g++ -c -o file_test.o file_test.cpp

file.o: file.cpp file.h
	g++ -c -o file.o file.cpp

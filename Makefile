CC=g++
CFLAGS=-c -ansi -Wall -pedantic-errors -O0

all: linkedlist matrix

matrix: main_matrix.o matrix.o
	$(CC) main_matrix.o matrix.o -o matrix

linkedlist: main_linkedlist.o
	$(CC) main_linkedlist.o -o linkedlist

main_matrix.o: main_matrix.cpp
	$(CC) $(CFLAGS) main_matrix.cpp -o main_matrix.o

main_linkedlist.o: main_linkedlist.cpp
	$(CC) $(CFLAGS) main_linkedlist.cpp -o main_linkedlist.o

matrix.o: Matrix.cpp Matrix.hpp LinkedList.hpp Node.hpp
	$(CC) $(CFLAGS) Matrix.cpp -o matrix.o

clean:
	rm *o
	rm linkedlist
	rm matrix

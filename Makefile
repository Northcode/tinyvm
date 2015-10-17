all: ld

CC=clang++
OPTIONS=-c --std=c++11

main: src/main.cpp
	$(CC) $(OPTIONS) src/main.cpp -o main.o

ld: main
	$(CC) -o tinyvm main.o

clean:
	rm *.o

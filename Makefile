all: ld

CC=clang++
OPTIONS=-c

main: src/main.cpp
	$(CC) $(OPTIONS) src/main.cpp -o main.o

ld: main
	$(CC) -o tinyvm main.o

clean:
	rm *.o

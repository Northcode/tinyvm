all: ld

CC=clang++
OPTIONS=-c --std=c++11

main: src/main.cpp
	$(CC) $(OPTIONS) src/main.cpp -o main.o
vm: src/vm.cpp
	$(CC) $(OPTIONS) src/vm.cpp -o vm.o

ld: main vm
	$(CC) -o tinyvm main.o vm.o

clean:
	rm *.o

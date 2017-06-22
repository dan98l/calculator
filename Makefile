all: build

build/main.o: main.c
	mkdir -p build
	gcc -Wall -Werror -c main.c -o build/main.o

build/deposit.o: calculation.c
	gcc -Wall -Werror -c calculation.c -o build/calculation.o

build: build/main.o build/deposit.o
	mkdir -p bin
	gcc build/main.o build/calculation.o -o bin/calculator

clean:
	rm -rf build
	rm -rf bin

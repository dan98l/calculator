all: build

build/main.o: main.c
	mkdir -p build
	gcc -Wall -Werror -c main.c -o build/main.o

build/deposit.o: calculation.c
	gcc -Wall -Werror -c calculation.c -o build/calculation.o

build: build/main.o build/deposit.o
	mkdir -p bin
	gcc build/main.o build/calculation.o -o bin/calculator

build/maintest.o: test/main.c
	gcc -I thirdparty -c test/main.c -o build/maintest.o

build/calc_test.o: test/calc_test.c
	gcc -I thirdparty -c test/calc_test.c -o build/calc_test.o

test: build/calc_test.o build/maintest.o build/calculation.o
	gcc build/maintest.o build/calc_test.o build/calculation.o -o bin/calculator-test


clean:
	rm -rf build
	rm -rf bin

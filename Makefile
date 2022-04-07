all: clean build run

clean:
	rm -f month
	rm -f calc

build: clean
	gcc -Wall -o calc calc.c

run: build
	./calc
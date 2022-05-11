all: clean build-calc run

clean:
	rm -f month
	rm -f calc

build-month: clean
	gcc -Wall -o month month.c

build-calc: clean
	gcc -Wall -o calc calc.c

run: build-calc
	./calc

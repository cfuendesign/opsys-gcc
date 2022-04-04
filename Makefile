all: clean build run

clean:
	rm -f month
	rm -f calc

build: clean
	gcc -Wall -o month month.c

run: build
	./month
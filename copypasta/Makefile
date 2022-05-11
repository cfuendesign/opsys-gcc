all: clean build run

clean:
	rm -f juancpy
	rm -f README2.md

build: clean
	gcc -Wall -o juancpy juancpy.c

run: build
	./juancpy README.md README2.md
	cat README2.md

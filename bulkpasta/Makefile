all: clean build run

clean:
	rm -f bulkcpy
	rm -f testdir/README.md
	rm -f testdir/README2.md

build: clean
	gcc -Wall -o bulkcpy bulkcpy.c

run: build
	./bulkcpy README.md README2.md testdir

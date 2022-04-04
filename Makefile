all: clean build run

clean:
	rm -f month

build: clean
	gcc -c month.c -o month

run: build
	./month
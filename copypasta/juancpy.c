#include <stdlib.h>
#include <stdio.h>

/*
 * comando cp posix pero en español (?)
 * */
int main(int argc, char **argv) {
	FILE* fromf = fopen(argv[1], "r");
	FILE* tofw = fopen(argv[2], "a");
	char fromfchar;

	if (fromf == NULL) {
		printf("Error de apertura del archivo");
	} else {
		while((fromfchar = fgetc(fromf)) != EOF){
			fputc(fromfchar, tofw);
		}
		fclose(tofw);
		fclose(fromf);
	}
	return 0;
}

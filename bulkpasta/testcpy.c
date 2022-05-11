#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * Comando cp POSIX imitado por mi grupo (merchán, puentes, hernández y castillo) 
 * */
int main(int argc, char ** argv) {
  FILE* FILE_ORIGINAL = fopen(argv[1], "r");
  char* FILE_COPY_PATH;
  asprintf(&FILE_COPY_PATH, "%s/", argv[argc-1]);
  printf("Todo bien -> %s\n", FILE_COPY_PATH);

  // Build copy path as "argv[argc]/argv[i]" ie. "testdir/README.md"
  FILE_COPY_PATH = strcat(FILE_COPY_PATH, argv[1]);
  FILE* FILE_COPY = fopen(FILE_COPY_PATH, "a");
  char ORIGINAL_CHAR_STREAM;

  printf("Todo bien -> %s\n", FILE_COPY_PATH);

  if (FILE_ORIGINAL == NULL) {
    printf("Tal archivo no existe o hubo un problema abriéndolo");
  } else {
    while ((ORIGINAL_CHAR_STREAM = fgetc(FILE_ORIGINAL)) != EOF) {
      fputc(ORIGINAL_CHAR_STREAM, FILE_COPY);
    }
    fclose(FILE_COPY);
    fclose(FILE_ORIGINAL);
  }
  free(FILE_COPY_PATH);
  return 0;
}

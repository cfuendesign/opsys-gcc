#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * Versión modificada de juancpy para clonar múltiples archivos y ponerlos en un directorio específico
 * */
int main(int argc, char ** argv) {
  for (int i = 1; i < argc - 1; i++) {
    FILE * FILE_ORIGINAL = fopen(argv[i], "r");
    char * FILE_COPY_PATH;
    asprintf( & FILE_COPY_PATH, "%s/", argv[argc - 1]);

    // Build copy path as "argv[argc]/argv[i]" ie. "testdir/README.md"
    FILE_COPY_PATH = strcat(FILE_COPY_PATH, argv[i]);
    FILE * FILE_COPY = fopen(FILE_COPY_PATH, "a");
    char ORIGINAL_CHAR_STREAM;

    printf("%s -> %s\n", argv[i], FILE_COPY_PATH);

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
  }
  return 0;
}

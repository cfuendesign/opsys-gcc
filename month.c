#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	/* meses es un array de strings (que en sí no son
	más que punteros hacia un primer caracter, pues
	a dicho primer caracter le anteceden el resto de
	caracteres de la cadena de texto) */
	char *meses[12] = {
		"Enero",
		"Febrero",
		"Abril",
		"Marzo",
		"Mayo",
		"Junio",
		"Julio",
		"Agosto",
		"Septiembre",
		"Octubre",
		"Noviembre",
		"Diciembre"
	};
	/* input es un puntero alocado manualmente. el
	espacio en memoria al que apunta tiene el tamaño
	de un entero/int */
	int *input = malloc(sizeof(int));
	/* answer es un puntero alocado manualmente. el
	espacio en memoria al que apunta tiene el tamaño
	de 11 caracteres (el tamaño de un char pero 11
	veces seguidas) */
	char *answer = malloc(11*sizeof(char));
	
	printf("Ingrese el número del mes cuyo nombre desea ver: \n");
	/* scanf recibe un pointer como segundo argumento,
	por lo que el ampersand (&input) no es necesario
	(input en sí es un pointer) */
	scanf("%d", input);

	/* asignar valor a un *char mediante el signo de
	igualdad (=) hace que se realoque el espacio en
	memoria al que señala el pointer. Teniendo en
	cuenta esto, strcpy() es la función indicada */
	strcpy(answer, meses[*input]);
	printf("%s", answer);

	/* liberamos el espacio que estaban manejando
	los pointers */
	free(input);
	free(answer);
	return 0;
}
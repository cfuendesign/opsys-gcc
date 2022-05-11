#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

/* see if char is digit or alphanumeric: https://stackoverflow.com/questions/8611815/determine-if-char-is-a-num-or-letter */
/* char to int: https://www.interviewsansar.com/char-to-int-c-program/ */

int main(void) {
	//prompt user to type a rpn thingie
  printf("Ingrese una operación en notación polaca inversa. (RPN)\nAsegúrese de que la operación sea menor a 50 caracteres:\n> ");

	//data
  char chars[50];
  charStack parseStack;

	//fill chars array then push to stack
	gets(chars);
	for(int i=0; chars[i]!='\0'; i++){
	  charPush(chars[i], &parseStack);
	}

	//pre-loop data
	charStackElement topElement = parseStack.top;
	charStackElement* nextElement = topElement.next;

	//print stack
	while(elementIsNotNull(nextElement)){
		printf("%c ", nextElement->data);
		charStackElement* nextElement = nextElement->next;
	}
	return 0;
}

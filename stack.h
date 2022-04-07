#include <stdio.h>

// Metastructs https://www.geeksforgeeks.org/self-referential-structures/

// Metastructs v2 https://www.tutorialandexample.com/self-referential-structure-in-c

// The superior way to create and instantiate structs https://stackoverflow.com/questions/32577808/how-to-create-a-new-instance-of-a-struct#32582001

// I forgot how to define functions lol https://www.tutorialspoint.com/cprogramming/c_functions.htm

typedef struct intStackElement {
	int data;
	struct intStackElement* next;
} intStackElement;

typedef struct intStack {
	intStackElement* top;
} intStack;

intStack intPush(struct intStack stack, int element){
	intStackElement newTop;
	newTop.data = element;
	newTop.next = stack.top;
	printf("Pushing %d to the top\n", element);
	stack.top = &newTop;
	return stack;
}

intStack intPop(intStack stack) {
	stack.top = stack.top->next;
	return stack;
}
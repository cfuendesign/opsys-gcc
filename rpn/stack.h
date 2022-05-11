// Metastructs https://www.geeksforgeeks.org/self-referential-structures/

// Metastructs v2 https://www.tutorialandexample.com/self-referential-structure-in-c

// The superior way to create and instantiate structs https://stackoverflow.com/questions/32577808/how-to-create-a-new-instance-of-a-struct#32582001

// I forgot how to define functions lol https://www.tutorialspochar.com/cprogramming/c_functions.htm

typedef struct charStackElement {
	char data;
	struct charStackElement* next;
} charStackElement;

typedef struct charStack {
	charStackElement top;
} charStack;

char charPeek(charStack* stack){
  return stack->top.data;
}

int elementIsNotNull(charStackElement* el){
	if (el->next!=0){
		return 1;
	} else {
		return 0;
	}
}

void charPush(char element, charStack* stack){
	charStackElement newTop;
	newTop.data = element;
	newTop.next = &stack->top;
	stack->top = newTop;
	return;
}

char charPop(charStack* stack) {
  char return_char = charPeek(stack);
	stack->top.next = stack->top.next->next;
	return return_char;
}

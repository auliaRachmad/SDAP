#include "stack.h"

void createStack(Stack *s){
	*s = Nil;
}

void popElemen(Stack *s){
	deleteFirst(&(*s));
}

void pushElemen(Stack *s, infotype x){
	insertFirst(&(*s), x);
}
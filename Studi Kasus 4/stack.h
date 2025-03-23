#ifndef stack_H
#define stack_H

#include "linked.h"

typedef address Stack;

void createStack(Stack *s);
void popElemen(Stack *s);
void pushElemen(Stack *s, infotype x);

#endif
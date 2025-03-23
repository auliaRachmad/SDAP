#ifndef queue_H
#define queue_H

#include "linked.h"

typedef address Queue;

void createQueue(Queue *q);
void enQueue(Queue *Q, infotype x);
void deQueue(Queue *Q);
void printQueue(Queue Q);
#endif
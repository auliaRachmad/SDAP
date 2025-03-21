#include "queue.h"

void createQueue(Queue *q){
	*q = Nil;
}

void enQueue(Queue *Q, infotype *x){
	if(*Q == Nil){
		*x = 1;
	}
	insertLast(&(*Q), *x);
	*x = *x + 1;	
	
}

void deQueue(Queue *Q){
	deleteFirst(&(*Q));
}

void printQueue(Queue Q){
	Queue temp;
	
	temp = Q;
	printf("\nAntrian : \n");
	while(temp != Nil){
		printf("%d -> ", temp->info);
		temp = temp->next;
	}
	printf("Nil\n");
}
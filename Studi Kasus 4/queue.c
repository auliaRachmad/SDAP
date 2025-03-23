#include "queue.h"

void createQueue(Queue *Q){
	*Q = Nil;
}

void enQueue(Queue *Q, infotype x){
	insertLast(&(*Q), x);
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
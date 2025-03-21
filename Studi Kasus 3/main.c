#include "queue.h"

void printMainMenu(Queue *Q);
void inputMainMenu(Queue *Q);

int a = 1;

int main(){
	Queue List;
	
	createQueue(&List);
	
	printMainMenu(&List);
}

void printMainMenu(Queue *Q){
	printf("\nMAIN MENU");
	printf("\n1. Ambil Antrian");
	printf("\n2. Proses Antrian");
	printf("\n3. Cetak Antrian");
	printf("\n4. Exit");
	inputMainMenu(&(*Q));
}

void inputMainMenu(Queue *Q){
	int input;
	printf("\nMasukkan input : ");
	scanf("%d", &input);
	
	if(input < 1 || input > 4){
		printf("\n\nMohon masukkan input ulang.\n\n");
		printMainMenu(&(*Q));
	}else{
		switch (input)
		{
			case 1:
				enQueue(&(*Q), &a);
				printMainMenu(&(*Q));
				break;
			case 2:
				deQueue(&(*Q));
				printMainMenu(&(*Q));
				break;
			case 3:
				printQueue(*Q);
				printMainMenu(&(*Q));
				break;
			case 4:
				return -1;
				break;
		}	
	}
}
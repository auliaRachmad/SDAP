#include "stack.h"
#include "queue.h"

void printMainMenu(Queue *Q);
void inputMainMenu(Queue *Q);
void inputDesimal(Queue *Q);
void tampilBiner(Queue *Q);

int main(){
	Queue List;
	
	createQueue(&List);
	
	printMainMenu(&List);
	
	return 0;
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
				inputDesimal(&(*Q));
				break;
			case 2:
				tampilBiner(&(*Q));
				break;
			case 3:
				printQueue(*Q);
				printMainMenu(&(*Q));
				break;
			case 4:
				return;
				break;
		}	
	}
}

void inputDesimal(Queue *Q){
	int desimal;
	
	printf("\n\nSilahkan Masukkan Desimal : ");
	scanf("%d", &desimal);
	printf("\n");
	
	enQueue(&(*Q), desimal);
	
	printMainMenu(&(*Q));
}

void tampilBiner(Queue *Q){
	
	if(*Q == Nil){
		return;
	}
	
	int angka = (*Q)->info;
	
	Stack List;
    
    createStack(&List);
    
    while(angka > 0 ){
    	pushElemen(&List, angka%2);
    	angka /= 2;
	}
	
	printf("Biner : ");
	while(List != Nil){
		printf("%d", List->info);
		popElemen(&List);
	}
	
	printf("\n");
	
	deQueue(&(*Q));
	
	printMainMenu(&(*Q));
}
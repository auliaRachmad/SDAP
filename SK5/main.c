#include "case5.h"

void printMainMenu(ListKota listKota[]);
void inputMainMenu(ListKota listKota[]);
boolean cekKota(ListKota k);

int main(){
	ListKota listKota[5];
	
	createListKota(listKota);
	
	printMainMenu(listKota);
	
	return 0;
}

void printMainMenu(ListKota listKota[]){
	printf("\nMAIN MENU");
	printf("\n1. Tampil List Kota");
	printf("\n2. Insert Nama");
	printf("\n3. Tampil List Nama");
	printf("\n4. Delete Kota");
	printf("\n5. Exit");
	inputMainMenu(listKota);
}

void inputMainMenu(ListKota listKota[]){
	int input;
	printf("\nMasukkan input : ");
	scanf("%d", &input);
	int i;
	if(input < 1 || input > 5){
		printf("\n\nMohon masukkan input ulang.\n\n");
		printMainMenu(listKota);
	}else{
		switch (input)
		{
			case 1:
				printListKota(listKota);
				printMainMenu(listKota);
				break;
			case 2:
				printListKota(listKota);
				printf("Masukkan Nomor Kota : ");
				scanf("%d", &i);
				printf("\n");
				if(cekKota(listKota[i-1])){
					printf("Masukkan Nama : ");
					infotype info;
					scanf("%s", &info);
					insertNama(&listKota[i-1], info);
				}else{
					printf("\nMaaf Kota tidak tersedia");
				}
				printMainMenu(listKota);
				break;
			case 3:
				printListKota(listKota);
				printf("Masukkan Nomor Kota : ");
				scanf("%d", &i);
				printf("\n");
				if(cekKota(listKota[i-1])){
					printNama(listKota[i-1]);
				}else{
					printf("\nMaaf Kota tidak tersedia");
				}
				printMainMenu(listKota);
				break;
			case 4:
				printListKota(listKota);
				printf("Masukkan Nomor Kota : ");
				scanf("%d", &i);
				printf("\n");
				if(cekKota(listKota[i-1])){
					deleteKota(&listKota[i-1]);
				}else{
					printf("\nMaaf Kota tidak tersedia");
				}
				printMainMenu(listKota);
				break;
			case 5:
				return;
				break;
		}	
	}
}

boolean cekKota(ListKota k){
	int result = strcmp((k).Kota, "Nil");
	
	if(result != 0){
		return true;
	}else{
		return false;
	}
}

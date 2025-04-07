#include "case6.h"

void printMainMenu(List *L);
void inputMainMenu(List *L);
boolean cekKota(List L, infotype namaKota);

int main(){
	List L;
	
	createListKota(&L);
	
	printMainMenu(&L);
	
	return 0;
}

void printMainMenu(List *L){
	printf("\nMAIN MENU");
	printf("\n1. Tampil List Kota");
	printf("\n2. Insert Nama");
	printf("\n3. Tampil List Nama");
	printf("\n4. Insert Kota");
	printf("\n5. Delete Kota");
	printf("\n6. Exit");
	inputMainMenu(&(*L));
}

void inputMainMenu(List *L){
	int input;
	printf("\nMasukkan input : ");
	scanf("%d", &input);
	infotype i;
	if(input < 1 || input > 6){
		printf("\n\nMohon masukkan input ulang.\n\n");
		printMainMenu(&(*L));
	}else{
		switch (input)
		{
			case 1:
				printListKota(*L);
				printMainMenu(&(*L));
				break;
			case 2:
				printListKota(*L);
				printf("Masukkan Nama Kota : ");
				scanf("%s", &i);
				printf("\n");
				if(cekKota(*L, i)){
					printf("Masukkan Nama : ");
					infotype info;
					scanf("%s", &info);
					insertNama(&(*L), i, info);
				}else{
					printf("\nMaaf Kota tidak tersedia");
				}
				printMainMenu(&(*L));
				break;
			case 3:
				printListKota(*L);
				printf("Masukkan Nama Kota : ");
				scanf("%s", &i);
				printf("\n");
				if(cekKota(*L, i)){
					printNama(*L, i);
				}else{
					printf("\nMaaf Kota tidak tersedia");
				}
				printMainMenu(&(*L));
				break;
			case 4:
				printf("Masukkan Nama Kota : ");
				scanf("%s", &i);
				printf("\n");
				insertKota(&(*L), i);
				printMainMenu(&(*L));
				break;
			case 5:
				printListKota(*L);
				printf("Masukkan Nama Kota : ");
				scanf("%s", &i);
				printf("\n");
				if(cekKota(*L, i)){
					deleteKota(&(*L), i);
				}else{
					printf("\nMaaf Kota tidak tersedia");
				}
				printMainMenu(&(*L));
				break;
			case 6:
				return;
				break;
		}	
	}
}

boolean cekKota(List L, infotype namaKota){
	List temp = L;
	boolean ada = false;
	int result = strcmp(temp->Kota, namaKota);
	while(result != 0){
		temp = temp->nextKota;
		result = strcmp(temp->Kota, namaKota);;
	}
	
	if(result == 0){
		ada = true;
	}
	
	return ada;
}

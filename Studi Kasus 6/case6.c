#include "case6.h"

kota createKota(infotype namaKota){
	kota k = (kota) malloc(sizeof(ListKota));
	strcpy(k->Kota, namaKota);
	k->Nama = Nil;
	k->nextKota = Nil;
}

void insertKota(List *L, infotype namaKota){
	kota temp;
	kota newKota = createKota(namaKota);
	
	if(*L == Nil){
		*L = newKota;
	}else{
		temp = *L;
        while(temp->nextKota != Nil){
            temp = temp->nextKota;
        }
        temp->nextKota = newKota;
	}
}

void createListKota(List *L){
	*L = Nil;
}

void printListKota(List L){
	List temp = L;
	
	if(temp != Nil){
		printf("\nList Kota : \n");
		while (temp != Nil){
			printf("%s\n",temp->Kota);
			temp = temp->nextKota;
		}
		printf("\n");
	}else{
		printf("\nTidak ada List Kota\n");
	}
}

void insertNama(List *L, infotype namaKota, infotype nama){
	List temp = *L;
	int result = strcmp(temp->Kota, namaKota);
	while(result != 0){
		temp = temp->nextKota;
		result = strcmp(temp->Kota, namaKota);;
	}
	
	if(result == 0){
		insertLast(&((temp)->Nama), nama);	
	}
}

void printNama(List L, infotype namaKota){
	List temp = L;
	int result = strcmp(temp->Kota, namaKota);
	while(result != 0){
		temp = temp->nextKota;
		result = strcmp(temp->Kota, namaKota);;
	}
	
	if(result == 0){
		nama tempNama;
	
		tempNama = temp->Nama;
		
		printf("Kota %s Nama : ", temp->Kota);
		while(tempNama != Nil){
			printf("%s -> ", tempNama->info);
			tempNama = tempNama->next;
		}
		
		printf("Nil\n");	
	}
}

void deleteKota(List *L, infotype namaKota){
	List temp = *L;
	List temp2;
	boolean ada = false;
	int result = strcmp(temp->nextKota->Kota, namaKota);
	while(result != 0){
		temp = temp->nextKota;
		result = strcmp(temp->nextKota->Kota, namaKota);;
	}
	
	if(result == 0){
		ada = true;
		deleteList(&(temp->nextKota->Nama));
		temp2 = temp->nextKota;
		temp->nextKota = temp->nextKota->nextKota;
		free(temp2);
		temp2 = Nil;
		temp = Nil;
	}
	
	if(!ada){
		printf("Nama Kota tidak ditemukan");
	}
}
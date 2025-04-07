#include "case5.h"

void createKota(ListKota *k, infotype namaKota){
	strcpy((k)->Kota, namaKota);
	(k)->Nama = Nil;
}

void printKota(int i, ListKota *k){
	
	int result = strcmp((k)->Kota, "Nil");
	
	if(result != 0){
		printf("%d. %s\n", i+1, k->Kota);	
	}else{
		return;
	}
}

void createListKota(ListKota listKota[]){
	
	createKota(&listKota[0], "Jakarta");
	createKota(&listKota[1], "Bandung");
	createKota(&listKota[2], "Surabaya");
	createKota(&listKota[3], "Medan");
	createKota(&listKota[4], "Garut");
}

void printListKota(ListKota listKota[]){
	int i = 0;
	while(i < 5){
		printKota(i, &listKota[i]);
		i++;
	}
}

void insertNama(ListKota *k, infotype nama){
	insertLast(&((k)->Nama), nama);
}

void printNama(ListKota k){
	nama temp;
	
	temp = k.Nama;
	
	printf("Kota %s Nama : ", k.Kota);
	while(temp != Nil){
		printf("%s -> ", temp->info);
		temp = temp->next;
	}
	
	printf("Nil\n");
}

void deleteKota(ListKota *k){
	deleteList(&((k)->Nama));
	
	strcpy(k->Kota, "Nil");
}
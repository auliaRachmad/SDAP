/*#include "perpusDLL.h"

address createNodeBuku(infotype i, string s){
	address P = (address) malloc(sizeof(Buku));
	if(P == Nil) return Nil;
	strcpy(P->nama,s);
	P->angka = i;
	P->nextBuku = Nil;
	P->antrian = Nil;
	return P;
}

void createRak(rak *r){
	*r = Nil;
}

void insertBuku(rak *P, infotype i, string s){
	address temp;
	address Pnew = createNodeBuku(i,s);
	
	if(*P == Nil){
    	*P = Pnew;
	}else{
		temp = *P;
        while(temp->nextBuku != Nil){
            temp = temp->nextBuku;
        }
        temp->nextBuku = Pnew;
	}
}

void createQueue(Queue *Q){
	*Q = Nil;
}

void enQueue(rak *r, string judul, infotype i, string s){
	address temp;
	temp = r;
	
	if(temp != Nil){
		while(temp->nama != judul && ->nextBuku != Nil){
			temp = temp->nextBuku;
		}
		if(temp->nama == judul){
			if(temp->antrian == Nil){
				Queue Q;
				createQueue(*Q);
				
			}
		}else{
			printf("\nBuku tidak ditemukan.");
		}
	}
	
}

address2 createNodeAnggota(infotype i, string s){
	address P = (address) malloc(sizeof(Anggota));
	if(P == Nil) return Nil;
	strcpy(P->nama,s);
	P->angka = i;
	P->next = Nil;
	return P;
}

void insertAnggota(Queue *Q, infotype i, string s){
	address2 temp;
	address2 Pnew = createNodeAnggota(i,s);
	
	if(*Q == Nil || temp->angka < i){
        Pnew->next = *Q;
        *Q = Pnew;
    }else{
        temp = *Q;
        while(Pnew->angka < temp->next->angka && temp->next != Nil){
        	temp = temp->next;
		}
		Pnew->next = temp->next;
		temp->next = Pnew;
    }
    
}

void printAntrian(rak r, string buku){
	address temp = r;
	
	if(temp != Nil){
		int result = strcmp(temp->nama, buku);
		while(result != 0){
			temp = temp->nextBuku;
			result = strcmp(temp->nama, buku);
		}
		if(result == 0){
			address2 temp2 = temp->antrian;
			if(temp2 != Nil){
				printf("\nList Antrian Buku %s : \n", buku);
				while (temp2 != Nil){
					printf("%s\n", temp2->nama);
					temp2 = temp2->next;
				}
				printf("\n");
			}else{
				printf("Tidak ada list antrian.");
			}
		}
	}
}

void printListBuku(rak r){
	address temp;
	
	if(temp != Nil){
		printf("\nList Buku : \n");
		while (temp != Nil){
			printf("%s %d\n",temp->nama, temp->angka);
			temp = temp->nextBuku;
		}
		printf("\n");
	}else{
		printf("\nTidak ada List Buku\n");
	}
}
*/

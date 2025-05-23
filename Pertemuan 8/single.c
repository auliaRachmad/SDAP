/*#include "single.h"

address createNode(infotype i, string s){
	address P = (address) malloc(sizeof(Buku));
	if(P == Nil) return Nil;
	strcpy(P->nama,s);
	P->angka = i;
	P->next = Nil;
	return P;
}

void createRak(rak *r){
	r = Nil;
}

void insertFirst(address *P, infotype i, string s){
	address temp;
	address Pnew = createNode(i,s);
	
	if(*P == Nil){
        *P = PNew;
    }else{
        temp = *P;
        next(P) = temp;
        
        *P = PNew;
    }
}

void insertLast(address *P, infotype i, string s){
	address temp;
	address Pnew = createNode(i,s);
	
	if(*P == Nil){
    	*P = PNew;
	}else{
		temp = *P;
        while(next(temp) != Nil){
            temp = next(temp);
        }
        next(temp) = PNew;
	}
}

void deleteFirst(address *P){
	address temp;
	
	if(*P != Nil){
        temp = *P;
        (*P) = (*P)->next;

        free(temp);

        temp = Nil;
    }
}

void deleteLast(address *P){
	address temp;

    if(*P != Nil){
        temp = *P;
        (*P) = (*P)->next;

        free(temp);

        temp = Nil;
    }
}*/
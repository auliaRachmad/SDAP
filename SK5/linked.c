#include "linked.h"

address createNode (infotype info){
    address P = (address) malloc(sizeof(ElmtList));
    if (P == Nil) return Nil;
    strcpy(P->info,info);
    P->next = Nil;
    return P;
}

void insertFirst (address *P, infotype x){
    address temp;
    address PNew = createNode(x);

    if(*P == Nil){
        *P = PNew;
    }else{
        temp = *P;
        PNew->next = temp;
        
        *P = PNew;
    }
}

void insertLast(address *P, infotype x){
	address temp;
    address PNew = createNode(x);
    
    if(*P == Nil){
    	*P = PNew;
	}else{
		temp = *P;
        while(temp->next != Nil){
            temp = temp->next;
        }
        temp->next = PNew;
	}
}

void deleteFirst (address *P){
    address temp;

    if(*P != Nil){
        temp = *P;
        (*P) = (*P)->next;

        free(temp);

        temp = Nil;
    }
}

void deleteList(address *P){
	while(*P != Nil){
		deleteFirst(&(*P));
	}
}
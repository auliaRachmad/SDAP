/*#ifndef perpusDLL_H
#define perpusDLL_H

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <String.h>

#define Nil NULL

typedef struct ElmtList *address;
typedef struct ElmtList2 *address2;
typedef char string[100];
typedef int infotype;

typedef address2 Queue;

typedef struct ElmtList{
	string nama;
	infotype angka;
	Queue antrian;
	address nextBuku;
}Buku;

typedef struct ElmtList2 {
	string nama;
	infotype angka;
	address2 next;
}Anggota;

typedef address rak;

address CreateNodeBuku(infotype i, string s);

void createRak(rak *r);

//void insertFirst(address *P, infotype i, string s);

void insertBuku(rak *P, infotype i, string s);

//void deleteFirst(address *P);

//void deleteLast(address *P);

//void insertBuku(address *P, address *Q, infotype i, string s);

void createQueue(Queue *Q);

void enQueue(Queue *P, infotype i, string s);

//void deQueue(address *P);

void printListBuku(rak r);

#endif*/
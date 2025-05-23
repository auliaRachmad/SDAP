/*#ifndef single_H
#define single_H

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <String.h>

#define judul(P) (*P)->nama
#define nama(P) (*P)->nama
#define stok(P) (*P)->angka
#define level(P) (*P)->angka
#define next(P) (*P)->next
#define Nil NULL

typedef struct ElmtList *address;
typedef char string[100];
typedef int infotype;

typedef struct ElmtList{
	string nama;
	infotype angka;
	address next;
}Buku, Anggota;

typedef Buku rak;

address createNode(infotype i, string s);

void createRak(rak *r);

void insertFirst(address *P, infotype i, string s);

void insertLast(address *P, infotype i, string s);

void deleteFirst(address *P);

void deleteLast(address *P);

void insertBuku(address *P, address *Q, infotype i, string s);

void enQueue(address *P, infotype i, string s);

void deQueue(address *P);

#endif*/
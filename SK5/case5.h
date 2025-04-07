#ifndef case5_H
#define case5_H
#include "linked.h"

typedef address nama;
typedef struct{
	nama Nama;
	infotype Kota;
}ListKota;

void createKota(ListKota *k, infotype namaKota);
void printKota(int i, ListKota *k);
void createListKota(ListKota listKota[]);
void printListKota(ListKota listKota[]);
void insertNama(ListKota *k, infotype nama);
void printNama(ListKota k);
void deleteKota(ListKota *k);

#endif
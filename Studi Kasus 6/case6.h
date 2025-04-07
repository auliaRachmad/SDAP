#ifndef case6_H
#define case6_H
#include "linked.h"

typedef address nama;
typedef struct tListKota *kota;
typedef struct tListKota{
	nama Nama;
	infotype Kota;
	kota nextKota;
}ListKota;

typedef kota List;

kota createKota(infotype namaKota);
void insertKota(List *L, infotype namaKota);
void createListKota(List *L);
void printListKota(List L);
void insertNama(List *L, infotype namaKota, infotype nama);
void printNama(List L, infotype namaKota);
void deleteKota(List *L, infotype namaKota);

#endif
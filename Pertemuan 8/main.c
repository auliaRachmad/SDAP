#include "double.h"

int main(){
	rak r;
	
	createRak(&r);
	
	insertBuku(&r, 2, "Buku1");
	insertBuku(&r, 1, "Buku2");
	
	printListBuku(r);
	
	enQueue(&r, "Buku1", 1, "Dosen1");
	enQueue(&r, "Buku1", 2, "Mahasiswa1");
	
	enQueue(&r, "Buku2", 1, "Dosen1");
	
	printAntrian(r, "Buku1");
	printAntrian(r, "Buku2");
}
#include "nbtrees.h"

int main(){
	//Untuk sample tree akan menggunakan yang ada pada dokumentasi penugasan
	Isi_Tree tree;
	
	Create_tree(tree, 5);
	
	PreOrder(tree);
	InOrder(tree);
	PostOrder(tree);
	Level_order(tree, 5);
	
	PrintTree(tree);
	
	printf("\nJumlah elemen : %d", nbElmt(tree));
	printf("\nJumlah daun : %d", nbDaun(tree));
	
	printf("\nLevel pada info 'C' : %d", Level(tree, 'C'));
	
	printf("\nKedalaman pohon : %d", Depth(tree));
}
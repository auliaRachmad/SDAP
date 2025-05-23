#include "menu.h"

void tampilMenu(Isi_Tree X){
	printf("\n1. Traversal PreOrder");
	printf("\n2. Traversal InOrder");
	printf("\n3. Traversal PostOrder");
	printf("\n4. Traversal Level Order");
	printf("\n5. Print Tree");
	printf("\n6. Search node tree");
	printf("\n7. Jumlah Daun/Leaf");
	printf("\n8. Mencari level node tree");
	printf("\n9. Kedalaman Tree");
	printf("\n10. Membandingkan 2 node tree");
	printf("\n11. Exit");
	prosesMen(X)
}

int inputMenu(){
	int a;
	printf("\nMasukkan input : ");
	scanf("%d", &a);
	return a;
}

void prosesMenu(Isi_Tree X){
	int input = inputMenu();
	if(input < 1 || input > 11){
		tampilMenu(X);
	}else{
		switch (input) {
			case 1:
				PreOrder(X);
				tampilMenu(X);
				break;
				
			case 2:
				InOrder(X);
				tampilMenu(X);
				break;
				
			case 3:
				PostOrder(X);
				tampilMenu(X);
				break;
			
			case 4:
				Level_order(X,20);
				tampilMenu(X);
				break;
			
			case 5:
				
				
		}
	}
}
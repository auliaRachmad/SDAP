#include "nbtrees.h"

void Create_tree(Isi_Tree X, int Jml_Node){
	int i = 1;
	
	while (i <= jml_maks) {
        X[i].info = 0;
        X[i].ps_fs = 0;
        X[i].ps_nb = 0;
        X[i].ps_pr = 0;
        i++;
    }
    
    i = 1;

    while (i <= Jml_Node) {
    	printf("Masukkan info node ke-%d: ", i);
        scanf(" %d", &X[i].info);
        printf("  Masukkan indeks anak pertama (0 jika tidak ada): ");
        scanf("%d", &X[i].ps_fs);
        printf("  Masukkan indeks saudara berikutnya (0 jika tidak ada): ");
        scanf("%d", &X[i].ps_nb);
        printf("  Masukkan indeks parent (0 jika root): ");
        scanf("%d", &X[i].ps_pr);
        i++;
    }
}

boolean IsEmpty (Isi_Tree P){
	return P[1].info == 0;
}

void PreOrder (Isi_Tree P){
	void PreOrderStart(address i){
		if(i != 0){
			printf("%d ", P[i].info);
	        PreOrderStart(P[i].ps_fs);
	        PreOrderStart(P[i].ps_nb);	
		}
	}
	
	PreOrderStart(1);
	
	printf("\n");
}

void InOrder (Isi_Tree P){
	void InOrderStart(address i){
		if(i != 0){
	        InOrderStart(P[i].ps_fs);
	        printf("%d ", P[i].info);
	        InOrderStart(P[i].ps_nb);	
		}
	}
	
	InOrderStart(1);
	
	printf("\n");
}

void PostOrder (Isi_Tree P){
	void PostOrderStart(address i){
		if(i != 0){
	        PostOrderStart(P[i].ps_fs);
	        PostOrderStart(P[i].ps_nb);	
	        printf("%d ", P[i].info);
		}
	}
	
	PostOrderStart(1);
	
	printf("\n");
}

void Level_order(Isi_Tree X, int Maks_node) {
    address queue[Maks_node];
    int front = 0, rear = 0;

    if (X[1].info != 0) {
        queue[rear++] = 1;
    }

    while (front < rear) {
        address current = queue[front++];
        printf("%d ", X[current].info);

        address child = X[current].ps_fs;
        while (child != 0) {
            queue[rear++] = child;
            child = X[child].ps_nb;
        }
    }
    printf("\n");
}

void PrintTree(Isi_Tree P) {
	
	if(!IsEmpty(P)){
		printf("\nSeluruh Node pada Non Binary Tree:\n");
	
		int a = 1;
		
		while(a <= 5){
			printf("\n--> Indeks ke-%d", a);
			printf("\n------------------------------------");
			printf("\ninfo array ke%d\t: %d", a, P[a].info);
			printf("\nfirst son array ke%d\t: %d", a, P[a].ps_fs);
			printf("\nnext brother array ke%d\t: %d", a, P[a].nb);
			printf("\nparent array ke%d\t: %d", a, P[a].pr);
			printf("\n------------------------------------\n");
		}
	}else{
		printf("\nTree kosong.\n");
	}
	
	/*
    void printSubTree(address idx, int depth, boolean isLast) {
        if (idx == 0 || P[idx].info == 0) return;

        for (int i = 0; i < depth; i++) {
            if (i == depth - 1) {
                printf(isLast ? "   " : "|  ");
            } else {
                printf("   ");
            }
        }

        if (depth > 0) {
            printf(isLast ? "\\--" : "|--");
        }
        printf("%d\n", P[idx].info);

        int count = 0;
        address child = P[idx].ps_fs;
        while (child != 0) {
            count++;
            child = P[child].ps_nb;
        }

        child = P[idx].ps_fs;
        int i = 0;
        while (child != 0) {
            printSubTree(child, depth + 1, i == count - 1);
            child = P[child].ps_nb;
            i++;
        }
    }

    if (!IsEmpty(P)) {
        printSubTree(1, 0, 1); 
    } else {
        printf("Pohon kosong.\n");
    }*/
}

boolean Search(Isi_Tree P, infotype X) {
	int i = 1;
    while (i <= jml_maks) {
        if (P[i].info == X) return 1;
        i++;
    }
    return 0;
}

int nbElmt(Isi_Tree P) {
    int count = 0;
    int i = 1;
    while (i <= jml_maks) {
        if (P[i].info != 0) count++;
        i++;
    }
    return count;
}

int nbDaun(Isi_Tree P) {
    int count = 0;
    int i = 1;
    while (i <= jml_maks) {
        if (P[i].info != 0 && P[i].ps_fs == 0) {
            count++;
        }
        i++;
    }
    return count;
}

int Level(Isi_Tree P, infotype X) {
    for (int i = 1; i <= jml_maks; i++) {
        if (P[i].info == X) {
            int level = 0;
            address temp = P[i].ps_pr;
            while (temp != 0) {
                level++;
                temp = P[temp].ps_pr;
            }
            return level;
        }
    }
    return -1;
}

int Depth (Isi_Tree P){
	if (IsEmpty(P)) return 0;
	
	int countDepth(address i) {
	    if (i == 0) return 0;
	    int maxChildDepth = 0;
	    address child = P[i].ps_fs;
	    while (child != 0) {
	        int depth = countDepth(child);
	        if (depth > maxChildDepth) maxChildDepth = depth;
	        child = P[child].ps_nb;
	    }
	    return maxChildDepth;
	}
	
	return countDepth(1);
}

int Max(infotype Data1, infotype Data2) {
    return (Data1 > Data2) ? Data1 : Data2;
}
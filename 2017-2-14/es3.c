#include <stdio.h>
#define DIM 4

void ricercaMultipli(int mat[DIM][DIM]) {
	int i, j;
	int maxRiga, maxColonna;
	int multipli=0;
	int indexRiga, indexColonna;
	maxRiga=0;
	maxColonna=0;
	
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			if (mat[i][j]%3==0) {
				multipli=multipli+1;
			} else {
			}
		}
		if (multipli>maxRiga) {
			maxRiga=multipli;
			indexRiga=i;
		} else {
		}
		multipli=0;
	}
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			if (mat[j][i]%3==0) {
				multipli=multipli+1;
			} else {
			}
		}
		if (multipli>maxColonna) {
			maxColonna=multipli;
			indexColonna=i;
		}
		multipli=0;
	}
	for (i=0; i<DIM; i=i+1) {
		mat[indexRiga][i]=0;
		mat[i][indexColonna]=0;
	}
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Riga con max multipli: %d", indexRiga);
	printf("\nColonna con max multipli: %d", indexColonna);
}

int main() {
	int mat[DIM][DIM];
	printf("Inserimento dati della matrice:\n");
	int i;
	int j;
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("Inserisci elemento della riga %d, colonna %d", i+1, j+1);
			scanf("%d", &mat[i][j]); 
		}
	}
	printf("Matrice inserita:\n");
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	ricercaMultipli(mat);
	getch();
	return 0;
}

#include <stdio.h>
#define DIM 4

void funzione(int mat[][DIM], int m) {
	int i,j;
	int counterNumeri=0;
	int counterMultipli=0;
	
	for(i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			if (mat[i][j]<=m) {
				counterNumeri=counterNumeri+1;
			} else {
			}
		}
	}
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			if (mat[i][j]%m==0) {
				counterMultipli=counterMultipli+1;
			} else {
			}
		}
	}
	
	if (counterNumeri==0) {
		printf("Non abbiamo numeri che soddisfano la richiesta di essere <=m: -1\n");
		printf("Il numero dei multipli risulta: %d", counterMultipli);
	} else {
		printf("Numeri che soddisfano la richiesta di essere <m: %d\n", counterNumeri);
		printf("Il numero dei multipli risulta: %d", counterMultipli);
	}
}

int main() {
	int mat[DIM][DIM];
	int i;
	int j;
	int m;
	printf("Inserisci elementi della matrice:\n");
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("Inserisci elemento riga %d, colonna %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Inserisci il numero m: ");
	scanf("%d", &m);
	printf("Matrice inserita:\n");
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	funzione(mat, m);
	return 0;
	getch();
	
	
	
}


#include <stdio.h>
#define DIM 4

void cercaMultipli(int matrixInput[DIM][DIM]) {
	int i;
	int j;
	int contatoreRiga[DIM];
	int contatoreColonna[DIM];
	int indexRiga;
	int indexColonna;
	int maxRiga;
	int maxColonna;
	int matrixCoppy[DIM][DIM];
	
	for (i=0; i<DIM; i++) {
		contatoreRiga[i]=0;
		contatoreColonna[i]=0;
	}
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			matrixCoppy[i][j]=matrixInput[i][j];
		}
	}
	/* Ricerca multipli nelle colonne */
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (matrixInput[i][j]%3==0) {
				contatoreRiga[i]=contatoreRiga[i]+1;
			}else{
			}
			if (matrixInput[j][i]%3==0) {
				contatoreColonna[i]=contatoreColonna[i]+1;
			}
		}
	}
	maxRiga=contatoreRiga[0];
	indexRiga=0;
	for (i=0; i<DIM; i++) {
		if (maxRiga<contatoreRiga[i]) {
			maxRiga=contatoreRiga[i];
			indexRiga=i;
		}
	}
	maxColonna=contatoreColonna[0];
	indexColonna=0;
	for (i=0; i<DIM; i++) {
		if (maxColonna<contatoreColonna[i]) {
			maxColonna=contatoreColonna[i];
			indexColonna=i;
		}
	}
	printf("La riga %d contiene il maggior numero di multipli di 3.\n", indexRiga);
	printf("La colonna %d contiene il maggior numero di multipli di 3.\n", indexColonna);
	for (i=0; i<DIM; i++) {
		matrixCoppy[indexRiga][i]=0;
		matrixCoppy[i][indexColonna]=0;
	}
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", matrixCoppy[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matrix[DIM][DIM];
	int i;
	int j;
	
	printf("Inserisci gli elementi della matrice:\n");
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	cercaMultipli(matrix);
	getch();
	return 0;
}

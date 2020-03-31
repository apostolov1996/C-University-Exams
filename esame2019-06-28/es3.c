#include <stdio.h>
#define DIM 5

void funzione(int matrixInput[DIM][DIM], int matrixOutput[DIM][DIM]) {
	int i;
	int j;
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (j-i>=0) {
				matrixOutput[i][j]=matrixInput[i][j-i];
			} else {
				matrixOutput[i][j]=matrixInput[i][j-i+DIM];
			}
		}
	}
}

int main () {
	int i;
	int j;
	int matrixInput[DIM][DIM];
	
	int matrixOutput[DIM][DIM];
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
		matrixOutput[i][j]=0;
		}
	}
	
	printf("Inserisci i dati della matrice input:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrixInput[i][j]);
		}
	}
	funzione(matrixInput, matrixOutput);
	printf("La matrice modificata risulta essere:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", matrixOutput[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
	
}

#include <stdio.h>
#include <string.h>
#define DIM 4

void ricercaMax (int matrixInput[DIM][DIM], int arrayInput[DIM]) {
	int i;
	int j;
	int max;
	
	for (i=0; i<DIM; i++) {
		max=matrixInput[i][0];
		arrayInput[i]=0;
		for (j=0; j<DIM; j++) {
			if (max<matrixInput[i][j]) {
				max=matrixInput[i][j];
				arrayInput[i]=j;
			} else {
			}
		}
	}
}

int main () {
	int matrix[DIM][DIM];
	int array[DIM];
	int i;
	int j;
	
	printf("Inserisci gli elementi della matrice:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("elemento[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
		array[i]=0;
	}
	printf("La matrice inserita risulta essere la seguente:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	
	ricercaMax(matrix, array);
	
	printf("La posizione dei valori massimi risulta essere:\n");
	
	for (i=0; i<DIM; i++) {
		printf("%d ", array[i]);
	}
	
}

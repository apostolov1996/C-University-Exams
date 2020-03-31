#include <stdio.h>
#include <string.h>
#define DIM 3

void funzione(int matrixInput[DIM][DIM]) {
	int matrixFrequenza[DIM][DIM];
	int i;
	int j;
	int k;
	int p;
	int max;
	int carattere;
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			matrixFrequenza[i][j]=0;
		}
	}
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			for (k=0; k<DIM; k++) {
				for (p=0; p<DIM; p++) {
					if (matrixInput[i][j]==matrixInput[k][p]) {
						matrixFrequenza[i][j]=matrixFrequenza[i][j]+1;
					} else {
					}
				}
			}
		}
	}
	
	/* Da questa trovo la matrice delle frequenze, devo individuare ora la massima */
	
	max=matrixFrequenza[0][0];
	carattere=matrixInput[0][0];
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (matrixFrequenza[i][j]>max) {
			max=matrixFrequenza[i][j];
			carattere=matrixInput[i][j];	
		} else {
		}
		}
	}
	printf("Il carattere piu frequente risulta: %d\n", carattere);
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (matrixInput[i][j]==carattere) {
				printf("x ");
			} else {
				printf("%d ", matrixInput[i][j]);
			}
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
			printf("Inserisci matrix[%d][%d]: ",i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	funzione(matrix);
	getch();
	return 0;
}

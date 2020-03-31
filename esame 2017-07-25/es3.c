#include <stdio.h>
#define DIM 4

void funzione (int mat1[DIM][DIM], int mat2[DIM][DIM], int *counter1, int *counter2, int *counter3) {
	int i;
	int j;
	int contatore1=0;
	int contatore2=0;
	int contatore3=0;
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (mat1[i][j]>mat2[i][j]) {
				contatore1=contatore1+1;
			} else if (mat1[i][j]<mat2[i][j]) {
				contatore2=contatore2+1;
			} else {
				contatore3=contatore3+1;
			}
		}
	}
	*counter1=contatore1;
	*counter2=contatore2;
	*counter3=contatore3;
}

int main() {
	int matrix1[DIM][DIM];
	int matrix2[DIM][DIM];
	int i;
	int j;
	int cont1;
	int cont2;
	int cont3;
	printf("Inserisci i dati della matrice1:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("Matrix1[%d][%d]: ", i, j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Inserisci i dati della matrice2:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("Matrix2[%d][%d]: ", i, j);
			scanf("%d", &matrix2[i][j]);
		}
	}
	funzione (matrix1, matrix2, &cont1, &cont2, &cont3);
	printf("Contatore1: %d\n", cont1);
	printf("Contatore2: %d\n", cont2);
	printf("Contatore3: %d\n", cont3);
	getch();
	return 0;
}

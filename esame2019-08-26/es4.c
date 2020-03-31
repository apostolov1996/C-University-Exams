#define DIM 5
#include <stdio.h>

int analisiMatrice (int matrixInput[DIM][DIM]) {
	int risultato;
	int i;
	int j;
	int controllerCrescenza=0;
	int sommaSuperiore=0;
	int sommaInferiore=0;
	/* Verifica se i numeri lungo la diagonale principale sono crescenti */
	for (i=0; i<DIM; i++) {
		if (matrixInput[i][i]<=matrixInput[i+1][i+1] && i!=(DIM-1)) {
			controllerCrescenza=0;
		} else if (matrixInput[i][i]>matrixInput[i+1][i+1] && i!=(DIM-1)) {
			controllerCrescenza=1;
			i=DIM;
		}
	}
	/* Calcolo delle somme */
	for (i=0; i<(DIM-1); i++) {
		for (j=(i+1); j<DIM; j++) {
			sommaSuperiore=sommaSuperiore+matrixInput[i][j];
			sommaInferiore=sommaInferiore+matrixInput[j][i];
		}
	}
	if (sommaInferiore==sommaSuperiore && controllerCrescenza==0) {
		risultato=1;
	} else {
		risultato=0;
	}
	return risultato;
}

int main() {
	int matrix[DIM][DIM];
	int i;
	int j;
	int risultato;
	
	printf("Inserisci i dati della matrice:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	risultato=analisiMatrice(matrix);
	printf("Risultato: %d", risultato);
	getch();
	return 0;
}

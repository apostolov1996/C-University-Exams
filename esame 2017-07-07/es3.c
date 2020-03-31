/* INPUT: 1) Matrice 4x4 di interi positivi !
          2) m=intero
    OUTPUT:
    1) Calcola il massimo valore minore o uguale ad m, se tale non esiste restituisce -1
    2) Il numero di multipli di m, presenti nella matrice.
*/

#include <stdio.h>
#define DIM 4

void funzione (int matrixInput[DIM][DIM], int m, int *massimo, int *multipli) {
	int i;
	int j;
	int controller=0;
	int max;
	int indexRiga;
	int indexColonna;
	int counter=0;
	/* La funzione controlla se la matrice ha termini positivi */
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (matrixInput[i][j]>=0) {
				controller=controller+0;
			} else {
				controller=controller+1;
			}
		}
	}
	if (controller==0) {
		max=-1;
		for (i=0; i<DIM; i++) {
			for (j=0; j<DIM; j++) {
				if (max<matrixInput[i][j] && m>=matrixInput[i][j]) {
					max=matrixInput[i][j];
					indexRiga=i;
					indexColonna=j;
				} 
				if (matrixInput[i][j]%m==0) {
					counter=counter+1;
				}
			}
		}
		*massimo=max;
		*multipli=counter;
	} else {
		printf("I dati inseriti non soddisfano le richieste iniziali.\n");
	}
	
}

int main() {
	int matrix[DIM][DIM];
	int m;
	int i;
	int j;
	int numeroMultipli;
	int massimo;
	
	printf("Inserisci i dati della matrice:\n");
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++ ) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("Inserisci il numero m: ");
	scanf("%d", &m);
	funzione(matrix, m, &massimo, &numeroMultipli);
	printf("Il massimo risulta essere: %d", massimo);
	printf("\nIl numero dei multipli di m: %d", numeroMultipli);
	
	getch();
	return 0;
}

#include <stdio.h>
#define DIM 5

void funzione (int matrixInput[DIM][DIM], int arrayInput[DIM], int *contatore) {
	int i;
	int j;
	int k;
	int logical[DIM][DIM];
	int arrayController[DIM][DIM];
	int counter=0;
	int somma[DIM];
	for (i=0; i<DIM; i++) {
		somma[i]=0;
	}
	/* lungo le righe di tale matrice, verifico la coincidenza tra la matrixInput e arrayInput
	se abbiamo una riga di tutti termini pari a 0, vuoldire che tale riga rappresenta una permutazione del vettore inserito nell'array, altrimenti abbiamo
	delle discordanze e di conseguenza non abbiamo una permutazione. */
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			arrayController[i][j]=arrayInput[j];
		}
	}
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			for (k=0; k<DIM; k++) {
				if (matrixInput[i][j]==arrayController[i][k]) {
					logical[i][j]=0;
					arrayController[i][k]=0;
					k=DIM;
				} else {
					logical[i][j]=1;
				}
			}
		}
	}
	/* a questo punto cosiderando la matrice logical, riseco a contare quante righe rappresentano delle permutazioni */
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			somma[i]=somma[i]+logical[i][j];
		}
	}
	for (i=0; i<DIM; i++) {
		if (somma[i]==0) {
			counter=counter+1;
		}
	}
	*contatore=counter;
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", logical[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matrix[DIM][DIM];
	int array[DIM];
	int cont;
	int i;
	int j;
	printf("Inserisci i dati della matrice:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Inserisci i dati dell'array:\n");
	for (i=0; i<DIM; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	funzione(matrix, array, &cont);
	printf("Il numero di permutazioni risulta essere: %d", cont);
	getch();
	return 0;
}

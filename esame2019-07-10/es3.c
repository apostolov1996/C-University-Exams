#define DIM 5
#include <stdio.h>

int verificaMatrice(int matrixInput[DIM][DIM]) {
	int i;
	int j;
	/* Verifica se i termini sono disposti in ordine crescetnte */
	int controller[DIM];
	int somme[DIM];
	int counterPari=0;
	int risultato;
	int counterCrescenti=0;
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (j!=(DIM-1) && matrixInput[i][j]<matrixInput[i][j+1]) {
				controller[i]=0;
			} else if (j!=(DIM-1) && matrixInput[i][j]>matrixInput[i][j+1]) {
				controller[i]=1;
				j=DIM;
			} else {
			}
		}
	}
	for (i=0; i<DIM; i++) {
		counterCrescenti=counterCrescenti+controller[i];
	}
	/* Calcolo somme e verifica quali sono pari */
	for (i=0; i<DIM; i++) {
		somme[i]=0;
	}
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			somme[i]=somme[i]+matrixInput[i][j];
		}
	}
	for (i=0; i<DIM; i++) {
		if (somme[i]%2==0) {
			counterPari=counterPari+1;
		}
	}
	if (counterPari>=2 && counterCrescenti==0) {
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
	
	printf("Inserisci gli elementi della matrice:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	risultato=verificaMatrice(matrix);
	printf("Il risultato finale risulta essere: %d", risultato);
	getch();
	return 0;
}

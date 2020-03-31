#define DIM 5
#include <stdio.h>

void funzione (int mat1[DIM][DIM], int mat2[DIM][DIM], int *maxRiga, int *minRiga) {
	int arrayMaxRiga[DIM];
	int arrayMinRiga[DIM];
	int i;
	int j;
	int maxMaggiori=0;
	int maxMinori=0;
	for (i=0; i<DIM; i++) {
		arrayMaxRiga[i]=0;
		arrayMinRiga[i]=0;
	}
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (mat1[i][j]>mat2[i][j]) {
				arrayMaxRiga[i]=arrayMaxRiga[i]+1;
			} else {
				arrayMinRiga[i]=arrayMinRiga[i]+1;
			}
		}
	}
	for (i=0; i<DIM; i++) {
		if (maxMaggiori<arrayMaxRiga[i]) {
			maxMaggiori=arrayMaxRiga[i];
		}
		if (maxMinori<arrayMinRiga[i]) {
			maxMinori=arrayMinRiga[i];
		}
	}
	*maxRiga=maxMaggiori;
	*minRiga=maxMinori;
}

int main() {
	int matrix1[DIM][DIM];
	int matrix2[DIM][DIM];
	int i,j;
	int indexMaggiori;
	int indexMinori;
	
	printf("Inserisci i dati della matrice 1:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix1[%d][%d]: ", i, j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Inserisci i dati della matrice2:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix2[%d][%d]: ", i, j);
			scanf("%d", &matrix2[i][j]);
		}
	}
	funzione(matrix1, matrix2, &indexMaggiori, &indexMinori);
	printf("La riga con piu elementi maggiori: %d\n", indexMaggiori);
	printf("La riga con piu elementi minori: %d\n", indexMinori);
	getch();
	return 0;
}

/* Ricerca posizione numeri massimi */
/* Input matrice 4x4 e un array di dimensione 4

per ogni riga i cerca il massimo e memorizza la sua posizione (considerando la prima occorrenza) */

#include <stdio.h>
#define DIM 4
void ricercaMax(int mat[DIM][DIM], int array[DIM]) {
	int max;
	int i;
	int j;
	for (i=0; i<DIM; i=i+1) {
		max=mat[i][0];
		array[i]=0;
		for (j=0; j<DIM; j=j+1) {
			if (max<mat[i][j]) {
				max=mat[i][j];
				array[i]=j;
			} else {
			}
		}
	}
}

int main() {
	int mat[DIM][DIM];
	int array[DIM];
	int i;
	int j;
	
	printf("Inserisci gli elementi della matrice:\n");
	
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("Inserisci riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("La matrice inserita risulta essere:\n");
	for (i=0; i<DIM; i=i+1) {
		for (j=0; j<DIM; j=j+1) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	ricercaMax(mat, array);
	printf("Risultato:\n");
	for (i=0; i<DIM; i=i+1) {
		printf("%d ", array[i]);
	}
	getch();
	return 0;
}


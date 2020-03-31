#include <stdio.h>
#define DIM 10

int main() {
	int array[DIM];
	int arrayOutput[DIM][DIM];
	int i;
	int j;
	int contatore;
	int k;
	
	printf("Inserisci dati:\n");
	for (i=0; i<DIM; i++) {
		printf("Elemento %d: ", i);
		scanf("%d", &array[i]);
	}
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++)
		arrayOutput[i][j]=0;
	}
	
	for (i=0; i<DIM; i++) {
		contatore=0;
		for (j=i; j<DIM; j++) {
			if (array[j]%2==0) {
				arrayOutput[i][contatore]=array[j];
				array[j]=0;
				contatore=contatore+1;
			} else {
				j=DIM;
			}
		}
		if (contatore>1) {
			printf("\n");
			for (k=0; k<contatore; k++) {
				if (arrayOutput[i][k]!=0) {
					printf("%d ", arrayOutput[i][k]);
				} else {
				}
			}
		} else {
		}
	}
	
	getch();
	return 0;
	

}

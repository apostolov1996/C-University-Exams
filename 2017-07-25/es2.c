#include <stdio.h>
#define DIM 10

int main() {
	int arrayInput[DIM];
	int arrayOutput[DIM];
	int i, j, somma;
	
	printf("Inserisci elementi Input:\n");
	for (i=0; i<DIM; i++) {
		printf("Elemento %d: ", i+1);
		scanf("%d", &arrayInput[i]);
	}
	for (i=0; i<DIM; i++) {
		if (i%2==0) {
			somma=0;
			for (j=0; j<=i; j++) {
				somma=somma+arrayInput[j];
			}
			arrayOutput[i]=somma;
		} else {
			arrayOutput[i]=arrayInput[i]*arrayInput[i-1];
		}
	}
	printf("Risultato Finale: ");
	for (i=0; i<DIM; i++) {
		printf("%d ", arrayOutput[i]);
	}
	return 0;
	getch();
}

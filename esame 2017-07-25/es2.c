#include <stdio.h>
#define DIM 10

int main () {
	int arrayInput[DIM];
	int arrayOutput[DIM];
	int i;
	int j;
	
	printf("Inserisci i dati dell'array di input:\n");
	for (i=0; i<DIM; i++) {
		printf("arrayInput[%d]: ", i);
		scanf("%d", &arrayInput[i]);
		arrayOutput[i]=0;
	}
	arrayOutput[0]=arrayInput[0];
	for (i=1; i<DIM; i++) {
		if (i%2==0) {
			for (j=0; j<=i; j++) {
				arrayOutput[i]=arrayOutput[i]+arrayInput[j];
			}
		} else {
			arrayOutput[i]=arrayInput[i]*arrayInput[i-1];
		}
	}
	
	printf("L'array di output: ");
	for (i=0; i<DIM; i++) {
		printf("%d ", arrayOutput[i]);
	}
	getch();
	return 0;
}

#include <stdio.h>
#define DIM 10

int main() {
	int arrayInput[DIM];
	int arrayOutput[DIM];
	int i, j;
	int counter=0;
	
	for (i=0; i<DIM; i=i+1) {
		printf("Inserisci numero %d: ", i+1);
		scanf("%d", &arrayInput[i]);
	}
	printf("Array Inserito: ");
	for (i=0; i<DIM; i=i+1) {
		printf("%d ", arrayInput[i]);
	}
	printf("\n");
	
	for (i=0; i<DIM; i=i+1) {
		if (arrayInput[i]%2==0) {
			for (j=i+1; j<DIM; j=j+1) {
				if (arrayInput[i]==arrayInput[j]) {
					arrayOutput[i]=arrayInput[i];
					counter=counter+1;
					j=DIM;
				} else {
				}
			}
		} else {
		}
	}
	printf("Risultato finale: ");
	for (i=0; i<counter; i=i+1) {
		printf("%d ", arrayOutput[i]);
	}
	return 0;
	getch();
}

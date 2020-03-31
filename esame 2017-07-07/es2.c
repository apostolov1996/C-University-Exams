#include <stdio.h>
#define DIM 10

int main () {
	int arrayInput[DIM];
	int arrayOutput[DIM];
	int frequenza[DIM];
	int temp[DIM];
	int i;
	int j;
	
	printf("Inserisci i dati dell Array\n");
	
	for (i=0; i<DIM; i++) {
		printf("arrayInput[%d]: ", i);
		scanf("%d", &arrayInput[i]);
		frequenza[i]=0;
		arrayOutput[i]=0;
	}
	/* Calcolo le frequenze dei numeri */
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (arrayInput[i]==arrayInput[j]) {
				frequenza[i]=frequenza[i]+1;
			}
		}
	}
	printf("I numeri inseriti sono: ");
	for (i=0; i<DIM; i++) {
		printf("%d ", arrayInput[i]);
	}
	printf("\n");
	printf("Le loro frequenze sono: ");
	for (i=0; i<DIM; i++) {
		printf("%d ", frequenza[i]);
	}
	
	for (i=0; i<DIM; i++) {
		if (arrayInput[i]%2==0 && frequenza[i]>1) {
			arrayOutput[i]=arrayInput[i];
		}
	}
	/* Cancella le ripetizioni */
	for (i=0; i<DIM; i++) {
		for (j=i+1; j<DIM; j++) {
			if (arrayOutput[i]==arrayOutput[j]) {
				arrayOutput[j]=0;
			}
		}
	}
	for (i=0; i<DIM; i++) {
		temp[i]=arrayOutput[i];
		arrayOutput[i]=0;
	}
	/* Stampa risultato */
	printf("\nI numeri primi, contenuti piu' di una volta sono: ");
	for (i=0; i<DIM; i++) {
		for (j=i; j<DIM; j++) {
			if (temp[j]!=0) {
				arrayOutput[i]=temp[j];
				temp[j]=0;
				j=DIM;
			}
		}
	}
	for (i=0; i<DIM; i++) {
		if (arrayOutput[i]!=0) {
			printf("%d ", arrayOutput[i]);
	    }
	}
	getch();
	return 0;
	
}

#include <stdio.h>
#define DIM 5

int main () {
	int numeri[DIM];
	int i;
	int controller;
	
	printf("Inserisci il vettore dei numeri:\n");
	for (i=0; i<DIM; i++) {
		printf("Numero %d: ", i);
		scanf("%d", &numeri[i]);
	}
	
	for (i=0; i<DIM; i++) {
		if (numeri[i]>=0 && numeri[i]<=2) {
			controller=0; /* Questo equivale a TRUE */
			i=DIM;
		} else {
			controller=1; /* Questo equivale a FALSE */
		}
	}
	/* Questo riproduce l'istruzione NOT */
	if (controller==0) {
		controller=1;
	} else {
		controller=0;
	}
	if (controller==0) {
		printf("TRUE");
	} else {
		printf("FALSE");
	}
	getch();
	return 0;
}

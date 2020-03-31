#include <stdio.h>
#define DIM 5

int main() {
	int matrix[DIM][DIM];
	int i;
	int j;
	int temp;
	int dispari[DIM];
	int multipli[DIM];
	int controllerSomme[DIM]; /* Assume valore 1 se vero, 0 se falso */
	int controllerDispari[DIM];
	int controllerMultipli[DIM];
	int sommaRigaPari[DIM];
	int sommaRiga[DIM];
	int contatore=0;
	for (i=0; i<DIM; i++) {
		dispari[i]=0;
		sommaRigaPari[i]=0;
		sommaRiga[i]=0;
		multipli[i]=0;
	}
	
	printf("Inserisci i dati della matrice:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	/* calcolo degli elementi dispari */
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (matrix[i][j]>0) {
				temp=matrix[i][j];
				if (temp%2!=0) {
					dispari[i]=dispari[i]+1;
				}
			} else if (matrix[i][j]<0) {
				temp=-matrix[i][j];
				if (temp%2!=0) {
					dispari[i]=dispari[i]+1;
				}
			}
		}
	}
	for (i=0; i<DIM; i++) {
		if (dispari[i]>=2) {
			controllerDispari[i]=1;
		} else {
			controllerDispari[i]=0;
		}
	}
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			sommaRiga[i]=sommaRiga[i]+matrix[i][j];
			if (j%2==0) {
				sommaRigaPari[i]=sommaRigaPari[i]+matrix[i][j];
			}
		}
	}
	
	if (sommaRigaPari[0]>=0) {
		controllerSomme[0]=1;
	} else {
		controllerSomme[0]=0;
	}
	
	for (i=1; i<DIM; i++) {
		if (sommaRigaPari[i]>=sommaRiga[i-1]) {
			controllerSomme[i]=1;
		} else {
			controllerSomme[i]=0;
		}
	}
	
	/* verifica multipli */
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (matrix[i][j]>0) {
				temp=matrix[i][j];
				if (temp%3==0) {
					multipli[i]=multipli[i]+1;
				}
			} else if (matrix[i][j]<0) {
				temp=-matrix[i][j];
				if (temp%3==0) {
					multipli[i]=multipli[i]+1;
				}
			}
		}
	}
	for (i=0; i<DIM; i++) {
		if (multipli[i]>2) {
			controllerMultipli[i]=0;
		} else {
			controllerMultipli[i]=1;
		}
	}
	for (i=0; i<DIM; i++) {
		if (controllerSomme[i]==1 && controllerDispari[i]==1 && controllerMultipli[i]==1) {
			contatore=contatore+1;
		}
	}
	printf("\nIl numero di righe che soddisfano tutte le richieste risulta: %d", contatore);
	getch();
	return 0;
}

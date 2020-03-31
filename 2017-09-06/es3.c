#include <stdio.h>
#define DIM 5

void funzione (int array[DIM], int matrix[DIM][DIM], int *contatore) {
	int i;
	int j;
	int k;
	int coppy[DIM][DIM];
	int verifica;
	*contatore=0;
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			coppy[i][j]=matrix[i][j];
		}
	}
	for (i=0; i<DIM; i++) {
		for (k=0; k<DIM; k++) {
			for (j=0; j<DIM; j++) {
				if (array[k]==coppy[i][j]) {
					coppy[i][j]=0;
					j=DIM;
				} else {
				}
			}
		}
	}
	
	for (i=0; i<DIM; i++) {
		verifica=0;
		for (j=0; j<DIM; j++) {
			if (coppy[i][j]==0) {
				verifica=verifica;
			} else {
				verifica=verifica+1;
			}
		}
		if (verifica==0) {
			*contatore=*contatore+1;
		} else {
		}
	}
	printf("\n");
	printf("Matrice ausiliaria\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", coppy[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int matrix[DIM][DIM];
	int array[DIM];
	int i;
	int j;
	int contatore;
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("Inserisci matrix[%d][%d]= ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\n\n");
	for (i=0; i<DIM; i++) {
		printf("Inserisci array[%d]= ", i);
		scanf("%d", &array[i]);
	}
	printf("La matrice inserita risulta essere:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("L'array inserito risulta essere: ");
	for (i=0; i<DIM; i++) {
		printf("%d ", array[i]);
	}
	
	funzione(array, matrix, &contatore);
	printf("\nContatore: %d", contatore);
	
	
	getch();
	return 0;

}

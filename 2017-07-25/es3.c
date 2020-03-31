#include <stdio.h>
#define DIM 4

void funzione(int m1[][DIM], int m2[][DIM]) {
	int i,j;
	int contatore1=0;
	int contatore2=0;
	int contatore3=0;
	
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			if (m1[i][j]>m2[i][j]) {
				contatore1=contatore1+1;
			} else if (m1[i][j]<m2[i][j]) {
				contatore2=contatore2+1;
			} else {
				contatore3=contatore3+1;
			}
		}
	}
	printf("Contatore di m1>m2: %d\n", contatore1);
	printf("Contatore di m1<m2: %d\n", contatore2);
	printf("Contatore di m1=m2: %d\n", contatore3);
}

int main() {
	int m1[DIM][DIM];
	int m2[DIM][DIM];
	int i, j;
	printf("Inserisci Matrix 1:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("Inserisci elemento riga %d, colonna %d: ", i+1, j+1); 
			scanf("%d", &m1[i][j]);
		}
	}
	printf("Inserisci Matrix 2:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("Inserisci elemento riga %d, colonna %d: ", i+1, j+1);
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("Matrice 1:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrice 2:\n");
	for (i=0; i<DIM; i++) {
		for (j=0; j<DIM; j++) {
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	funzione (m1, m2);
	return 0;
	getch();
}


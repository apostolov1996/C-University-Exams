#include <stdio.h>
#include <string.h>

int main () {

	int matrixInput[5][5];
	int elemento;
	int i;
	int j;
	int m;
	int n;
	int max;
	int matrixFrequenza[5][5];
	printf("Inserisci la matrice.\n");
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			printf("Inserisci elemento riga %d, colonna %d: ", i+1, j+1);
			scanf("%d", &matrixInput[i][j]);
		}
	}
	printf("La matrice inserita risulta essere:\n");
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			printf("%d ", matrixInput[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			matrixFrequenza[i][j]=0;
		}
	}
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			for (n=0; n<5; n=n+1) {
				for (m=0; m<5; m=m+1) {
					if (matrixInput[i][j]==matrixInput[n][m] && i!=n && j!=m) {
						matrixFrequenza[i][j]=matrixFrequenza[i][j]+1;
					} else {
					}
				}
			}
		}
	}
	max=matrixFrequenza[0][0];
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			if (max<matrixFrequenza[i][j]) {
				max=matrixFrequenza[i][j];
				elemento=matrixInput[i][j];
			} else {
			}
		}
	}
	
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			if (matrixInput[i][j]==elemento) {
				matrixInput[i][j]='\0';
			} else {
			}
		}
	}
	printf("L'elemento piu' frequente risulta essere: %d\n", elemento);
	printf("La matrice pulita in output invece risulta:\n");
	for (i=0; i<5; i=i+1) {
		for (j=0; j<5; j=j+1) {
			printf("%d ", matrixInput[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}


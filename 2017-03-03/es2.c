#include <stdio.h>
int main() {
	int array[10];
	int i, arrayOutput[10];
	int k,j;
	printf("Inserisci dati:\n");
	for (i=0; i<10; i++) {
		printf("Elemento %d: ", i+1);
		scanf("%d", &array[i]);
	}
	for (i=0; i<10; i++) {
		if (array[i]%2==0) {
			k=0;
			arrayOutput[k]=array[i];
			for (j=i+1; j<10; j++) {
				if (array[j]%2==0) {
					k=k+1;
					arrayOutput[k]=array[j];
				} else {
					j=10;
				}
			}
			if (k>0) {
				for (j=0; j<=k; j++) {
					printf("%d ", arrayOutput[j]);
				}
			} else {
			}
		} else {
		}
		printf("\n");
	}
	getch();
	return 0;
}

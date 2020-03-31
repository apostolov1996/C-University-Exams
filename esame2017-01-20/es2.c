#include <stdio.h>
#include <string.h>
#define DMAX 26

int main() {
	int num;
	int max;
	int frequenza;
	char nomeFile[DMAX+1];
	
	printf("Inserisci il nome del file da cui bisogna leggere i numeri: ");
	scanf("%s", nomeFile);
	
	FILE *fp;
	fp=fopen(nomeFile, "r");
	frequenza=0;

	if (fp) {
		fscanf(fp, "%d", &max);
		while (!feof(fp)) {
			fscanf(fp, "%d", &num);
			if (num>max) {
				max=num;
			} else {
			}
		}
		fclose(fp);
		printf("Il massimo risulta essere: %d\n", max);
	} else {
		printf("Non posso aprire il file!\n");
	}
	fp=fopen(nomeFile, "r");
	if (fp) {
		while (!feof(fp)) {
			fscanf(fp, "%d", &num);
			if (num==max) {
				frequenza=frequenza+1;
			} else {
			}
		}
		fclose(fp);
		printf("La sua frequenza risulta: %d", frequenza);
	} else {
		printf("Non posso aprire il file!\n");
	}
	getch();
	return 0;
}

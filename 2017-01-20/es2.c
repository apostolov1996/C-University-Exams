#include <stdio.h>
#include <string.h>
int main () {
	int i;
	int num;
	int max;
	char name[20];
	FILE *fp;
	printf("Inserisci il nome del file: ");
	scanf("%s", name);
	
	fp=fopen(name, "r");
	if (fp) {
		fscanf(fp, "%d ", &max);
		while (!feof(fp)) {
			fscanf(fp, "%d ", &num);
			if (num>max) {
				max=num;
			} else {
			}
		}
		printf("Il massimo risulta essere: %d", max);
	} else {
		printf("Non posso aprire il file.\n");
	}
	fclose(fp);
	getch();
	return 0;
}

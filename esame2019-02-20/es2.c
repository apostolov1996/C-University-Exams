#include <stdio.h>
#include <string.h>
#define MAX_CHAR 15

int confrontastringhe (char string1[], char string2[]) {
	int risultato;
	int i;
	int minimo;
	int lunghezza1;
	int lunghezza2;
	int contatore=0;
	lunghezza1=strlen(string1);
	lunghezza2=strlen(string2);
	if (lunghezza1>lunghezza2) {
		minimo=lunghezza2;
	} else {
		minimo=lunghezza1;
	}
	for (i=0; i<minimo; i++) {
		if (string1[i]==string2[i]) {
			contatore=contatore+1;
			printf("%c", string1[i]);
		} else {
		}
	}
	printf(" ");
	risultato=contatore;
	return risultato;
}

int main() {
	int contatore=0;
	char str1[MAX_CHAR+1];
	char str2[MAX_CHAR+1];
	
	FILE *fp;
	fp=fopen("testo.txt", "r");
	
	if (fp) {
		fscanf(fp, "%s", str1);
		while(!feof(fp)) {
			fscanf(fp, "%s", str2);
			contatore=confrontastringhe(str1, str2)+contatore;
			strcpy(str1, str2);
		}
		printf("\nIl numero totale di caratteri risulta: %d", contatore);
		fclose(fp);
	} else {
		printf("Non posso aprire il file!");
	}
	getch();
	return 0;
}

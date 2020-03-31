#include <stdio.h>
#include <string.h>
#define MAX_CHAR 15

int analizzastringa (char str[], char c, int conteggio) {
	int i;
	int risultato;
	int lunghezza;
	int contatore=0;
	lunghezza=strlen(str);
	
	for (i=0; i<lunghezza; i++) {
		if (str[i]==c) {
			contatore=contatore+1;
		}
	}
	if (contatore==conteggio) {
		risultato=1;
	} else {
		risultato=0;
	}
	return risultato;
}

int main() {
	char string[MAX_CHAR+1];
	int conteggio=1;
	int i;
	char carattere;
	int analisi;
	
	FILE *fp;
	fp=fopen("testo.txt", "r");
	if (fp) {
		while(!feof(fp)) {
			fscanf(fp, "%s", string);
			carattere=string[0];
			analisi=analizzastringa(string, carattere, conteggio);
			if (analisi==1) {
				printf("%s\n", string);
			}
		}
		fclose(fp);
	} else {
		printf("Non posso aprire il file!\n");
	}
	getch();
	return 0;
}

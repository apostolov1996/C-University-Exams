#include <stdio.h>
#include <string.h>
#define DATA_LEN 8
#define CF_LEN 16
#define MAX_NOME 50
#define MAX_IND 100
#define MAX_TEL 12
#define MAX_BIGLIETTI 10
#define GIORNI 31
#define AGOSTO 8

typedef struct {
	int codice;
	int giorno, mese;
	float prezzo;
	int eta;
}bitlietto_t;

typedef struct {
	char codiceFiscale[CF_LEN+1];
	char nome[MAX_NOME+1];
	char cognome[MAX_NOME+1];
	char indirizzo[MAX_IND+1];
	char telefono[MAX_TEL+1];
	bitlietto_t biglietti[MAX_BIGLIETTI];
	int nBiglietti;
}cliente_t;

void ricercaMinori(cliente_t cliente[], int dim, char fileName[]) {
	int counter;
	int i;
	int j;
	int k;
	FILE *fp;
	fp=fopen(fileName, "w");
	if (fp) {
	
	    for (i=0; i<GIORNI; i=i+1) {
		    counter=0;
		    for (j=0; j<dim; j=j+1) {
			   for (k=0; k<cliente[i].nBiglietti; k=k+1) {
				   if (cliente[i].biglietti[k].eta>=18 && cliente[i].biglietti[k].mese==AGOSTO && cliente[i].biglietti[k].giorno==i) {
				    	counter=counter+1;
				    } else {
					}
			    }
		    }
		    fprintf(fp, "Giorno %d: %d minori.\n", i, counter);
	    }
	} else {
		printf("Non posso leggere il file.\n");
	}
	fclose(fp);
}

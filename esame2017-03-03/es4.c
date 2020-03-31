#include <stdio.h>
#include <string.h>
#define DATA_LEN 8
#define CF_LEN 16
#define MAX_NOME 50
#define MAX_IND 100
#define MAX_TEL 12
#define MAX_BIGLIETTI 10

typedef struct {
	int codice;
	int giorno, mese;
	float prezzo;
	int eta;
} biglietto_t;

typedef struct {
	char codiceFiscale[CF_LEN+1];
	char nome[MAX_NOME+1];
	char cognome[MAX_NOME+1];
	char indirizzo[MAX_IND+1];
	char telefono[MAX_TEL+1];
	biglietto_t biglietto[MAX_BIGLIETTI];
	int nBiglietti;
} cliente_t;

void ricercaMinori(cliente_t cliente[], int dim, char nomeFile[]) {
	int giorno;
	int i;
	int j;
	int contatore;
	FILE *fp;
	fp=fopen(nomeFile, "w");
	if (fp) {
	   for (giorno=1; giorno<=31; giorno++) {
		   contatore=0;
		   for (i=0; i<dim; i++) {
		     	for (j=0; j<cliente[i].nBiglietti; j++) {
			    	if (cliente[i].biglietto[j].eta<18 && cliente[i].biglietto[j].mese==8 && cliente[i].biglietto[j].giorno==giorno) {
					   contatore=contatore+1;
				    } else {
				    }
			    }
		    }
			fprintf(fp, "Giorno %d: %d minori\n", giorno, contatore);	
	    }
		fclose(fp); 
    } else {
    	printf("Non posso aprire il file.\n");
	}
}


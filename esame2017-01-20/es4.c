#include <stdio.h>
#include <string.h>
#define N_CONCESSIONARI 10
#define MAX_STR 30
#define MAX_TRG 7
#define MAX_AUTO_CONCE 50

typedef struct {
	char modello[MAX_STR+1], targa[MAX_TRG+1];
	int meseImmatricolazione, annoImmatricolazione;
} t_auto;

typedef struct {
	char piva[MAX_STR+1];
	char nome[MAX_STR+1], cognome[MAX_STR+1];
} t_persona;

typedef struct{
	int codiceConcessionario;
	t_persona gestore;
	t_auto automobile[MAX_AUTO_CONCE];
	int nAuto;
} t_concessionario;

void funzione (t_concessionario concessionario[], int nConcessionario) {
	int i;
	int j;
	int anno;
	anno=2015;
	
	for (i=0; i<nConcessionario; i++) {
		printf("Conc. %d, codice %d: gestore %s %s\n", i, concessionario[i].codiceConcessionario, concessionario[i].gestore.nome, concessionario[i].gestore.cognome);
		printf("Immatricolazioni anno: %d\n", anno);
		for (j=0; j<concessionario[i].nAuto; j++) {
			if (concessionario[i].automobile[j].annoImmatricolazione==anno) {
				printf("* mese %d: %s, %s\n", concessionario[i].automobile[j].meseImmatricolazione, concessionario[i].automobile[j].modello, concessionario[i].automobile[j].targa);
			} else {
			}
		}
	}
}

int main() {
	t_concessionario concessionario[10];
	funzione(concessionario, 10);
	getch();
	return 0;
}

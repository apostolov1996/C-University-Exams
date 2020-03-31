#include <stdio.h>
#include <string.h>
#define MAX_STR 30
#define MAX_AUTO_CONCE 50
#define MAX_TRG 7


typedef struct {
	char modello [MAX_STR+1];
	char targa [MAX_TRG +1];
	int meseImmatricolazione;
	int annoImmatricolazione;
}t_auto;

typedef struct {
	char piva[MAX_STR+1];
	char nome[MAX_STR+1];
    char cognome[MAX_STR+1];
}t_persona;

typedef struct {
	int codiceConcessionario;
	t_persona gestore;
	t_auto auto[MAX_AUTO_CONCE];
	int nAuto; /* numero auto nel concessionario */
}t_concessionario;

void stampa(t_concessionario concessionario[], int numConcessionari, int anno) {
	
	int i;
	int j;
	for (i=0; i<numConcessionari; i=i+1) {
		printf("Conc. %d, codice %d: gestore %s %s\n", i, concessionario[i].codiceConcessionario, concessionario[i].gestore.nome, concessionario[i].gestore.cognome);
		printf("Immatricolazioni %d.\n", anno);
		for (j=0; j<concessionario[i].nAuto; j=j+1) {
			if (concessionario[i].auto[j].annoImmatricolazione==anno) {
				printf("mese %d: %s, %s\n", concessionario[i].auto[j].mese, concessionario[i].auto[j].modello, concessionario[i].auto[j].targa);
			} else {
			}
		}
	}
}

int main() {
	t_concessionario Concessionario[10];
	int anno=2015;
	stampa(Concessionario, 10, anno);
	getch();
	return 0;
}



#include <string.h>
#include <stdio.h>
#define N_STUDENTI 1000
#define MAX_STR 100
#define N_SCUOLE 10

typedef struct {
	char nome_cognome [MAX_STR+1];
	int crediti;
	int voto_prima_prova;
	int voto_seconda_prova;
	int voto_orale;
	int bonus;
} t_studente;

typedef struct {
	t_studente stud[N_STUDENTI];
	int n_studenti;
	char nome[MAX_STR+1];
	char citta[MAX_STR+1];
} t_scuola;

void funzione(t_scuola scuola[], int dim, char max[]) {
	int i;
	int j;
	int numStudenti;
	int votoFinale;
	int massimo=0;
	
	
	for (i=0; i<dim; i++) {
		numStudenti=0;
		for (j=0; j<scuola[i].n_studenti; j++) {
			votoFinale=scuola[i].stud[j].crediti + scuola[i].stud[j].voto_prima_prova + scuola[i].stud[j].voto_seconda_prova + scuola[i].stud[j].voto_orale;
			if (votoFinale==100) {
				numStudenti=numStudenti+1;
			}
		}
		if (massimo<numStudenti) {
			massimo=numStudenti;
			strcpy(max, scuola[i].nome);
		}
	}
}

int main () {
	t_scuola scuola[N_SCUOLE];
	char scuolaMax[MAX_STR+1];
	funzione(scuola, N_SCUOLE, scuolaMax);
	printf("La scuola con maggiore numero di studenti che hanno preso 100/100: %s", scuolaMax);
	getch();
	return 0;
}

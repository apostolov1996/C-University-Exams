#include <stdio.h>
#include <string.h>
#define MAXCORSI 30
#define MAXISCRITTI 10

typedef struct {
	char nomeStud[10];
	char cognomeStud[10];
	int anniFrequenza;
} Iscritto;

typedef struct {
	char strumento[10];
	int livello;
	int numIscritti;
	char nomeInsegnante[10];
	char cognomeInsegnante[10];
	Iscritto alunno[MAXISCRITTI];
} Corso;

void stampaStudenti(Corso corso[], int dim) {
	int i;
	int j;
	int max;
	for (i=0; i<dim; i++) {
		if (strcmp(corso[i].strumento, "chitarra")==0 && corso[i].livello==3) {
			max=corso[i].alunno[0].anniFrequenza;
			for (j=0; j<corso[i].numIscritti; j++) {
				if (max<corso[i].alunno[j].anniFrequenza) {
					max=corso[i].alunno[j].anniFrequenza;
				} else {
				}
			}
			for (j=0; j<corso[i].numIscritti; j++) {
				if (max==corso[i].alunno[j].anniFrequenza) {
					printf("Studente: %s %s\n", corso[i].alunno[j].nomeStud, corso[i].alunno[j].cognomeStud);
				} else {
				}
			}
		}
	}
}

int main() {
	Corso corso[30];
	stampaStudenti(corso, 30);
	getch();
	return 0;
}

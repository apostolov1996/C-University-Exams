#include <stdio.h>
#include <string.h>
#define N_RIVISTE 1000
#define MAX_STR 100
#define DIM_EDICOLE 10

typedef struct {
	char titolo[MAX_STR+1];
	float prezzo;
	int num_uscite;
	int pagine_per_uscita;
} t_rivista;

typedef struct {
	t_rivista riv[N_RIVISTE];
	int n_riviste;
	char nome[MAX_STR+1];
	char citta[MAX_STR+1];
} t_edicola;

void funzione(t_edicola edi[], int dim, char max_ed[]) {
	int i;
	int j;
	float mediaEdicola;
	int pagineRivista;
	int sommaPagine;
	float maxMedia=0;
	
	for (i=0; i<dim; i++) {
		sommaPagine=0;
		for (j=0; j<edi[i].n_riviste; j++) {
			pagineRivista=edi[i].riv[j].num_uscite*edi[i].riv[j].pagine_per_uscita;
			sommaPagine=sommaPagine+pagineRivista;
		}
		mediaEdicola=((float)sommaPagine)/(edi[i].n_riviste);
		if (maxMedia<mediaEdicola) {
			maxMedia=mediaEdicola;
			strcpy(max_ed, edi[i].nome);
		}
	}
}

int main() {
	t_edicola edicola[DIM_EDICOLE];
	char edicolaMassima[MAX_STR+1];
	funzione(edicola, DIM_EDICOLE, edicolaMassima);
	printf("L'edicola con la media superiore risulta essere: %s", edicolaMassima);
	getch();
	return 0;
}

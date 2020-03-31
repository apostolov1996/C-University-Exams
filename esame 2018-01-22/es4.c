#define N_AUTORI 10
#define MAX_STR 30
#include <stdio.h>
#include <string.h>
#define DIM 10

typedef struct {
	char nome[MAX_STR+1];
	char cognome[MAX_STR+1];
} t_autore;

typedef struct {
	t_autore autore[N_AUTORI];
	int n_autori;
	char titolo[MAX_STR+1];
	float prezzo;
	int pagine;
} t_libro;

void funzione (t_libro libro[], int dim, t_autore autoreInput, int *contatore) {
	int i;
	int j;
	*contatore=0;
	for (i=0; i<dim; i++) {
		for (j=0; j<libro[i].n_autori; j++) {
			if (strcmp(autoreInput.nome, libro[i].autore[j].nome)==0 && strcmp(autoreInput.cognome, libro[i].autore[j].cognome)==0) {
				*contatore=*contatore+1;
			}
		}
	}
}

int main() {
	t_libro libro[DIM];
	t_autore autoreRichiesto;
	int numLibri;
	
	printf("Nome autore: ");
	scanf("%s", autoreRichiesto.nome);
	printf("Cognome autore: ");
	scanf("%s", autoreRichiesto.cognome);
	funzione (libro, DIM, autoreRichiesto, &numLibri);
	printf("Il numero dei libri scritti dall'autore %s %s sono: %d\n", autoreRichiesto.nome, autoreRichiesto.cognome, numLibri);
	getch();
	return 0;
}


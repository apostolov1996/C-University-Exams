#include <stdio.h>
#include <string.h>
#define N_CITTA 10
#define MAX_STR 30


typedef struct {
	int lon, lat;
}t_coord;

typedef struct {
	char nome[MAX_STR+1];
	char regione[MAX_STR+1];
	int num_abitanti;
	t_coord coord;
}t_citta;

/* Funzione 1: Input: 1) array[] di citta. 2) dimensione array, 3) string REG, 4) intero LAT
               Output: Cerca tutte le citta appartenenti alla regione indicata e sutiate alla lat indicata. */
               

void ricercaCitta (t_citta citta[], int dim, char regInput[MAX_STR+1], int latInput, int *contatore) {
	int i;
	*contatore=0;
	for (i=0; i<dim; i++) {
		if (strcmp(citta[i].regione, regInput)==0 && latInput==citta[i].coord.lat) {
			*contatore=*contatore+1;
		} else {
		}
	}
}

int main() {
	t_citta citta[N_CITTA];
	int latitudine;
	char regione[MAX_STR+1];
	int i;
	int contatore;
	
	/* Dichiarazione delle citta*/
	for (i=0; i<N_CITTA; i++) {
		printf("Inserisci nome: ");
		scanf("%s",citta[i].nome);
		printf("Inserisci regione: ");
		scanf("%s", citta[i].regione);
		printf("Inserisci numero di abitanti: ");
		scanf("%d", &citta[i].num_abitanti);
		printf("Inserisci longitudine: ");
		scanf("%d", &citta[i].coord.lon);
		printf("Inserisci latitudine: ");
		scanf("%d", &citta[i].coord.lat);
	}
	
	printf("Inserisci regione da cercare: ");
	scanf("%s", regione);
	printf("Inserisci latitudine da cercare: ");
	scanf("%d", &latitudine);
	ricercaCitta(citta, N_CITTA, regione, latitudine, &contatore);
	printf("Numero di citta che soddisfano la richiesta: %d", contatore);
	getch();
	return 0;
}





 
 

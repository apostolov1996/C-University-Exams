#define N_CITTA 10
#define MAX_STR 30
#include <stdio.h>
#include <string.h>

typedef struct {
	int lon, lat;
} t_coord;

typedef struct {
	char nome[MAX_STR+1];
	char regione [MAX_STR+1];
	int num_abitanti;
	t_coord coord;
} t_citta;

int numCitta (t_citta citta[], int dim, char REG[MAX_STR], int LAT) {
	int contatore=0;
	int i;
	
	for (i=0; i<dim; i++) {
		if (strcmp(REG, citta[i].regione)==0 && citta[i].coord.lat==LAT) {
			contatore=contatore+1;
		}
	}
	return contatore;
}

int main() {
	
	int risultato;
	t_citta citta[N_CITTA];
	int latitudineInput;
	char regioneInput[MAX_STR+1];
	
	printf("Inserisci il nome della regione: ");
	scanf("%s", regioneInput);
	printf("Inserisci la latitudine: ");
	scanf("%d", &latitudineInput);
	risultato=numCitta(citta, N_CITTA, regioneInput, latitudineInput);
	printf("Il numero delle citta sono: %d", numCitta);
	getch();
	return 0;
	
	
}


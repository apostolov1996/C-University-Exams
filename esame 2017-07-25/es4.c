#define MAX_INGR 10
#define DIM_PIZZE 60
#include <stdio.h>
#include <string.h>
typedef struct {
	int codice;
	char descrizione[50+1];
} Ingrediente;

typedef struct {
	int codice;
	char nome[30+1];
	Ingrediente ingredienti[MAX_INGR];
	int numIngr;
	double costo;
} Pizza_t;

void funzione (Pizza_t pizza[], int dim, int n) {
	int i;
	printf("Le pizze che contengono meno di %d ingredienti sono:\n", n);
	for (i=0; i<dim; i++) {
		if (pizza[i].numIngr<n) {
			printf("Pizza %s, con %d ingredienti.\n", pizza[i].nome, pizza[i].numIngr);
		}
	}
}

int main() {
	
	Pizza_t pizza[DIM_PIZZE];
	int n;
	
	printf("Inserisci il numero degli ingredienti: ");
	scanf("%d", &n);
	funzione(pizza, DIM_PIZZE, n);
	getch();
	return 0;
	
}



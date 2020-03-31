#define N_CORSE 100
#define MAX_STR 100
#define DIM 10

typedef struct {
	char tipo_autobus[MAX_STR+1];
	int numero_corsa;
	int numero_passegeri;
	int posti_totali;
} t_corsa;

typedef struct {
	t_corsa corsa[N_CORSE];
	int n_corse;
	char partenza[MAX_STR+1];
	char arrivo[MAX_STR+1];
	int numero_linea;
} t_linea;

int funzione(t_linea lb[], int dim) {
	int risultato;
	int i;
	int j;
	float mediaCorsa=0;
	float mediaLinea;
	float min=1;
	
	for (i=0; i<dim; i++) {
		for (j=0; j<lb[i].n_corse; j++) {
			mediaCorsa=(((float)lb[i].corsa[j].numero_passegeri)/lb[i].corsa[j].posti_totali)+mediaCorsa;
		}
		mediaLinea=((float)mediaCorsa)/lb[i].n_corse;
		if (mediaLinea<min) {
			min=mediaLinea;
			risultato=lb[i].numero_linea;
		} else {
		}
	}
	return risultato;
}

int main() {
	t_linea linea[DIM];
	int lineaMenoCarica;
	lineaMenoCarica=funzione(linea, DIM);
	printf("La linea meno carica risulta: %d", lineaMenoCarica);
	getch();
	return 0;
}

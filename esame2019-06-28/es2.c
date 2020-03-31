#include <stdio.h>
#include <math.h>
#define VAL 5


int analizzanumero(int n, int val) {
	int resto;
	int risultato;
	int contatore=0;
	float divisione;
	int i;
	int divisibile;
	int cifra;

	
	
	if (val>=0 && val<=9 && n>=10) {
		divisione=n;
		while(divisione>=10) {
			divisione=divisione/10;
			contatore=contatore+1;
		}
		for (i=contatore; i>1; i=i-1) {
			divisibile=pow(10,i);
			resto=n%divisibile;
		}
		cifra=(resto-resto%10)/10;
		if (cifra==val) {
			risultato=1;
		} else {
			risultato=0;
		}
	} else {
		risultato=0;
	}
	return risultato;
}

int main() {
	
	int num;
	int max=0;
	int risultato;
	int contatore=0;
	
	FILE *fp;
	fp=fopen("testo.txt", "r");
	
	if (fp) {
		while (!feof(fp)) {
			fscanf(fp, "%d", &num);
			risultato=analizzanumero(num, VAL);
			if (risultato==1) {
				contatore=contatore+1;
			} else {
				if (contatore>=max) {
					max=contatore;
				}else{
				}
				contatore=0;
			}
		}
		fclose(fp);
		printf("La sequenza di lunghezza massima risulta essere: %d", max);
	} else {
		printf("Non posso aprire il file!\n");
	}
	
	getch();
	return 0;
	

}

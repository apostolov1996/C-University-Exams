#include <stdio.h>

int analizzanumero(int n, int val) {
	int resto;
	int resto1;
	int risultato;
	if (n>10) {
		do {
			resto=n%100;
		} while (resto>=100);
		resto1=resto%val;
		if (resto1==0) {
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
	int temp;
	int risultato1;
	int risultato2;
	int val=15;
	FILE *fp;
	
	fp=fopen("testo.txt", "r");
	if (fp) {
		fscanf(fp, "%d", &num);
		while (!feof(fp)) {
			temp=num;
			fscanf(fp, "%d", &num);
			risultato1=analizzanumero(temp, val);
			risultato2=analizzanumero(num,val);
			if (risultato1==1 && risultato2==0) {
				printf("%d - %d\n", temp, num);
			}
		}
	} else {
		printf("Non posso aprire il file!\n");
	}
	getch();
	return 0;
}

#include <stdio.h>

int main () {
	int contatore;
	int i;
	int num;
	int quadrato;
	
	FILE *fp;
	fp=fopen("TEST.txt", "r");
	contatore=0;
	if (fp) {
		while (!feof(fp)) {
			fscanf(fp, "%d", &num);
			for (i=1; i<num; i++) {
				quadrato=i*i;
				if (quadrato==num) {
					contatore=contatore+1;
				}
			}
		}
		printf("Il numero dei quadrati perfetti risulta essere: %d", contatore);
		fclose(fp);
	} else {
		printf("Non posso aprire il file!\n");
	}
	getch();
	return 0;	
}

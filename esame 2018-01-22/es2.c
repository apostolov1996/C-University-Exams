#include <stdio.h>
#include <string.h>

int main() {
	int i;
	int num;
	int contatore;
	num=0;
	FILE *fp;
	fp=fopen("risultati.txt", "w");
	if (fp) {
	    printf("Inserisci una sequenza di numeri:\n");
	    while (num>=0) {
		    printf("Inserisci un numero: ");
		    scanf("%d", &num);
		    if (num==0 || num==1) {
		    	fprintf(fp, "%d - 0\n", num);
			} else if (num>1) {
				contatore=0;
				for (i=1; i<num; i++) {
					if (num%i==0) {
						contatore=contatore+1;
					}
				}
				fprintf(fp, "%d - %d\n", num, contatore);
			}
	    }
	    fclose(fp);
	} else {
		printf("Non posso aprire il file!\n");
	}
	getch();
	return 0;
}

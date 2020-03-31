#include <stdio.h>
#include <string.h>
int main () {
	int num1;
	int num2;
	int contatore=0;
	FILE *fp;
	
	fp=fopen("TESTO.txt", "r");
	if (fp) {
		while(!feof(fp)) {
			fscanf(fp, "%d\n", &num1);
			fscanf(fp, "%d\n", &num2);
			printf("Numeri letti: %d %d\n", num1, num2);
			if (num2==2*num1) {
				contatore=contatore+1;
				printf("Coppia %d: %d : %d", contatore, num1, num2);
				printf("\n");
			} else {
			}
		}
		fclose(fp);
	} else {
		printf("Non posso aprire il file.\n");
	}
	
	getch();
	return 0;
}

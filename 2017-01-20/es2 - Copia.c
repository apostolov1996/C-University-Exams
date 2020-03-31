#include <stdio.h>

int main() {
	
	int num;
	int max;
	int frequenza;
	
	frequenza=0;
	
	FILE *fp;
	fp=fopen("numeri.txt", "r");
	
	if (fp) {
		fscanf(fp, "%d", &num);
		max=num;
		while (!feof(fp)) {
			fscanf(fp, "%d", &num);
			if (num>max) {
				max=num;
			} else {
			}
		}
		while (!feof(fp)) {
			fscanf(fp, "%d", &num);
			if (num==max) {
				frequenza=frequenza+1;
			} else {
			}
		}
		fclose(fp);
		printf("Il massimo risulta essere: %d\n", max);
		printf("La frequenza risulta essere: %d", frequenza);
	} else {
		printf("Non posso aprire il file!\n");
	}
	
	getch();
	return 0;
	
}

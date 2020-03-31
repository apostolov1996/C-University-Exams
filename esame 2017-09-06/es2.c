#include <stdio.h>

int main() {
	int num;
	int temp;
	
	FILE *fp;
	fp=fopen("TEST.txt", "r");
	if (fp) {
		fscanf(fp, "%d", &num);
		while (!feof(fp)) {
			temp=num;
			fscanf(fp, "%d", &num);
			if (num==temp*2) {
				printf("Coppia: %d - %d\n", temp, num);
			}
		}
		fclose(fp);
	} else {
		printf("Non posso aprire il file!\n");
	}
	getch();
	return 0;
}

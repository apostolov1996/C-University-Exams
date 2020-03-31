#include <stdio.h>
#include <string.h>

int main() {
	int count, n, m;
	int i;
	FILE *fp;
	count=0;
	fp=fopen("TEST.txt", "r");
	if (fp) {
		while(!feof(fp)) {
			fscanf(fp, "%d", &n);
			for (i=0; i<n; i=i+1) {
				m=i*i;
				if (n==m) {
					count=count+1;
				} else {
				}
			}
		}
		printf("Il numero dei quadrati perfetti rusulta essere: %d", count);
	} else {
		printf("Non posso aprire il file richiesto.\n");
	}
	fclose(fp);
	getch();
	return 0;	
}

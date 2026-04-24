#include <stdio.h>

//ler e imprimir elementos de uma matriz 3x5
int main() {
	int i, j, k, h;
	int n[3][5];
	
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("Escreva o numero %d, %d; ", i+1, j+1);
			scanf("%d", &n[i][j]);
		}
	}
	
	for (k = 0; k < 3; k++) {
		for (h = 0; h < 5; h++) {
			printf("%d ", n[k][h]);	
		}
		printf("\n");
	}
	
	return 0;
}
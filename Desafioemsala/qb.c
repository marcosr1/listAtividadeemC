#include <stdio.h>

// ler uma matriz 10x10 e imprimir somente os elementos da diagonal principal
int main() {
	int i, j, h, k, m[10][10];
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("escreva os numeros da matriz; da posição %d, %d ", i + 1, j + 1 );
			scanf("%d", &m[i][j]);
		}
	}
	
	for (h = 0; h < 10; h++) {
		for (k = 0; k < 10; k++) {
			if (m[h] == m[k]) {
				printf("%d ", m[h][k]);
			}
		}
 	}
	
	
	return 0;
}
 
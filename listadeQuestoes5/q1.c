// escreva um programa em c que leia uma matriz 10x10. em seguida, o programa deve imprimir
//a - Os elementos da diagonal principal 
//b - os elementos da matriz triangular superior da diagonal principal(proxima linha)
//c - os elementos da matriz triangular inferior da diagonal principal(proxima linha)
//d - os elementos da diagonal secundaria
//e - os elementos da matriz triangular superior da diagonal secundaria(proxima linha)
//f - os elementos da matriz triangular inferior da diagonal secundaria(proxima linha) 
#include <stdio.h>

int main() {
	int i, j, m[10][10];
	
	//coloquei essa matriz ja pronta pq suponho que o senhor nao va digitar 100 numeros um por um no cmd kkkkkkk	
	//int m[10][10] = {
    //{  1,  2,  3,  4,  5,  6,  7,  8,  9, 10 },
    //{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
    //{ 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 },
    //{ 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 },
    //{ 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 },
    //{ 51, 52, 53, 54, 55, 56, 57, 58, 59, 60 },
    //{ 61, 62, 63, 64, 65, 66, 67, 68, 69, 70 },
    //{ 71, 72, 73, 74, 75, 76, 77, 78, 79, 80 },
    //{ 81, 82, 83, 84, 85, 86, 87, 88, 89, 90 },
    //{ 91, 92, 93, 94, 95, 96, 97, 98, 99, 100 }
//};
	
	// escreva um programa em c que leia uma matriz 10x10. em seguida, o programa deve imprimir
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			printf("escreva o numero da matriz:	(posicao: %d, %d) ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
	//a - Os elementos da diagonal principal 
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			if (m[i] == m[j]) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	//b - os elementos da matriz triangular superior da diagonal principal(proxima linha)
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			if (m[i] == m[j] || m[i] < m[j]) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	//c - os elementos da matriz triangular inferior da diagonal principal(proxima linha)
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			if (m[i] == m[j] || m[i] > m[j]) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	//d - os elementos da diagonal secundaria
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			if (i + j == 9) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	//e - os elementos da matriz triangular superior da diagonal secundaria(proxima linha)
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			if (i + j < 9 || i + j == 9) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	//f - os elementos da matriz triangular inferior da diagonal secundaria(proxima linha)
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			if (i + j > 9 || i + j == 9) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	return 0;	
}



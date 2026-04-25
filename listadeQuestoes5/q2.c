// escreva um programa em C que leia uma matriz 10x10 e imprima os elementos das matrizes nos sentidos indicados
//a - linha a linha (iniciando da ultima linha)
//b - linha a linha (inicio primeira linha e ultima coluna)
//c - percurso sequencial por coluna (inicio primeira coluna)
//d - diagona a diagonal (inicio na principal)
#include <stdio.h>

int main() {
	int i, j, k, m[10][10];
	
	
	//coloquei essa matriz ja pronta pq suponho que o senhor nao va digitar 100 numeros um por um no cmd kkkkkkk
//	int m[10][10] = {
//    {  1,  2,  3,  4,  5,  6,  7,  8,  9, 10 },
//    { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
//    { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 },
//    { 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 },
//    { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 },
//    { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60 },
//    { 61, 62, 63, 64, 65, 66, 67, 68, 69, 70 },
//    { 71, 72, 73, 74, 75, 76, 77, 78, 79, 80 },
//    { 81, 82, 83, 84, 85, 86, 87, 88, 89, 90 },
//    { 91, 92, 93, 94, 95, 96, 97, 98, 99, 100 }
//};
	
	// escreva um programa em c que leia uma matriz 10x10. em seguida, o programa deve imprimir
	for (i = 0; i < 10;	i++) {
		for (j = 0;	 j < 10; j++) {
			printf("escreva o numero da matriz:	(posicao: %d, %d) ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
	
    //a - linha a linha (iniciando da ultima linha)
    for (i = 9; i >= 0; i--) {
		for ( j = 0; j < 10; j++ ) {
			printf("%d ", m[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	//b - linha a linha (inicio primeira linha e ultima coluna)
	for (i = 0; i < 10; i++) {
		for ( j = 9; j >= 0; j-- ) {
			printf("%d ", m[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	//c - percurso sequencial por coluna (inicio primeira coluna)
	for (j = 0; j < 10; j++) {
		if (j % 2 == 0) {
			for (i = 0; i < 10; i++) {
				printf("%d ", m[i][j]);
			}
		}else {
			for ( i = 9; i >=0; i-- ) {
				printf("%d ", m[i][j]);
			}
		}
	}
	
	printf("\n");
	printf("\n");
	
	//d - diagonal a diagonal (inicio na principal)
	for (k = 0; k < 10; k++) {
		i = 0;
		j = k;
		
		while (i < 10 && j < 10) {
			printf("%d ", m[i][j]);
			i++;
			j++;
		}
	}
	for (k = 1; k < 10; k++) {
		i = k;
		j = 0;
		
		while (i < 10 && j < 10) {
			printf("%d ", m[i][j]);
			i++;
			j++;
		}
	}
	
	printf("\n");
	printf("\n");
	
	return 0;
}
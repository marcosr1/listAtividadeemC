#include <stdio.h>

// Ler 3 notas de 10 alunos e imprimir a media de cada aluno no final 
int main() {
	int i, j, k, h, a[10][3];
	float media, soma = 0;
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 3; j++) {
			printf("digite as notas do %d aluno; ", i+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	for (k = 0; k < 10; k++) {
		for (h = 0; h < 3; h++) {
			soma += a[k][h];
		}
		media = soma/3;
		printf("media do %d aluno e; %.2f \n", k,media);
		media -= media;
		soma -= soma;
	}  	
	
	
	return 0;
}
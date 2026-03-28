#include <stdio.h>

int main() {
	do {
		char nome[10];
		int a1, a2, a3;
		
		printf("Escreva o nome do aluno: ");
		scanf("%s", &nome);
		printf("Digite as tres notas das avaliacoes feitas: \n");
		scanf("%i %i %i", &a1, &a2, &a3);
		
		int media = (a1 + a2 + a3)/3;
		
		if (media >= 7) {
			printf("nome: %s, notas: %i, %i, %i - media = %i - APROVADO!!\n", nome, a1, a2, a3, media);		
		} else if ( media >= 4 && media < 7) { 
			printf("nome: %s, notas: %i, %i, %i - media = %i - EXAME FINAL!!\n", nome, a1, a2, a3, media);
		} else {
			printf("nome: %s, notas: %i, %i, %i - media = %i - REPROVADO!!\n", nome, a1, a2, a3, media);
		}
	}while(1);
	return 0;
}
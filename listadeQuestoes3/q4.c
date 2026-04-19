#include <stdio.h>

int main() {
	char sexo;
	char nome[10];
	int i;
	
	printf("Qual seu sexo? (M ou F): ");
	scanf("%c", &sexo);
	
	printf("Qual seu nome? ");
	scanf("%s", &nome);	
	
	printf("Qual sua idade? ");
	scanf("%i", &i);
	
	if ( sexo == 'F' && i < 25) {
		printf("%s voce foi ACEITA", nome);
	} else {
		printf("%s voce nao foi ACEITO(A)", nome);
	}
	
	return 0;
}
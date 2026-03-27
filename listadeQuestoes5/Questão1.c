#include <stdio.h>

int main() {
	float b, a;
	
	printf("Digite o valor da base do retangulo: ");
	scanf("%f", &b);
	
	printf("Digite o valor da altura do retangulo: ");
	scanf("%f", &a);
	
	float p = 2*(a+b);
	
	printf("O perimetro do retangulo é: %.2f", p);
	return 0;
}


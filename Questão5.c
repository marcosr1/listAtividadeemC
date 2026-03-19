#include <stdio.h>

int main() {
	float x1, x2, x3;
	
	printf("Digite o valor do x1: ");
	scanf("%f", &x1);

	printf("Digite o valor do x2: ");
	scanf("%f", &x2);
		
	printf("Digite o valor do x3: ");
	scanf("%f", &x3);
		
	float x = x1 + ( x2/(x3 + x1)) + 2 * (x1 - x2);
	
	printf("O valor de x é: %.2f", x);
	return 0;
}
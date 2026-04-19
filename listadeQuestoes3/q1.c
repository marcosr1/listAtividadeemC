#include <stdio.h>

int main() {
	do {
		int n1, n2, result;
		
		printf("digite o primeiro numero: ");
		scanf("%i", &n1);
		printf("digite o segundo numero: ");
		scanf("%i", &n2);
		
		result = n1+n2;
		
		if (result > 50){
			printf("o resultador eh: %i\n", result);
		} else { 
			printf("numero nao eh maior que 50!\n");
		}

	}while(1);
	return 0;
}
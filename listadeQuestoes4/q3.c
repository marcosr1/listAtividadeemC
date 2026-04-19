#include <stdio.h>

int main() {
	int num;
	int contador = 0;
	
	printf("Digite numeros inteiros (0 para parar):\n");
	
	do {
		scanf("%d", &num);
		
		if (num >= 100 && num <= 200) {
			contador++;
		} 
	} while (num != 0);
	
	printf("Quantidade de numeros entre 100 e 200: %d\n", contador);
	
	return 0;
}
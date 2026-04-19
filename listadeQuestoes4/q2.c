#include <stdio.h>

int main() {
	int soma = 0;
	int i;
	
	for (i = 25; i <= 525; i++) {
		if (i % 2 == 0) {
			soma += i;
		}
	}
	
	printf("Soma dos pares entre 25 e 525: %d\n", soma);
	
	return 0;
}
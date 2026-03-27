#include <stdio.h>

int main() {
	do {
		int n1, n2, n3;
		
		printf("Escreva 3 numeros seguidos: ");
		scanf("%i %i %i", &n1, &n2, &n3);
		
		if (n1 > n2 && n1 > n3) {
			printf("%i\n", n1);
		} else if (n2 > n1 && n2 > n3) {
			printf("%i\n", n2);
		} else if (n3 > n1 && n3 > n2) {
			printf("%i\n", n3);
		}
	}while(1);
	return 0;
}
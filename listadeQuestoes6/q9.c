#include <stdio.h>

int main() {
	do {
		int n1, n2, n3;
		
		printf("Escreva 3 numeros de um triangulo: ");
		scanf("%i %i %i", &n1, &n2, &n3);
		
		if ( n1 + n2 == n3 ) {
			printf("A soma dos lados eh igual ao 3 lado\n");
		} else if ( n1 + n3 == n2 ) {
			printf("A soma dos lados eh igual ao 2 lado\n");
		} else if ( n2 + n1 == n3) {
			printf("A soma dos lados eh igual ao 3 lado\n");
		} else if ( n2 + n3 == n1) {
		   	printf("A soma dos lados eh igual ao 1 lado\n");
		} else if ( n3 + n1 == n2) {
			printf("A soma dos lados eh igual ao 2 lado\n");
		} else if ( n3 + n2 == n1) {
			printf("A soma dos lados eh igual ao 1 lado\n");	
		} else {
			if ( n1 == n2 && n1 == n3) {
				printf("Esse eh um triangulo equilatero!!\n");
			} else if ( n1 == n2 && n1 != n3 || n1 == n3 && n1 != n2 || n2 == n3 && n2 != n1) {
				printf("Esse eh um triangulo isosceles!!\n");
			} else {
				printf("Esse eh um triangulo escaleno!!\n");
			}
		}

	}while(1);
	return 0;
}
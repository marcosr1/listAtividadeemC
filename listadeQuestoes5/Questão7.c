#include <stdio.h>

int main() {
	int n, d;
	printf("Escreva um numero inteiro: ");
	scanf("%i", &n);
	
	d = (n % 3 == 0) ? printf("É divisivel por 3") : printf("É não divisivel por 3");  
	
	return 0;
}
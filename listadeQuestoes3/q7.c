#include <stdio.h>

int main() {
	int n1;
	
	printf("Escreva um numero de 1 a 7: ");
	scanf("%i", &n1);
	
	switch (n1) {
		case 1: 
			printf("DOMINGO");
			break;
		case 2:
			printf("SEGUNDOU");
			break;
		case 3:
			printf("TERCA");
			break;
		case 4: 
			printf("QUARTA");
			break;
		case 5:
			printf("QUINTA");
			break;
		case 6:
			printf("SEXTOUUU");
			break;
		case 7:
			printf("SABADO");
			break;
	}
	return 0;
}
#include <stdio.h>

int main() {
	do {
		int n1;
		
		printf("Digite qualquer numero: ");
		scanf("%i", &n1);
		
		if (n1%7 == 0 || n1%7 == 7) {
			printf("numero multiplo de 7\n");
		}else {
			printf("numero nao eh multiplo de 7\n");
		}
	} while(1);
	return 0;
}
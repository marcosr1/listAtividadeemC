#include <stdio.h>

int main() {
	do {
	    int n1, n2, n3;
	
	    printf("Digite tres numeros: ");
	    scanf("%d %d %d", &n1, &n2, &n3);
	
	    // Verifica todas as 6 ordens possíveis
	    if (n1 <= n2 && n2 <= n3) {
	        printf("Ordem crescente: %d %d %d\n", n1, n2, n3);
	    } else if (n1 <= n3 && n3 <= n2) {
	        printf("Ordem crescente: %d %d %d\n", n1, n3, n2);
	    } else if (n2 <= n1 && n1 <= n3) {
	        printf("Ordem crescente: %d %d %d\n", n2, n1, n3);
	    } else if (n2 <= n3 && n3 <= n1) {
	        printf("Ordem crescente: %d %d %d\n", n2, n3, n1);
	    } else if (n3 <= n1 && n1 <= n2) {
	        printf("Ordem crescente: %d %d %d\n", n3, n1, n2);
	    } else {
	        printf("Ordem crescente: %d %d %d\n", n3, n2, n1);
	    }
	} while(1);
    return 0;
}
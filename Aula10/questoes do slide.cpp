#include <stdio.h>

int fatorial(int n){
	if(n == 0){
		return 1;
	} else {
		return n * fatorial(n -1);
	}
}

void conversaoDecimal(int n){
	if(n == 0){
		return;
	}
	
	conversaoDecimal(n / 2);
	
	printf("%d", n % 2);
}

int funcao1(int n){
	if(n == 0){
		return 3;
	}
	
	return 2* funcao1(n - 1) + 3;
}

int funcao2(int n){
	int base = 2;
	
	if(n == 0){
		return 1;
	}
	
	return 	base * funcao2(n - 1);
}

int hanoi(int n){
	int base = 2;
	if(n == 0) {
		return 1;
	}
	
	int h = base * hanoi(n - 1);
}

int fibonacci(int n) {
	int i;
	if(n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	
	return fibonacci(n-1)+ fibonacci(n-2);
}

int main(){
	int n = fatorial(8);
	printf("CONVERSSAO DE 100 PARA BINARIO -- ");
	conversaoDecimal(100);
	int a = funcao1(2);
	int b = funcao2(1);
	int c = hanoi(3) - 1;
	
	int i;
	int m = 10;
		
	printf("\nFATORIAL DE 8 -- %d", n);
	printf("\nFUNCAO 1 DE 2 -- %d", a);
	printf("\nFUNCAO 2 DE 1 -- %d", b);
	printf("\nHANOI DE 5 -- %d\n", c);
	
	
	printf("FIBONACCI DE 10 NUMEROS -- ");
	for (i = 0; i < m; i++) {
		printf("%d ", fibonacci(i));
	}

	
	return 0;
}				
#include <stdio.h>

int main(){
	float v;
	float p = 10.0;
	printf("Digite o valor da conta: ");
	scanf("%f", &v);
	
	float g = v * ( p / 100.0 );
	
	printf("O valor da porcentagem do garçom é: %.2f reais", g);
	
	return 0;
}
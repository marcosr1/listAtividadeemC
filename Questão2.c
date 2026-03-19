#include <stdio.h>

int main() {
	float d, di;
	
	printf("Digite o dividendo: ");
	scanf("%f", &d);
	
	printf("Digite o divisor: ");
	scanf("%f", &di);
	
	float qu = d/di;
	int re =(int)d % (int)di;
	
	printf("Dividendo: %.1f\nDivisor: %.1f\nQuoficiente: %.1f\n Resto: %i", d, di, qu, re);
}
#include <stdio.h>

int main() {
	float c;
	printf("Quantos graus estãao agora? ");
	scanf("%f", &c);
	
	float f = ((9 * c) + 160)/5;
	
	printf("em fahrenheit é: %.2f", f);
	
	return 0;
}
#include <stdio.h>

int main() {
	int h;
	int m;
	printf("Escreva a hora: ");
	scanf("%i", &h);
	printf("Escreva a minuto: ");
	scanf("%i", &m);
	
	int s = (h*3600)+(m*60); 
	
	printf("Se passaram %i segundos desde o inicio do seu dia", s);
	
	return 0;
}
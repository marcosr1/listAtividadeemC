#include <stdio.h>
#include <math.h>

int main() {
	do {
		double a, b, c, delta, rd, x1, x2;
		
		printf("Digite 3 numeros para fazer o calculo de uma equacao de segundo grau (numeros respectivos a, b, c): ");
		scanf("%lf %lf %lf", &a, &b, &c);
		
		if ( a != 0 ) {
			delta = b*b-4*a*c;
			
			if ( delta < 0) {
				printf("Nao existem raizes reais\n");
			}
			
			if ( delta > 0) {
				rd = sqrt(delta);
				x1 = (-b + rd)/(2 * a);
				x2 = (-b - rd)/(2 * a);
				printf("Duas raiz real: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
			} else if ( delta == 0 ) {
				x2 = -b/(2 * a);
				printf("Raiz real: %.2lf\n", x2);
			}
		} else {
			printf("Nao e equacao do segundo grau\n");
		}
	} while(1);
	return 0;
}
#include <stdio.h>

int main() {
	do {
		int i;
		
		printf("Qual sua idade? ");
		scanf("%i", &i);
		
		if (i >= 65) {
			printf("Voce tem a idade maior de idade, ta velhinho ne, as dores nas costas ja comecaram??\n");
		} else if ( i >= 18) {
			printf("Voce eh maior de idade... ja pensou em trabalhar??\n");
		} else if ( i < 18){
			printf("Voce eh menor de idade, gu gu da da kkkkkk\n");
		}
	} while(1);
	return 0;
}
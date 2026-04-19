#include <stdio.h>

int main() {
	int n = 100;
	int i;
		
	for (i = 0; i <= 99; i++) {
		printf("%i\n", n);
		n = n - 1;
	}
	return 0;
}
#include <stdio.h>

int main() {
    int a = 1, b = 1, proximo, i;

    printf("Serie de Fibonacci:\n");

    printf("%d\n%d\n", a, b);

    for (i = 3; i <= 30; i++) {
        proximo = a + b;
        printf("%d\n", proximo);

        a = b;
        b = proximo;
    }

    return 0;
}
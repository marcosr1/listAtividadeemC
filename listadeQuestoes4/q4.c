#include <stdio.h>

int main() {
    char nome[10];
    int idade;
    float salario;
    int i;

    for (i = 0; i < 20; i++) {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf("%s", nome);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Salario: ");
        scanf("%f", &salario);

        if (salario > 2000) {
            printf("%s tem salario maior que 2000\n", nome);
        }
    }

    return 0;
}
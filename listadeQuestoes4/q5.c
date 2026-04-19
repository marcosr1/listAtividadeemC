#include <stdio.h>

int main() {
    int idade;
    int maior, menor;
    int soma = 0;
    int i;

    for (i = 0; i < 20; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (i == 0) {
            maior = idade;
            menor = idade;
        }

        if (idade > maior) {
            maior = idade;
        }

        if (idade < menor) {
            menor = idade;
        }

        soma += idade;
    }

    float media = soma / 20.0;

    printf("\nMaior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);
    printf("Media das idades: %.2f\n", media);

    return 0;
}
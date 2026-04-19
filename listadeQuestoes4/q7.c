#include <stdio.h>

int main() {
    int arvore_secreta;
    int chute;
    int tentativas = 5;
    int i;

    printf("Jogador 1, escolha a arvore (1 a 100): ");
    scanf("%d", &arvore_secreta);

    for (i = 0; i < 50; i++) {
        printf("\n");
    }

    while (tentativas > 0) {
        printf("Tentativa (%d restantes): ", tentativas);
        scanf("%d", &chute);

        if (chute == arvore_secreta) {
            printf("Acertou! O marciano foi morto!\n");
            return 0;
        } else if (chute < arvore_secreta) {
            printf("estou mais para a DIREITA\n");
        } else {
            printf("estou mais para a ESQUERDA\n");
        }

        tentativas--;
    }

    printf("\nO marciano escapou e voce foi levado para Marte!\n");
    printf("A arvore era: %d\n", arvore_secreta);

    return 0;
}
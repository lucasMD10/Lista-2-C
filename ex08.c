/*
 * Aluno: Lucas Delfino
 * Exercício: 08
 * Descrição: Desenha um retângulo de asteriscos com altura e largura informadas (for aninhado).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int altura, largura;

    printf("Altura do retangulo: ");
    if (scanf("%d", &altura) != 1 || altura <= 0) {
        printf("Altura invalida.\n");
        return 1;
    }
    printf("Largura do retangulo: ");
    if (scanf("%d", &largura) != 1 || largura <= 0) {
        printf("Largura invalida.\n");
        return 1;
    }

    for (int linha = 0; linha < altura; linha++) {
        for (int coluna = 0; coluna < largura; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

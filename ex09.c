/*
 * Aluno: Lucas Delfino
 * Exercício: 09
 * Descrição: Desenha um triângulo retângulo de asteriscos com a base informada (laços aninhados).
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int base;

    printf("Tamanho da base do triangulo: ");
    if (scanf("%d", &base) != 1 || base <= 0) {
        printf("Base invalida.\n");
        return 1;
    }

    for (int i = 1; i <= base; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

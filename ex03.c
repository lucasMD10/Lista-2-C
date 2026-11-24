/*
 * Aluno: Lucas Delfino
 * Exercício: 03
 * Descrição: Lê um número e determina se ele é primo usando laço for e uma flag.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int numero;
    int ehPrimo = 1;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero < 2) {
        ehPrimo = 0;
    } else {
        for (int divisor = 2; divisor < numero; divisor++) {
            if (numero % divisor == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("%d e primo.\n", numero);
    } else {
        printf("%d nao e primo.\n", numero);
    }
    return 0;
}

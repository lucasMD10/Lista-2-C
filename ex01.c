/*
 * Aluno: Lucas Delfino
 * Exercício: 01
 * Descrição: Lê um número N e calcula a soma de 1 até N usando laço for.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int n;
    long long soma = 0;

    printf("Digite um numero N (N >= 1): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Entrada invalida. Digite um inteiro maior ou igual a 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma de 1 a %d = %lld\n", n, soma);
    return 0;
}

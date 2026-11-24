/*
 * Aluno: Lucas Delfino
 * Exercício: 34
 * Descrição: Fatorial implementado de forma recursiva, comparado com a versão iterativa (ex33).
 * Data: 24/11/2026
 *
 * Comparação:
 *  - Iterativa (for): usa uma variável acumuladora e um laço. Gasta memória
 *    constante e costuma ser um pouco mais rápida.
 *  - Recursiva: a função chama a si mesma com n-1 até chegar no caso base
 *    (n <= 1). O código fica mais curto e parecido com a definição matemática
 *    (n! = n * (n-1)!), mas cada chamada ocupa espaço na pilha; para valores
 *    muito grandes poderia causar estouro de pilha (stack overflow).
 *  - Para N <= 20 as duas dão exatamente o mesmo resultado.
 */
#include <stdio.h>

unsigned long long fatorialIterativo(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

unsigned long long fatorialRecursivo(int n) {
    if (n <= 1) {
        return 1;
    }
    return (unsigned long long)n * fatorialRecursivo(n - 1);
}

int main(void) {
    int n;

    printf("Digite N (0 a 20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Valor invalido.\n");
        return 1;
    }

    printf("Iterativo: %d! = %llu\n", n, fatorialIterativo(n));
    printf("Recursivo: %d! = %llu\n", n, fatorialRecursivo(n));
    return 0;
}

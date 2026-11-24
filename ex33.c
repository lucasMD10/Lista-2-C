/*
 * Aluno: Lucas Delfino
 * Exercício: 33
 * Descrição: Função que recebe N e retorna N! (fatorial) usando laço for.
 * Data: 24/11/2026
 */
#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void) {
    int n;

    printf("Digite N (0 a 12): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 12) {
        printf("Valor invalido.\n");
        return 1;
    }

    printf("%d! = %d\n", n, fatorial(n));
    return 0;
}

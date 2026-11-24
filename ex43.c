/*
 * Aluno: Lucas Delfino
 * Exercício: 43
 * Descrição: Usando o ponteiro p do exercício anterior, altera x para 20 e imprime.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("Valor inicial de x: %d\n", *p);

    *p = 20;

    printf("Novo valor de x: %d\n", x);
    return 0;
}

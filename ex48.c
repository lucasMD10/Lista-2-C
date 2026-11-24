/*
 * Aluno: Lucas Delfino
 * Exercício: 48
 * Descrição: Declara x, um ponteiro p para x e um ponteiro q para p; imprime x usando q.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int x = 77;
    int *p = &x;
    int **q = &p;

    printf("Valor de x usando q: %d\n", **q);
    return 0;
}

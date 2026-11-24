/*
 * Aluno: Lucas Delfino
 * Exercício: 37
 * Descrição: Função dobrar(int *x) que dobra o valor da variável passada por referência.
 * Data: 24/11/2026
 */
#include <stdio.h>

void dobrar(int *x) {
    *x = *x * 2;
}

int main(void) {
    int valor;

    printf("Digite um numero: ");
    if (scanf("%d", &valor) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Antes : %d\n", valor);
    dobrar(&valor);
    printf("Depois: %d\n", valor);
    return 0;
}

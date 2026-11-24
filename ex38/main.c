/*
 * Aluno: Lucas Delfino
 * Exercício: 38
 * Descrição: Usa as funções soma e dobrar separadas em util.c / util.h.
 *            Compilar com: gcc main.c util.c -o ex38
 * Data: 24/11/2026
 */
#include <stdio.h>
#include "util.h"

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int resultado = soma(a, b);
    printf("soma(%d, %d) = %d\n", a, b, resultado);

    dobrar(&resultado);
    printf("Resultado dobrado = %d\n", resultado);
    return 0;
}

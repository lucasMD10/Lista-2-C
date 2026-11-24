/*
 * Aluno: Lucas Delfino
 * Exercício: 05
 * Descrição: Imprime os números de 10 a 1 usando while e depois usando for.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {

    printf("Usando while: ");
    int i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    printf("Usando for:   ");
    for (int j = 10; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}

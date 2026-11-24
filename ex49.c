/*
 * Aluno: Lucas Delfino
 * Exercício: 49
 * Descrição: Cria com malloc um array de N inteiros, preenche usando ponteiros e libera a memória.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Tamanho do array (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        *(arr + i) = (i + 1) * 10;
    }

    printf("Array: ");
    for (int *p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    free(arr);
    arr = NULL;
    printf("Memoria liberada.\n");
    return 0;
}

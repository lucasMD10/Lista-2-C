/*
 * Aluno: Lucas Delfino
 * Exercício: 20
 * Descrição: Lê N, aloca dinamicamente um array de N inteiros com malloc, preenche e imprime.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Quantos elementos deseja armazenar? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Entrada invalida.\n");
            free(vetor);
            return 1;
        }
    }

    printf("Valores armazenados: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}

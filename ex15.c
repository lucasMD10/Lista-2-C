/*
 * Aluno: Lucas Delfino
 * Exercício: 15
 * Descrição: Lê uma matriz 2x3 e guarda a soma de cada linha em um array de 2 posições.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

int main(void) {
    int matriz[LINHAS][COLUNAS];
    int somaLinhas[LINHAS] = {0};

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada invalida.\n");
                return 1;
            }
            somaLinhas[i] += matriz[i][j];
        }
    }

    printf("\nMatriz e soma por linha:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%5d", matriz[i][j]);
        }
        printf("  | soma = %d\n", somaLinhas[i]);
    }

    return 0;
}

/*
 * Aluno: Lucas Delfino
 * Exercício: 14
 * Descrição: Lê 5 números, ordena com Bubble Sort e exibe o array ordenado.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 5

int main(void) {
    int v[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite o numero %d: ", i + 1);
        if (scanf("%d", &v[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    for (int passada = 0; passada < TAM - 1; passada++) {
        int houveTroca = 0;
        for (int j = 0; j < TAM - 1 - passada; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                houveTroca = 1;
            }
        }
        if (!houveTroca) {
            break;
        }
    }

    printf("Array ordenado: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

/*
 * Aluno: Lucas Delfino
 * Exercício: 18
 * Descrição: Copia o conteúdo de um array para outro sem usar funções de biblioteca (sem memcpy).
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 5

int main(void) {
    int origem[TAM];
    int destino[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("origem[%d]: ", i);
        if (scanf("%d", &origem[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    for (int i = 0; i < TAM; i++) {
        destino[i] = origem[i];
    }

    printf("\nOrigem : ");
    for (int i = 0; i < TAM; i++) printf("%d ", origem[i]);
    printf("\nDestino: ");
    for (int i = 0; i < TAM; i++) printf("%d ", destino[i]);
    printf("\n");

    return 0;
}

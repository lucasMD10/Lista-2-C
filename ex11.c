/*
 * Aluno: Lucas Delfino
 * Exercício: 11
 * Descrição: Preenche um array de 10 posições com números aleatórios (rand) e imprime.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void) {
    int numeros[TAM];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 100;
    }

    printf("Array gerado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}

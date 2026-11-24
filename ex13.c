/*
 * Aluno: Lucas Delfino
 * Exercício: 13
 * Descrição: Lê um array de 10 números e uma chave; informa se encontrou e em qual índice.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 10

int main(void) {
    int numeros[TAM];
    int chave;
    int posicao = -1;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o numero %d: ", i + 1);
        if (scanf("%d", &numeros[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("Digite o numero-chave para buscar: ");
    if (scanf("%d", &chave) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (int i = 0; i < TAM; i++) {
        if (numeros[i] == chave) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("Chave %d encontrada no indice %d.\n", chave, posicao);
    } else {
        printf("Chave %d nao encontrada no array.\n", chave);
    }

    return 0;
}

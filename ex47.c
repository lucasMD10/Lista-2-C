/*
 * Aluno: Lucas Delfino
 * Exercício: 47
 * Descrição: Soma os elementos de um array de 5 inteiros usando ponteiro e aritmética de ponteiros.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 5

int main(void) {
    int numeros[TAM] = {4, 8, 15, 16, 23};
    int *p = numeros;
    int soma = 0;

    for (int i = 0; i < TAM; i++) {
        soma += *(p + i);
    }

    printf("Soma dos elementos: %d\n", soma);
    return 0;
}

/*
 * Aluno: Lucas Delfino
 * Exercício: 44
 * Descrição: Percorre um array de inteiros com um ponteiro e imprime seus elementos.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 6

int main(void) {
    int numeros[TAM] = {3, 6, 9, 12, 15, 18};
    int *p = numeros;

    printf("Elementos do array: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}

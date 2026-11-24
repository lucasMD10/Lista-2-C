/*
 * Aluno: Lucas Delfino
 * Exercício: 12
 * Descrição: Lê dois arrays de 5 elementos e gera um terceiro com a soma elemento a elemento.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define TAM 5

int lerVetor(int v[], char nome[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%s[%d]: ", nome, i);
        if (scanf("%d", &v[i]) != 1) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int a[TAM], b[TAM], soma[TAM];

    printf("Digite os elementos do vetor A:\n");
    if (!lerVetor(a, "A")) { printf("Entrada invalida.\n"); return 1; }

    printf("Digite os elementos do vetor B:\n");
    if (!lerVetor(b, "B")) { printf("Entrada invalida.\n"); return 1; }

    for (int i = 0; i < TAM; i++) {
        soma[i] = a[i] + b[i];
    }

    printf("\nVetor soma (A + B):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d + %d = %d\n", a[i], b[i], soma[i]);
    }

    return 0;
}

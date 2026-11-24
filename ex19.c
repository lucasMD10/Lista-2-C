/*
 * Aluno: Lucas Delfino
 * Exercício: 19
 * Descrição: Lê 15 números entre 0 e 9 e mostra quantas vezes cada um aparece.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define QTD 15

int main(void) {
    int numeros[QTD];
    int frequencia[10] = {0};

    for (int i = 0; i < QTD; i++) {
        printf("Numero %d (0 a 9): ", i + 1);
        if (scanf("%d", &numeros[i]) != 1 || numeros[i] < 0 || numeros[i] > 9) {
            printf("Entrada invalida. Use apenas valores de 0 a 9.\n");
            return 1;
        }
        frequencia[numeros[i]]++;
    }

    printf("\nFrequencia:\n");
    for (int d = 0; d < 10; d++) {
        printf("%d aparece %d vez(es)\n", d, frequencia[d]);
    }

    return 0;
}

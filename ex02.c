/*
 * Aluno: Lucas Delfino
 * Exercício: 02
 * Descrição: Lê as idades de 10 pessoas e calcula a média usando for.
 * Data: 24/11/2026
 */
#include <stdio.h>

#define QTD_PESSOAS 10

int main(void) {
    int idade;
    int soma = 0;

    for (int i = 1; i <= QTD_PESSOAS; i++) {
        printf("Idade da pessoa %d: ", i);

        if (scanf("%d", &idade) != 1 || idade < 0 || idade > 150) {
            printf("Idade invalida. Use um valor entre 0 e 150.\n");
            return 1;
        }
        soma += idade;
    }

    printf("Media das idades: %.2f\n", (float)soma / QTD_PESSOAS);
    return 0;
}

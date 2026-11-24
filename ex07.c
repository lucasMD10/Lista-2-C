/*
 * Aluno: Lucas Delfino
 * Exercício: 07
 * Descrição: Imprime as potências de 2 (2^0, 2^1, ...) enquanto o valor for menor que 1000, usando for.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int expoente = 0;

    for (int potencia = 1; potencia < 1000; potencia *= 2) {
        printf("2^%d = %d\n", expoente, potencia);
        expoente++;
    }

    return 0;
}

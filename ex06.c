/*
 * Aluno: Lucas Delfino
 * Exercício: 06
 * Descrição: Pede um número positivo e repete a pergunta (while) enquanto for <= 0.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    int numero = 0;

    while (numero <= 0) {
        printf("Digite um numero positivo: ");
        if (scanf("%d", &numero) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            numero = 0;
            printf("Isso nao e um numero.\n");
        } else if (numero <= 0) {
            printf("Numero invalido! Precisa ser maior que zero.\n");
        }
    }

    printf("Numero valido digitado: %d\n", numero);
    return 0;
}

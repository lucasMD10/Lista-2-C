/*
 * Aluno: Lucas Delfino
 * Exercício: 40
 * Descrição: Função buscar(int arr[], int n, int chave) que retorna o índice da chave ou -1.
 * Data: 24/11/2026
 */
#include <stdio.h>

int buscar(int arr[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int numeros[] = {15, 8, 23, 42, 4, 16};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int chave;

    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", numeros[i]);
    printf("\nDigite o valor a buscar: ");

    if (scanf("%d", &chave) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int indice = buscar(numeros, n, chave);
    if (indice != -1) {
        printf("Valor %d encontrado no indice %d.\n", chave, indice);
    } else {
        printf("Valor %d nao encontrado (retorno -1).\n", chave);
    }
    return 0;
}

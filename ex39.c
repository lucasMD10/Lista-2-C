/*
 * Aluno: Lucas Delfino
 * Exercício: 39
 * Descrição: Função ordenar(int arr[], int n) que ordena um array usando Bubble Sort.
 * Data: 24/11/2026
 */
#include <stdio.h>

void ordenar(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int houveTroca = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                houveTroca = 1;
            }
        }
        if (!houveTroca) break;
    }
}

void imprimir(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int numeros[] = {42, 7, 19, 3, 88, 25, 1, 64};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Antes : ");
    imprimir(numeros, n);

    ordenar(numeros, n);

    printf("Depois: ");
    imprimir(numeros, n);
    return 0;
}

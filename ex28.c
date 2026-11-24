/*
 * Aluno: Lucas Delfino
 * Exercício: 28
 * Descrição: Lê o arquivo numeros.txt (um inteiro por linha), soma todos e exibe o resultado.
 *            O arquivo numeros.txt de exemplo está na mesma pasta.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: numeros.txt nao encontrado.\n");
        return 1;
    }

    int numero;
    int soma = 0;
    int quantidade = 0;

    while (fscanf(arquivo, "%d", &numero) == 1) {
        soma += numero;
        quantidade++;
    }

    fclose(arquivo);
    printf("Foram lidos %d numeros. Soma total = %d\n", quantidade, soma);
    return 0;
}

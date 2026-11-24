/*
 * Aluno: Lucas Delfino
 * Exercício: 22
 * Descrição: Lê o conteúdo de teste.txt e exibe no console.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("teste.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: teste.txt nao encontrado. Rode o ex21 primeiro.\n");
        return 1;
    }

    char linha[256];
    printf("Conteudo de teste.txt:\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}

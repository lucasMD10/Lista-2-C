/*
 * Aluno: Lucas Delfino
 * Exercício: 29
 * Descrição: Lê o conteúdo de um arquivo de origem e copia para um arquivo de destino.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nomeOrigem[100], nomeDestino[100];

    printf("Nome do arquivo de origem (ex.: teste.txt): ");
    if (fgets(nomeOrigem, sizeof(nomeOrigem), stdin) == NULL) return 1;
    nomeOrigem[strcspn(nomeOrigem, "\n")] = '\0';

    printf("Nome do arquivo de destino (ex.: copia.txt): ");
    if (fgets(nomeDestino, sizeof(nomeDestino), stdin) == NULL) return 1;
    nomeDestino[strcspn(nomeDestino, "\n")] = '\0';

    if (strcmp(nomeOrigem, nomeDestino) == 0) {
        printf("Origem e destino nao podem ser o mesmo arquivo.\n");
        return 1;
    }

    FILE *origem = fopen(nomeOrigem, "rb");
    if (origem == NULL) {
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }

    FILE *destino = fopen(nomeDestino, "wb");
    if (destino == NULL) {
        printf("Erro ao criar o arquivo de destino.\n");
        fclose(origem);
        return 1;
    }

    int c;
    long bytes = 0;
    while ((c = fgetc(origem)) != EOF) {
        fputc(c, destino);
        bytes++;
    }

    fclose(origem);
    fclose(destino);
    printf("Copia concluida: %ld bytes copiados.\n", bytes);
    return 0;
}

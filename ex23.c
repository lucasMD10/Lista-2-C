/*
 * Aluno: Lucas Delfino
 * Exercício: 23
 * Descrição: Pede 5 nomes ao usuário e grava no arquivo nomes.txt, um por linha.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM_NOME 100

void removerQuebraLinha(char texto[]) {
    int tamanho = strlen(texto);
    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

int main(void) {
    char nome[TAM_NOME];

    FILE *arquivo = fopen("nomes.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir nomes.txt.\n");
        return 1;
    }

    for (int i = 0; i < QTD; i++) {
        printf("Digite o nome %d: ", i + 1);
        if (fgets(nome, TAM_NOME, stdin) == NULL) {
            printf("Erro na leitura.\n");
            fclose(arquivo);
            return 1;
        }
        removerQuebraLinha(nome);
        fprintf(arquivo, "%s\n", nome);
    }

    fclose(arquivo);
    printf("Nomes gravados em nomes.txt.\n");
    return 0;
}

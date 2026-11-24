/*
 * Aluno: Lucas Delfino
 * Exercício: 25
 * Descrição: Versão do ex23 que anexa novos nomes ao final de nomes.txt sem sobrescrever.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM_NOME 100

int main(void) {
    char nome[TAM_NOME];

    FILE *arquivo = fopen("nomes.txt", "a");
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
        nome[strcspn(nome, "\n")] = '\0';
        fprintf(arquivo, "%s\n", nome);
    }

    fclose(arquivo);
    printf("Nomes adicionados ao final de nomes.txt.\n");
    return 0;
}

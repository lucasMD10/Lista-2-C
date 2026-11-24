/*
 * Aluno: Lucas Delfino
 * Exercício: 21
 * Descrição: Escreve a frase "Primeira linha de um arquivo." no arquivo teste.txt.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("teste.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar teste.txt.\n");
        return 1;
    }

    fprintf(arquivo, "Primeira linha de um arquivo.\n");
    fclose(arquivo);

    printf("Texto gravado em teste.txt com sucesso.\n");
    return 0;
}

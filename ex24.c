/*
 * Aluno: Lucas Delfino
 * Exercício: 24
 * Descrição: Lê nomes.txt e mostra quantos nomes têm mais de 5 caracteres.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *arquivo = fopen("nomes.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: nomes.txt nao encontrado. Rode o ex23 primeiro.\n");
        return 1;
    }

    char nome[100];
    int contador = 0;

    while (fgets(nome, sizeof(nome), arquivo) != NULL) {
        nome[strcspn(nome, "\r\n")] = '\0';

        if (strlen(nome) > 5) {
            printf("- %s\n", nome);
            contador++;
        }
    }

    fclose(arquivo);
    printf("Total de nomes com mais de 5 caracteres: %d\n", contador);
    return 0;
}

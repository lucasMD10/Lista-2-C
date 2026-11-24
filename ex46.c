/*
 * Aluno: Lucas Delfino
 * Exercício: 46
 * Descrição: Struct Pessoa (nome e idade) e função inicializar que preenche a struct via ponteiro.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

void removerQuebraLinha(char texto[]) {
    int tamanho = strlen(texto);
    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

struct Pessoa {
    char nome[50];
    int idade;
};

void inicializar(struct Pessoa *p, char nome[], int idade) {
    strcpy((*p).nome, nome);
    (*p).idade = idade;
}

int main(void) {
    struct Pessoa pessoa;
    char nome[50];
    int idade;

    printf("Nome: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) return 1;
    removerQuebraLinha(nome);

    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0 || idade > 150) {
        printf("Idade invalida.\n");
        return 1;
    }

    inicializar(&pessoa, nome, idade);

    printf("Pessoa inicializada: %s, %d anos\n", pessoa.nome, pessoa.idade);
    return 0;
}

/*
 * Aluno: Lucas Delfino
 * Exercício: 46
 * Descrição: Struct Pessoa (nome e idade) e função inicializar que preenche a struct via ponteiro.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void inicializar(struct Pessoa *p, char nome[], int idade) {

    strncpy(p->nome, nome, sizeof(p->nome) - 1);
    p->nome[sizeof(p->nome) - 1] = '\0';
    p->idade = idade;
}

int main(void) {
    struct Pessoa pessoa;
    char nome[50];
    int idade;

    printf("Nome: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) return 1;
    nome[strcspn(nome, "\n")] = '\0';

    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0 || idade > 150) {
        printf("Idade invalida.\n");
        return 1;
    }

    inicializar(&pessoa, nome, idade);

    printf("Pessoa inicializada: %s, %d anos\n", pessoa.nome, pessoa.idade);
    return 0;
}

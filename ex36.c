/*
 * Aluno: Lucas Delfino
 * Exercício: 36
 * Descrição: Struct Aluno (nome e nota) e função mediaTurma que calcula a média da turma.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50

void removerQuebraLinha(char texto[]) {
    int tamanho = strlen(texto);
    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

struct Aluno {
    char nome[50];
    float nota;
};

float mediaTurma(struct Aluno alunos[], int n) {
    if (n <= 0) return 0.0f;

    float soma = 0.0f;
    for (int i = 0; i < n; i++) {
        soma += alunos[i].nota;
    }
    return soma / n;
}

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(void) {
    struct Aluno turma[MAX_ALUNOS];
    int n;

    printf("Quantos alunos tem a turma (1 a %d)? ", MAX_ALUNOS);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_ALUNOS) {
        printf("Quantidade invalida.\n");
        return 1;
    }
    limparBuffer();

    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d: ", i + 1);
        if (fgets(turma[i].nome, sizeof(turma[i].nome), stdin) == NULL) return 1;
        removerQuebraLinha(turma[i].nome);

        printf("Nota de %s (0 a 10): ", turma[i].nome);
        if (scanf("%f", &turma[i].nota) != 1 || turma[i].nota < 0 || turma[i].nota > 10) {
            printf("Nota invalida.\n");
            return 1;
        }
        limparBuffer();
    }

    printf("Media da turma: %.2f\n", mediaTurma(turma, n));
    return 0;
}

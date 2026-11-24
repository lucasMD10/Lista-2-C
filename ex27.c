/*
 * Aluno: Lucas Delfino
 * Exercício: 27
 * Descrição: Lê funcionario.csv, separa os campos de cada linha e exibe formatado.
 * Data: 24/11/2026
 */
#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("funcionario.csv", "r");
    if (arquivo == NULL) {
        printf("Erro: funcionario.csv nao encontrado. Rode o ex26 primeiro.\n");
        return 1;
    }

    char cabecalho[100];
    char nome[100];
    int idade;
    float salario;
    int registro = 0;

    fgets(cabecalho, 100, arquivo);

    while (fscanf(arquivo, " %99[^,],%d,%f", nome, &idade, &salario) == 3) {
        registro++;
        printf("Funcionario %d\n", registro);
        printf("  Nome   : %s\n", nome);
        printf("  Idade  : %d anos\n", idade);
        printf("  Salario: R$ %.2f\n\n", salario);
    }

    if (registro == 0) {
        printf("Nenhum funcionario cadastrado.\n");
    }

    fclose(arquivo);
    return 0;
}

/*
 * Aluno: Lucas Delfino
 * Exercício: 26
 * Descrição: Lê nome, idade e salário de um funcionário e grava em funcionario.csv (Nome,Idade,Salario).
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    int idade;
    float salario;

    printf("Nome do funcionario: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        printf("Erro na leitura.\n");
        return 1;
    }
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ',') nome[i] = ' ';
    }

    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0 || idade > 150) {
        printf("Idade invalida.\n");
        return 1;
    }

    printf("Salario: ");
    if (scanf("%f", &salario) != 1 || salario < 0) {
        printf("Salario invalido.\n");
        return 1;
    }

    FILE *arquivo = fopen("funcionario.csv", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir funcionario.csv.\n");
        return 1;
    }

    fseek(arquivo, 0, SEEK_END);
    if (ftell(arquivo) == 0) {
        fprintf(arquivo, "Nome,Idade,Salario\n");
    }

    fprintf(arquivo, "%s,%d,%.2f\n", nome, idade, salario);
    fclose(arquivo);

    printf("Funcionario gravado em funcionario.csv.\n");
    return 0;
}

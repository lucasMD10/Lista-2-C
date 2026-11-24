/*
 * Aluno: Lucas Delfino
 * Exercício: 50
 * Descrição: Array de ponteiros para funções (soma, sub, mult, div); um índice escolhe a operação.
 * Data: 24/11/2026
 */
#include <stdio.h>

double soma(double a, double b) { return a + b; }
double sub(double a, double b)  { return a - b; }
double mult(double a, double b) { return a * b; }
double divi(double a, double b) { return a / b; }

int main(void) {
    double (*operacoes[4])(double, double) = {soma, sub, mult, divi};
    char *nomes[4] = {"Soma", "Subtracao", "Multiplicacao", "Divisao"};

    int indice;
    double a, b;

    printf("Escolha a operacao:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d - %s\n", i, nomes[i]);
    }
    printf("Indice: ");
    if (scanf("%d", &indice) != 1 || indice < 0 || indice > 3) {
        printf("Indice invalido.\n");
        return 1;
    }

    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (indice == 3 && b == 0) {
        printf("Erro: divisao por zero!\n");
        return 1;
    }

    double resultado = operacoes[indice](a, b);
    printf("%s: %.2f\n", nomes[indice], resultado);
    return 0;
}

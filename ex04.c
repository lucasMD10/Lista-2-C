/*
 * Aluno: Lucas Delfino
 * Exercício: 04
 * Descrição: Calculadora com menu que repete até o usuário escolher "Sair" (do-while).
 * Data: 24/11/2026
 */
#include <stdio.h>

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(void) {
    int opcao;
    double a, b;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        int lidos = scanf("%d", &opcao);
        if (lidos == EOF) {
            break;
        }
        if (lidos != 1) {
            limparBuffer();
            printf("Opcao invalida.\n");
            opcao = -1;
            continue;
        }

        if (opcao == 0) {
            printf("Encerrando a calculadora...\n");
        } else if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            if (scanf("%lf", &a) != 1) { if (feof(stdin)) break; limparBuffer(); printf("Numero invalido.\n"); continue; }
            printf("Digite o segundo numero: ");
            if (scanf("%lf", &b) != 1) { if (feof(stdin)) break; limparBuffer(); printf("Numero invalido.\n"); continue; }

            switch (opcao) {
                case 1: printf("Resultado: %.2f\n", a + b); break;
                case 2: printf("Resultado: %.2f\n", a - b); break;
                case 3: printf("Resultado: %.2f\n", a * b); break;
                case 4:
                    if (b == 0) {
                        printf("Erro: divisao por zero!\n");
                    } else {
                        printf("Resultado: %.2f\n", a / b);
                    }
                    break;
            }
        } else {
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}

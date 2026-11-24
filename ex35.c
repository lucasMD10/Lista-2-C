/*
 * Aluno: Lucas Delfino
 * Exercício: 35
 * Descrição: Função validarCPF(char cpf[]) que retorna 1 se o formato do CPF for válido e 0 se não.
 *            Aceita "12345678901" (11 dígitos) ou "123.456.789-01" (14 caracteres).
 *            Não confere os dígitos verificadores, só o formato.
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

int validarCPF(char cpf[]) {
    int tamanho = strlen(cpf);

    if (tamanho == 11) {
        for (int i = 0; i < tamanho; i++) {
            if ((cpf[i] < '0' || cpf[i] > '9')) return 0;
        }
        return 1;
    }

    if (tamanho == 14) {
        for (int i = 0; i < tamanho; i++) {
            if (i == 3 || i == 7) {
                if (cpf[i] != '.') return 0;
            } else if (i == 11) {
                if (cpf[i] != '-') return 0;
            } else if ((cpf[i] < '0' || cpf[i] > '9')) {
                return 0;
            }
        }
        return 1;
    }

    return 0;
}

int main(void) {
    char cpf[30];

    printf("Digite o CPF: ");
    if (fgets(cpf, sizeof(cpf), stdin) == NULL) {
        printf("Erro na leitura.\n");
        return 1;
    }
    removerQuebraLinha(cpf);

    if (validarCPF(cpf)) {
        printf("Formato de CPF valido.\n");
    } else {
        printf("Formato de CPF invalido.\n");
    }
    return 0;
}

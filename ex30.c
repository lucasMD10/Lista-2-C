/*
 * Aluno: Lucas Delfino
 * Exercício: 30
 * Descrição: Menu (do-while) para 1) inserir dados no arquivo, 2) exibir todos os dados, 3) sair.
 * Data: 24/11/2026
 */
#include <stdio.h>
#include <string.h>

#define NOME_ARQUIVO "dados.txt"

void removerQuebraLinha(char texto[]) {
    int tamanho = strlen(texto);
    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void inserirDados(void) {
    char texto[200];

    printf("Digite o dado a ser gravado: ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) {
        printf("Erro na leitura.\n");
        return;
    }
    removerQuebraLinha(texto);

    if (strlen(texto) == 0) {
        printf("Nada foi digitado.\n");
        return;
    }

    FILE *arquivo = fopen(NOME_ARQUIVO, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fprintf(arquivo, "%s\n", texto);
    fclose(arquivo);
    printf("Dado gravado com sucesso!\n");
}

void exibirDados(void) {
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    if (arquivo == NULL) {
        printf("Nenhum dado cadastrado ainda.\n");
        return;
    }

    char linha[200];
    int i = 0;
    printf("\n--- Dados gravados ---\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%d. %s", ++i, linha);
    }
    if (i == 0) {
        printf("Arquivo vazio.\n");
    }
    fclose(arquivo);
}

int main(void) {
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Inserir dados\n");
        printf("2 - Exibir todos os dados\n");
        printf("3 - Sair\n");
        printf("Opcao: ");

        if (scanf("%d", &opcao) != 1) {
            opcao = 0;
        }
        limparBuffer();

        switch (opcao) {
            case 1: inserirDados(); break;
            case 2: exibirDados(); break;
            case 3: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 3);

    return 0;
}

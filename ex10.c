/*
 * Aluno: Lucas Delfino
 * Exercício: 10
 * Descrição: Imprime os N primeiros termos da sequência de Fibonacci usando while.
 * Data: 24/11/2026
 *
 * Comparação com a versão anterior (com for):
 *  - No for, inicialização, condição e incremento ficam na mesma linha:
 *        for (int i = 0; i < n; i++) { ... }
 *  - No while, o contador é declarado antes e incrementado dentro do laço,
 *    então é preciso lembrar do "i++" para não cair em laço infinito.
 *  - O resultado impresso é exatamente o mesmo. O for é mais compacto quando
 *    já se sabe quantas repetições serão feitas (caso do Fibonacci com N termos);
 *    o while é mais natural quando a parada depende de uma condição.
 */
#include <stdio.h>

int main(void) {
    int n;
    int atual = 0, proximo = 1, temp;

    printf("Quantos termos de Fibonacci deseja ver? ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 46) {
        printf("Valor invalido. Digite entre 1 e 46.\n");
        return 1;
    }

    int i = 0;
    while (i < n) {
        printf("%d ", atual);
        temp = atual + proximo;
        atual = proximo;
        proximo = temp;
        i++;
    }
    printf("\n");

    return 0;
}

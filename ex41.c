/*
 * Aluno: Lucas Delfino
 * Exercício: 41
 * Descrição: Explicação do conceito de ponteiro e da diferença entre *p e &variavel,
 *            com um programa que demonstra na prática.
 * Data: 24/11/2026
 *
 * O QUE É UM PONTEIRO?
 *   Um ponteiro é uma variável que, em vez de guardar um valor comum (como 10
 *   ou 'A'), guarda um ENDEREÇO DE MEMÓRIA, ou seja, o "local" onde outra
 *   variável está armazenada. Declaração: int *p;  ->  p guarda o endereço
 *   de um int.
 *
 * &variavel  (operador "endereço de")
 *   Retorna o endereço de memória onde a variável está.
 *   Ex.: p = &x;  ->  p passa a apontar para x.
 *
 * *p  (operador de "desreferência" / "conteúdo de")
 *   Acessa o VALOR que está guardado no endereço para onde p aponta.
 *   Ex.: printf("%d", *p);  ->  imprime o valor de x.
 *        *p = 50;           ->  altera x para 50.
 *   Obs.: na declaração (int *p) o * só indica que p é um ponteiro.
 *
 * RESUMO:  &x  = "onde x mora"   |   *p = "o que tem lá onde p aponta"
 */
#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("Valor de x ............: %d\n", x);
    printf("Endereco de x (&x) ....: %p\n", (void *)&x);
    printf("Valor de p (endereco) .: %p\n", (void *)p);
    printf("Conteudo apontado (*p) : %d\n", *p);

    *p = 50;
    printf("Depois de *p = 50, x = %d\n", x);
    return 0;
}

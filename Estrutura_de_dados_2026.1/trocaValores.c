// Exercício 1: Troca de Valores (Swap)
// Escreva uma função chamada troca que recebe dois ponteiros para inteiros e inverte os valores das variáveis originais.

// O que fazer:

// Declare duas variáveis int x = 10, y = 20;.

// Chame a função passando os endereços de x e y.

// Dentro da função, use uma variável temporária e o operador * para trocar os valores.

#include <stdio.h>
#include <stdlib.h>

int trocadevalores(int *p1, int *p2)
{

    int troca = *p1;
    *p1 = *p2;
    *p2 = troca;
    return 0;
}

int main(void)
{

    int x = 25;
    int y = 70;

    printf("---VALORES NORMAIS---\n\n");
    printf("Numero 1:%d Numero 2: %d\n", x, y);
    trocadevalores(&x, &y);
    printf("---VALORES DEPOIS DA TROCA---\n\n");
      printf ("Numero 1:%d Numero 2: %d\n", x, y);
    return 0;
}
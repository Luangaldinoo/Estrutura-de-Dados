// Crie uma função que:

// receba um ponteiro para int
//  eleve o valor ao quadrado
//  mas só faça isso se o número for positivo

#include <stdio.h>
#include <stdlib.h>

void quadrado_se_positivo(int *p){
    if(*p > 0){
        *p = (*p) * (*p);
    } else{
    printf("NUMERO NEGATIVO!!! ------  DIGITE UM NUMERO POSITIVO!!!");
    }
}

int main(void)
{
 int num1,*p;

     printf("Digite um numero: ");
     scanf("%d",&num1);

     *p = num1;

         quadrado_se_positivo(&num1);

        printf("Apos aplicar quadrado, ficou: %d",num1);


    return 0;
}
// Crie uma função que:
//  receba um ponteiro para int
//  dobre o valor dessa variável (multiplique por 2)
//  altere o valor original diretamente na main

#include <stdio.h>
#include<stdlib.h>


void aoquadrado(int *p){
    *p = (*p) * (*p) + 1;
}

int main(void){

int a = 4;

aoquadrado(&a);

printf("O VALOR AO QUADRADO EH: %d",a);
return 0;
}
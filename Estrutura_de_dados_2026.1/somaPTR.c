
// Escreva um trecho de código que declare duas variáveis float​​, peça ao usuário para digitar os valores e,
//  em seguida, use apenas ponteiros para calcular e exibir a soma delas.



#include <stdio.h>
#include <stdlib.h>
int main(){

    float num1, num2,soma;
    float *p1,*p2;

    printf("Digite um valor: ");
    scanf("%f",&num1);
    printf("Digite outro valor: ");
    scanf("%f",&num2);

    p1 = &num1;
    p2 = &num2;

    soma = *p1 + *p2;

  printf("A soma total eh: %.2f ",soma);

return 0;
}
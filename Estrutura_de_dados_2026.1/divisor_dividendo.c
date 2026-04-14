// Escreva uma função void divisao(int dividendo, int divisor, int *quociente, int *resto).
//  Ela deve calcular ambos os resultados e armazená-los nas variáveis ​​apontadas pelos ponteiros.



#include <stdio.h>
#include <stdlib.h>

void divisao(int dividendo, int divisor, int *quociente, int *resto){
    *quociente = dividendo / divisor ;
    *resto =  dividendo % divisor;
}


int main(){

int dividendo = 30;
int divisor = 3;
int quociente,resto;

divisao(dividendo,divisor,&quociente,&resto);



printf("QUOCIENTE: %d\n",quociente);
printf("RESTO: %d",resto);
    

return 0;
}
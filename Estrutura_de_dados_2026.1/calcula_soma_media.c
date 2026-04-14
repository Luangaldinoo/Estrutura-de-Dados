// Crie uma função que:

// 👉 receba dois números float (a e b)
// 👉 calcule a soma dos dois
// 👉 calcule a média inteira deles
// 👉 retorne os dois resultados usando ponteiros
#include <stdio.h>
#include <stdlib.h>

void calcular_soma_media(float a, float b, float *soma, float *media){
     *soma = a + b;
     *media = *soma / 2;
}

int main(){
float a = 8.5;
float b = 6.8;
float soma,media;

calcular_soma_media(a,b,&soma,&media);
printf("SOMA: %.2f\n",soma);
printf("MEDIA: %.2f",media);


return 0;
}
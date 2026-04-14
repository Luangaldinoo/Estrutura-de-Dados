// Defina uma struct Livro com id( int) e preco( float). Na main, declare um livro e um ponteiro para ele. 
// Como você acessa e atribui valores aos campos do livro usando o ponteiro e o operador ->?

#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id;
float preco;
}livro;

int main(){
livro livro1;
livro *p = &livro1;

p->id = 776688;
p->preco = 38.07;

printf("ID: %d\n",p->id);
printf("Seu S: %.2f",p->preco);


return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char marca[40];
    char modelo[40];
    float preco;
    int quantidadeRAM;
} Notebook;                 //criei uma struct chamada Notebook com 4 informações!

int main(void)
{
    int i; //declarei uma variavel do tipo inteiro, opcional

    Notebook vetor[4]; //coloquei a struct dentro do vetor com tamanho 4, ou seja, agora tem 4 notebooks diferentes

    for (i = 0; i < 4; i++)  //laço de repetição para perguntar 4 vezes e guardar no vetor correspondente 
    {
        printf("Digite a marca do notebook: ");
        scanf("%s", vetor[i].marca); //marca sendo guardada dentro do vetor
        printf("Digite modelo do notebook: ");
        scanf("%s", vetor[i].modelo);
        printf("Digite o preco do notebook: ");
        scanf("%f", &vetor[i].preco);
        printf("Digite a quantidade de RAM do notebook: ");
        scanf("%d", &vetor[i].quantidadeRAM);
    }

    int indiceMAIOR = 0; //iniciei o maior indice por enquanto

    for (i = 1; i < 4; i++) //criei um outro laço que começa com 1, porque o maior está no posição 0;
    {

        if (vetor[i].quantidadeRAM > vetor[indiceMAIOR].quantidadeRAM) //se o vetor[i] for maior que o INDICEMAIOR, atribua o maior a I;
        {
            indiceMAIOR = i;
        }
    }


printf("\n========================================\n");
printf("     NOTEBOOK COM MAIOR RAM ENCONTRADO\n");
printf("========================================\n");

    printf("Modelo: %s\n", vetor[indiceMAIOR].modelo);
    printf("Preco: %.2f\n", vetor[indiceMAIOR].preco); //mostrar res.

printf("----------------------------------------\n");
    return 0;
}
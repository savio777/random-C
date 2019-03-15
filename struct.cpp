#include <stdio.h>

struct pessoa{
    char nome[30];
    int idade;
    char endereco[50];
};

//typedef int Int;
int main(){
    //Int idadeN = 18;
    //printf("%d\n",idadeN);
    pessoa p; 

    printf("\nPasse seus dados\n");

    printf("seu nome~> "); 
    gets(p.nome); // gets para pegar string com espaço

    printf("sua idade~> ");
    scanf("%d", &p.idade);
    //fflush(stdin);
    setbuf(stdin,NULL); // limpar o buff para não pular o gets

    printf("seu endereco~> ");
    gets(p.endereco);

    printf("\nSeus dados:\nnome~> %s\n", p.nome);
    printf("idade~> %d\n", p.idade);
    printf("endereco~> %s\n", p.endereco);

    return 0;
}
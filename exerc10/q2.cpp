#include <stdio.h>

int main(void)
{
    int ano;

    printf("de um ano~> ");
    scanf("%d", &ano);

    if( ((ano%400==0)||(ano%4==0))&&(ano%100!=0) ){
        printf("ano e bissexto\n");
    }else{
        printf("nao e bissexto\n");
    }

    return 0;
}
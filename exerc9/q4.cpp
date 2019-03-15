#include <stdio.h>

int main(void)
{
    int n, soma=0;

    printf("digite varios ints (termina com 0):\n");

    do{
        scanf("%d", &n);
        if(n<0){
            soma=soma+n;
        }
    }while(n!=0);

    printf("soma dos negativos~> %d\n", soma);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int num=1, limite, i, soma=3;

    printf("de o numero limite~> ");
    scanf("%d", &limite);
    
    while(num<limite){
        printf("%d, ", num);
        num = num + soma;
        soma = soma+2;
    }

    printf("\n");

    return 0;
}
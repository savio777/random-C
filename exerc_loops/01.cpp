#include <stdio.h>

int main(void)
{
    double soma = 0.0;
    int i=0, limite;

    printf("de um inteiro positivo~> ");
    scanf("%d", &limite);

    for(i=1;i<=limite;i++){
        soma=soma + (float)1.0/i;
    }

    printf("soma~> %.1f\n", soma);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int i, num;

    printf("de um inteiro positivo~> ");
    scanf("%d", &num);

    for(i=0;i<11;i++){
        printf("%d * %d ~> %d\n", num, i, num*i);
    }

    return 0;
}
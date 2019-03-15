#include <stdio.h>

int main(void)
{
    int i=0, num;

    contagem:
        if(i<11)
        {
            printf("%d\t", i);
            i++;
            goto contagem;
        }

    printf("\nde um numero~> ");
    scanf("%d", &num);

    if(num%2==0){
        printf("%d ~> par\n", num);
        goto terminar;
    }

    printf("%d ~> impar\n", num);

    terminar: return 0;

    //return 0;
}

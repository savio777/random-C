#include <stdio.h>

int main(void)
{
    int num[10];
    int i, cont;

    printf("10 inteiros:\n");

    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
    }

    for(i=0;i<10;i++){
        if(num[i]%2==0){
            cont++;
        }
    }

    printf("numeros positivos~> %d\n", cont);

    return 0;
}
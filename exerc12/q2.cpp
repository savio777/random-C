#include <stdio.h>

int main(void)
{
    int num[10], i;

    printf("de 10 numeros:\n");

    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
    }

    for(i=0;i<10;i+=2){
        printf("\t[%d]=%d", i, num[i]);
    }

    printf("\n");

    return 0;
}
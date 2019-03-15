#include <stdio.h>

int main(void)
{
    int fat, i;

    printf("de um numero para fatorar~> ");
    scanf("%d", &fat);

    i=fat-1;

    if(fat==0){
        fat=1;
    }else if(fat==1){
        fat=1;
    }else{
        while(i>0){
            fat = fat*i;
            i--;
        }    
    }

    printf("\nresultado~> %d\n", fat);

    return 0;
}
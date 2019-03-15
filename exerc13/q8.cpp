#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[30];
    int i, cont1=0, cont0=0;

    printf("digite varios 0 e 1~> ");
    scanf("%s", &palavra);

    for(i=0;i<strlen(palavra);i++){
        if(palavra[i]=='0'){
            cont0++;
        }else if(palavra[i]=='1'){
            cont1++;
        }
    }

    printf("\n0~> %d\n", cont0);
    printf("1~> %d\n", cont1);

    return 0;
}
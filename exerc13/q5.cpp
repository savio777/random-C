#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[30];
    int i, cont=0;

    printf("escreva uma palavra~> ");
    scanf("%s", &palavra);

    for(i=0;i<strlen(palavra);i++){
        if(!((palavra[i]=='a')||(palavra[i]=='e')||(palavra[i]=='i')||(palavra[i]=='o')||(palavra[i]=='u'))){
            cont++;
        }
    }

    printf("quantidade de consoantes~> %d\n", cont);

    return 0;
}

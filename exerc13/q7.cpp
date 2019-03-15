#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[30];
    int i;

    printf("escreva uma palavra q contenha a||A~> ");
    scanf("%s", &palavra);

    for(i=0;i<strlen(palavra);i++){
        if(palavra[i]=='A'||palavra[i]=='a'){
            palavra[i]='@';
        }
    }

    printf("%s\n", palavra);

    return 0;
}
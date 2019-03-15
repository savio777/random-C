#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[30], c;
    int i;

    printf("uma palavra~> ");
    gets(palavra);

    printf("um char~> ");
    scanf("%c", &c);

    for(i=0;i<strlen(palavra);i++){
        if((palavra[i]=='a')||(palavra[i]=='e')||(palavra[i]=='i')||(palavra[i]=='o')||(palavra[i]=='u')){
            palavra[i]=c;
        }
    }

    printf("\n%s\n", palavra);

    return 0;
}
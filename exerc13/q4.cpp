#include <stdio.h>
#include <string.h>

int main(void)
{
    char  palavra[30], vogal[30];
    int i, s=0;

    printf("escreva uma palavra~> ");
    scanf("%s", &palavra);

    for(int i=0;i<strlen(palavra);i++){
        if((palavra[i]=='a')||(palavra[i]=='e')||(palavra[i]=='i')||(palavra[i]=='o')||(palavra[i]=='u')){
            vogal[s]=palavra[i];
            s++;
        }
    }

    printf("\nvogais~> %s\n", vogal);

    return 0;
}
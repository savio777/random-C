#include <stdio.h>
#include <string.h>

int main(void)
{   
    char palavra[30], palavraR[30], temp;
    int i=0, k;

    printf("uma palavra~> ");
    scanf("%s", &palavra);

    for(k=strlen(palavra)-1;k>=0;k--){
        palavraR[i]=palavra[k];    
        i++;
    }


    printf("\npalavra invertida~> %s\n", palavraR);

    return 0;
}
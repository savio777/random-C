#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[30];
    int cont, a=0, e=0, i=0, o=0, u=0;

    printf("palavra~> ");
    scanf("%s", &palavra);

    for(cont=0;cont<strlen(palavra);cont++){
        (palavra[cont]=='a')?a++:a=a;
        (palavra[cont]=='e')?e++:e=e;
        (palavra[cont]=='i')?i++:i=i;
        (palavra[cont]=='o')?o++:o=o;
        (palavra[cont]=='u')?u++:u=u;
    }

    printf("\na=%d, e=%d, i=%d, o=%d, u=%d\n", a, e, i, o, u);

    return 0;
}
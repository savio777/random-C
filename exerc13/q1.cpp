/* //JEITO ERRADO KK
#include <iostream>

using namespace std;

int main(void)
{
    string palavra1, palavra2, palavra3, palavras;

    cout<<"de 3 palavras:"<<endl;

    cin>>palavra1>>palavra2>>palavra3;

    palavras=palavra1+palavra2+palavra3;

    cout<<endl<<palavras<<endl;

    return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra1[30], palavra2[30], palavra3[30], palavras[90];
    int i, s;

    printf("de 3 palavras\n");

    scanf("%s%s%s", palavra1, palavra2, palavra3);

    printf("tamanho da primeira string~> %d\n", strlen(palavra1));
    printf("tamanho da segunda~> %d\n", strlen(palavra2));
    printf("tamanho da ultima~> %d\n", strlen(palavra3));

    for(i=0;i<strlen(palavra1);i++){
        palavras[i]=palavra1[i];
    }

    for(i=strlen(palavra1),s=0;i<strlen(palavra1)+strlen(palavra2),s<strlen(palavra2);i++,s++){
        palavras[i]=palavra2[s];
    }

    for(i=strlen(palavra1),s=0;i<strlen(palavra1)+strlen(palavra2),s<strlen(palavra2);i++,s++){
        palavras[i]=palavra2[s];
    }

    for(i=strlen(palavra2)+strlen(palavra1),s=0;i<strlen(palavra1)+strlen(palavra2)+strlen(palavra3),s<strlen(palavra3);i++,s++){
        palavras[i]=palavra3[s];
    }

    printf("\n%s", palavras);

    return 0;
}
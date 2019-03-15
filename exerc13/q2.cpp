#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    int i, cont=0, x, s;

    printf("uma frase com espacos e ate 50 chars:\n");
    gets(str);

    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            s=i;
            while(true){
                str[s]=str[s+1];
                s++;
                if(str[s]==' '){
                    break;
                }
            }
            cont++;
        }
    }

    printf("\nfrase sem espaços:\n");
    printf("%s\nespaços em branco~> %d\n", str, cont);

    return 0;
}
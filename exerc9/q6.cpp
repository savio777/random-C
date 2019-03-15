#include <stdio.h>

int main(void)
{
    int i, escolha;

    printf("\n(0)sair\n");
    printf("(1)alfabeto maiusculo\n");
    printf("(2)alfabeto minusculo\n");
    printf("(3)numeros\n");
    printf(">");

    scanf("%d", &escolha);

    if(escolha==0){
        printf("tchau\n");
        return 0;
    }else if(escolha==1){
        for(i=65;i<=90;i++){
            printf("%c\n", i);
        }
    }else if(escolha==2){
        for(i=97;i<=122;i++){
            printf("%c\n", i);
        }
    }else if(escolha==3){
        for(i=48;i<=57;i++){
            printf("%c\n", i);
        }
    }

    return 0;
}
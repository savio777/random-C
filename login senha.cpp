#include <stdio.h>

int main(void)
{
    char user[30];
    char senha[30];
    char verU[30];
    char verS[30];

    printf("\nnovo usuario~> ");
    scanf("%s", &user);

    printf("nova senha~> ");
    scanf("%s", &senha);

    printf("\nlogar pela primeira vez.\n");
    printf("user~> ");
    scanf("%s", &verU);
    printf("senha~> ");
    scanf("%s", &verS);

    int i;
    bool verif;

    for(i=0;i<30;i++){
        if((user[i]==verU[i])&&(senha[i]==verS[i])){
            verif=true;
        }else{
            verif=false;
        }
    }

    (verif==true)?printf("\n\tBEM VINDO\n"):printf("\n\tsenha ou usuario incorreto\n");

    //printf("%s\t%s\t%s\t%s", user, verU, senha, verS);

    return 0;
}
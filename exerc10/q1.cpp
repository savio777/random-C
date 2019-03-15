#include <stdio.h>

int main(void)
{
    int i;

    printf("de um inteiro~> ");
    scanf("%d", &i);

    if((i%3==0)&&(i%5==0)){
        printf("%d e divisivel por 3 e 5\n", i);
    }else{
        if(i%3==0){
            printf("%d e divisivel por 3\n", i);
        }else if(i%5==0){
            printf("%d e divisivel por 5\n", i);
        }
    }

    if(!((i%3==0)&&(i%5==0))){
        printf("%d nao e divisivel por 3 e 5\n", i);
    }

    return 0;
}
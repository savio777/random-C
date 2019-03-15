#include <stdio.h>

int main(void){
    int n, i;

    printf("de um numero limite~> ");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        if(i%2!=0){
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
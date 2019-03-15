#include <stdio.h>

int main(void)
{
    int n, i;

    printf("de um limite~> ");
    scanf("%d", &n);

    for(i=n;i>-1;i--){
        printf("%d, ", i);
    }
    
    printf("\n");

    return 0;
}
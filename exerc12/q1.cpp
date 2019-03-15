#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    float num[10];
    int i;

    for(i=0;i<10;i++){
        num[i] = rand()%11;
    }

    for(i=0;i<10;i++){
        printf("%.1f\t", num[i]*num[i]);
    }

    printf("\n");

    for(i=0;i<10;i++){
        printf("%.1f\t", num[i]*2);
    }

    printf("\n");

    return 0;
}
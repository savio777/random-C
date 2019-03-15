#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int n = 20+(rand()%51); // de 20 a 50 random (tamanho do vetor)
    int i, num[n]; 

    for(i=0;i<n;i++){
        num[i]=rand()%99;
        if(rand()%2==0){
            num[i]=num[i]*-1;
        }
    }

    for(i=0;i<n;i++){
        printf("%d, ", num[i]);
    }
    
    printf("\n\n");

    for(i=0;i<n;i++){
        if(num[i]<0){
            num[i]=num[i]*-1;
            printf("%d, ", num[i]);
        }else{
            printf("%d, ", num[i]);
        }
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int cont=1, num, numRandom;
    bool flag=false;

    srand(time(NULL));

    numRandom = rand() % 101;

    printf("tente acertar o numero aleatorio:\n");

    do{
        scanf("%d", &num);

        if(num==numRandom){
            printf("PARABENS, tentativas~> %d\n", cont);
            flag=true;
        }else{
            (num<numRandom)?printf("menor que o numero magico\n"):printf("maior que o numero magico\n");
        }

        cont++;
    }while(flag!=true);

    return 0;
}
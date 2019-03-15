#include <stdio.h>

int main(void)
{
    int matriz[3][3], i, s, num=1, maior, menor, soma=0;

    for(s=0;s<3;s++){
        for(i=0;i<3;i++){
            matriz[s][i]=num++;
        }
    }

    maior=matriz[0][0];
    menor=matriz[0][0];

    for(s=0;s<3;s++){
        for(i=0;i<3;i++){
            //printf("%d\n", matriz[s][i]);
            (maior<matriz[s][i])?maior=matriz[s][i]:maior=maior;
            (menor>matriz[s][i])?menor=matriz[s][i]:menor=menor;
            soma+=matriz[s][i];
        }
    }

    printf("menor numero~> %d\n", menor);
    printf("maior numero~> %d\n", maior);
    printf("somatorio~> %d\n", soma);

    return 0;
}
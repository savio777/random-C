#include <stdio.h>

#define PI 3.14

int main(void)
{
    float tempo, melhorTempo=1000.0, somaTempo,contVoltas=1, medVoltas, melhorVolta;

    printf("de os tempos: (tempo=0, termina)\n");

    do{
        scanf("%f", &tempo);

        if((tempo<melhorTempo)&&(tempo>0.0)){
            melhorTempo=tempo;
            melhorVolta=contVoltas;
        }

        somaTempo += tempo;

        contVoltas++;
    }while(tempo!=0);

    medVoltas = somaTempo/contVoltas;

    printf("media voltas~> %.1f\n", medVoltas);
    printf("volta melhor tempo~> %.0f\n", melhorVolta);
    printf("melhor tempo~> %.1f\n", melhorTempo);
    
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n, cont=0, contpar=0, somarpar=0, maior=0, menor, somar=0;
    float media;

    printf("de varios ints (termina com 0):\n");

    do{
        scanf("%d", &n);

        if(n%2==0){
            contpar++;
            somarpar+=n;
        }

        somar += n;
        media = float(somar)/float(cont);

        (n<menor)?menor=n:menor=menor;

        (n>maior)?maior=n:maior=maior;

        cont++;
    }while(n!=0);

    printf("numeros lidos~> %d\n", cont);
    printf("numeros pares~> %d\n", contpar);
    printf("somatoria de pares~> %d\n", somarpar);
    printf("media de tudo~> %.1f\n", media);
    printf("menor numero~> %d\n", menor);
    printf("maior numero~> %d\n", maior);

    return 0;
}
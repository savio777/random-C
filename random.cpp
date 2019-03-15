#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, limite, quant;

    srand(time(NULL));

    printf("numeros aleatorios:\n");

    for(i=0;i<10;i++)
    {
        printf("%d\n", rand()%200);
    }

    printf("\n\nescolha o limite do numero aleatorio e quantidade de vezes q repetir:\n");
    scanf("%d%d", &limite, &quant);

    for(i=0;i<quant;i++){
        printf("%d\n", rand()%limite);
    }

    return 0;
}

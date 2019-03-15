#include <stdio.h>

void simbolosNumeros()
{
    int i;
    for(i=33;i<=64;i++)
        printf("%d ~> %c\n", i, i);
    
    for(i=91;i<=96;i++)
        printf("%d ~> %c\n", i, i);

    for(i=123;i<=126;i++)
        printf("%d ~> %c\n", i, i);
}

void simbolosLetrasM()
{
    int i;
    for(i=41;i<=90;i++)
        printf("%d ~> %c\n", i, i);
}

void simbolosLetras()
{
    int i;
    for(i=97;i<=122;i++)
        printf("%d ~> %c\n", i, i);
}

int main(void)
{
    int esc;
    printf("\n\t~ TABELA ASCII ~\n\n");
    printf("0~> sair\n");
    printf("1~> simbolos e numeros\n");
    printf("2~> letras minusculas\n");
    printf("3~> letras maiusculas\n");
    printf("> ");

    scanf("%d", &esc);

    switch(esc)
    {
        case 0:
            printf("\e[H\e[2J"); // "clear"
            printf("\nflw\n");
            return 0;
            break;
        case 1:
            printf("\e[H\e[2J");
            simbolosNumeros();
            main();
            break;
        case 2:
            printf("\e[H\e[2J");
            simbolosLetras();
            main();
            break;            
        case 3:
            printf("\e[H\e[2J");
            simbolosLetrasM();
            main();
            break;
        default:
            printf("\e[H\e[2J");
            printf("errado\n");
            main();
            break;
    }
    return 0;
}
#include <stdio.h>

/*int dobro(int num){
    return num*2;
}*/

int soma(int n1, int n2){
    return n1+n2;
}

void somaV(int n1, int n2){
    printf("\n%d\n", n1+n2);
}

void soma(){
    printf("\n%d\n", 1+1);
}

int main(void)
{
    /*int num, numDobro;
    
    printf("de um inteiro~> ");
    scanf("%d", &num);

    numDobro = dobro(num);

    printf("dobro~> %d\n", numDobro);*/

    int num1, num2;

    printf("de dois inteiros\n");
    scanf("%d%d", &num1, &num2);

    printf("\nSoma:\n%d", soma(num1,num2));

    somaV(num1,num2);

    soma();

    return 0;
}
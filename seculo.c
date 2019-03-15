#include <stdio.h>

int centuryFromYear(int ano) {
    int unidade, dezena, centena, milhar, seculo;

    unidade=ano%10;
    dezena=(ano%100)-unidade;
    centena=(ano%1000)-(unidade+dezena);
    milhar=(ano%10000)-(unidade+dezena+centena);

    seculo=(milhar/100)+(centena/100);

    if((unidade+dezena)>0){
        seculo++;
    }

    return seculo;
}

int main(void)
{
    int ano;/*, unidade, dezena, centena, milhar, seculo;

    printf("o ano: ");
    scanf("%d", &ano);

    unidade=ano%10;
    dezena=(ano%100)-unidade;
    centena=(ano%1000)-(unidade+dezena);
    milhar=(ano%10000)-(unidade+dezena+centena);

    //printf("%d\n", unidade+dezena+centena+milhar);
    seculo=(milhar/100)+(centena/100);

    if((unidade+dezena)>0){
        seculo++;
    }

    printf("\n%d %d %d\n", milhar, milhar/100, centena/100); // para testar

    printf("\nseculo~> %d\n", seculo);*/

    printf("ano~> ");
    scanf("%d", &ano);

    printf("seculo~> %d\n", centuryFromYear(ano));

    return 0;
}
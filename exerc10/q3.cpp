#include <stdio.h>

int main(void)
{
    float peso, alt;

    printf("de o peso~> ");
    scanf("%f", &peso);

    printf("altura~> ");
    scanf("%f", &alt);

    printf("classificacao~> ");

    if( (alt<1.2)){
        if(peso<60.0){
            printf("A");
        }else if((peso>=60.0)&&(peso<=90.0)){
            printf("D");
        }else if(peso>90.0){
            printf("G");
        }
    }else if( (alt>1.1)&&(alt<=1.7) ){
        if(peso<60.0){
            printf("B");
        }else if((peso>=60.0)&&(peso<=90.0)){
            printf("E");
        }else if(peso>90.0){
            printf("H");
        }
    }else if(alt>1.7){
        if(peso<60.0){
            printf("C");
        }else if((peso>=60.0)&&(peso<=90.0)){
            printf("F");
        }else if(peso>90.0){
            printf("I");
        }
    }

    printf("\n");

    return 0;
}
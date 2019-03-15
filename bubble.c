#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;

// verificar bubble melhorado
bool verif(int vet[], size_t tamanho){
    size_t i;

    for(i=0;i<tamanho-1;i++){
        if(vet[i]>vet[i+1]){
            return true;
        }
    }
    return false;
}

int main(void){
    
    int vet0[]={10,4,5,7,3,1};
    int vet1[]={10,4,5,7,3,1};
    int i, s, aux;
    int tamanho=sizeof(vet0)/sizeof(int);
    //int flag=0;

    printf("\nantes, tamanho vetor~> %d\n", tamanho);

    for(i=0;i<tamanho;i++){
        printf("%d, ", vet1[i]);
    }

    printf("\n");
    /*
    for(i=0;i<tamanho;i++){
        printf("%d, ", vet0[i]);
    }

    printf("\n\ndo meu jeito:\n");

    // jeito simples
    for(i=0;i<tamanho;i++){
        printf("\n[%d] = ", i);
        for(s=0;s<tamanho;s++){
            if((vet0[s]>vet0[s+1])&&(s<tamanho-1)){
                aux=vet0[s];
                vet0[s]=vet0[s+1];
                vet0[s+1]=aux;
            }
            printf("%d, ", vet0[s]);
        }
    }

    printf("\n\ndepois:\n");

    for(i=0;i<tamanho;i++){
        printf("%d, ", vet0[i]);
    }

    printf("\n\njeito certo:\n");*/
    
    // jeito certo
    /*for(i=tamanho-1;i>=0;i--){
        printf("\n[%d] = ", i);
        for(s=0;s<=i;s++){
            if((vet1[s]>vet1[s+1])&&(s<=i-1)){
                aux=vet1[s+1];
                vet1[s+1]=vet1[s];
                vet1[s]=aux;
            }
            printf("%d, ", vet1[s]);
        }
    }*/

    // jeito melhorado teste
    for(i=tamanho-1;i>=0;i--){    // primeiro for de trás para frente
        printf("\n[%d] = ", i);
        for(s=0;s<i;s++){   // for de frente para trás - o primeiro for, como o primeiro for vai 
                            //  decrementando, cada vez menos fará menos interações, deixando mais rapido 
            if(verif(vet1,tamanho)==false){  // função usada para verificar se o vetor já está ordenado, 
                break;                       // fica mais ou menos adaptavel dependendo do vetor
            }
            if(vet1[s]>vet1[s+1]){  // mesmo tendo menos iterações, os numeros maiores serão os primeiros
                aux=vet1[s+1];      // a serem ordenados, nas ultimas iterações serão ordenados os primeiros
                vet1[s+1]=vet1[s];  // numeros
                vet1[s]=aux;
            }
            printf("%d, ", vet1[s]);  // não dá para imprimir tudo pq o for não pode passar por todos os 
        }                             // indices, por causa das comparações que utilizam um valor a mais
    }                                 // q o indice


    printf("\n\ndepois:\n");

    for(i=0;i<tamanho;i++){
        printf("%d, ", vet1[i]);
    }

    printf("\n");

    return 0;
}
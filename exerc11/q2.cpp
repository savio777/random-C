#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    float a[9], b[9], c[9], temp; 
    int i, s;

    for(i=0;i<6;i++){
        a[i]=rand()%11;
        b[i]=rand()%11;
        c[i]=rand()%11;
    }

    a[6]=a[0]; // a[6] armazena menor valor
    a[7]=a[0]; // a[7] armazena maior valor/2

    for(i=0;i<6;i++){
        (a[6]<a[i])?a[6]=a[i]:a[6]=a[6];
        (a[7]>a[i])?a[7]=a[i]/2:a[7]=a[7]/2;
        // a[8] armazena resultado geral
        a[8]=a[6]+a[7]; 
    }

    b[6]=b[0];
    b[7]=b[0];

    for(i=0;i<6;i++){
        (b[6]<b[i])?b[6]=b[i]:b[6]=b[6];
        (b[7]>b[i])?b[7]=b[i]/2:b[7]=b[7]/2;
        b[8]=b[6]+b[7];
    }

    c[6]=c[0];
    c[7]=c[0];

    for(i=0;i<6;i++){
        (c[6]<c[i])?c[6]=c[i]:c[6]=c[6];
        (c[7]>c[i])?c[7]=c[i]/2:c[7]=c[7]/2;
        c[8]=c[6]+c[7];
    }

    // ordenar valores
    /*for(s=1;s<6;s++){
        for(i=0;i<6-1;i++){
            if(a[i]<a[s]){
                temp=a[s];
                a[s]=a[i];
                a[i]=temp;
            }
        }
    }

    for(s=1;s<6;s++){
        for(i=0;i<6-1;i++){
            if(b[i]<b[s]){
                temp=b[s];
                b[s]=b[i];
                b[i]=temp;
            }
        }
    }

    for(s=1;s<6;s++){
        for(i=0;i<6-1;i++){
            if(c[i]<c[s]){
                temp=c[s];
                c[s]=c[i];
                c[i]=temp;
            }
        }
    }*/

    // imprimir resultados

    if((a[8]>b[8])&&(b[8]>c[8])){
        printf("grupo A:\n");
        for(i=0;i<6;i++){
            printf("%1.f, ", a[i]);
        }
        printf("\nnota geral~> %.1f\n", a[8]);

        printf("\ngrupo B:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", b[i]);
        }
        printf("\nnota geral~> %.1f\n", b[8]);

        printf("\ngrupo C:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", c[i]);
        }
        printf("\nnota geral~> %.1f\n", c[8]);

    }else if((a[8]>c[8])&&(c[8]>b[8])){
        printf("grupo A:\n");
        for(i=0;i<6;i++){
            printf("%1.f, ", a[i]);
        }
        printf("\nnota geral~> %.1f\n", a[8]);

        printf("\ngrupo C:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", c[i]);
        }
        printf("\nnota geral~> %.1f\n", c[8]);

        printf("\ngrupo B:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", b[i]);
        }
        printf("\nnota geral~> %.1f\n", b[8]);

    }else if((b[8]>a[8])&&(a[8]>c[8])){
        printf("\ngrupo B:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", b[i]);
        }
        printf("\nnota geral~> %.1f\n", b[8]);

        printf("grupo A:\n");
        for(i=0;i<6;i++){
            printf("%1.f, ", a[i]);
        }
        printf("\nnota geral~> %.1f\n", a[8]);

        printf("\ngrupo C:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", c[i]);
        }
        printf("\nnota geral~> %.1f\n", c[8]);

    }else if((b[8]>c[8])&&(c[8]>a[8])){
        printf("\ngrupo B:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", b[i]);
        }
        printf("\nnota geral~> %.1f\n", b[8]);

        printf("\ngrupo C:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", c[i]);
        }
        printf("\nnota geral~> %.1f\n", c[8]);

        printf("grupo A:\n");
        for(i=0;i<6;i++){
            printf("%1.f, ", a[i]);
        }
        printf("\nnota geral~> %.1f\n", a[8]);
    }else if((c[8]>a[8])&&(a[8]>b[8])){
        printf("\ngrupo C:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", c[i]);
        }
        printf("\nnota geral~> %.1f\n", c[8]);

        printf("grupo A:\n");
        for(i=0;i<6;i++){
            printf("%1.f, ", a[i]);
        }
        printf("\nnota geral~> %.1f\n", a[8]);

        printf("\ngrupo B:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", b[i]);
        }
        printf("\nnota geral~> %.1f\n", b[8]);

    }else if((c[8]>b[8])&&(b[8]>a[8])){
        printf("\ngrupo C:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", c[i]);
        }
        printf("\nnota geral~> %.1f\n", c[8]);

        printf("\ngrupo B:\n");
        for(i=0;i<6;i++){
            printf("%.1f, ", b[i]);
        }
        printf("\nnota geral~> %.1f\n", b[8]);

        printf("grupo A:\n");
        for(i=0;i<6;i++){
            printf("%1.f, ", a[i]);
        }
        printf("\nnota geral~> %.1f\n", a[8]);
    }

    /*printf("grupo A:\n");
    for(i=0;i<6;i++){
        printf("%1.f, ", a[i]);
    }
    printf("\nnota geral~> %d\n", a[8]);

    printf("\ngrupo B:\n");
    for(i=0;i<6;i++){
        printf("%.1f, ", b[i]);
    }
    printf("\nnota geral~> %d\n", b[8]);
    
    printf("\ngrupo C:\n");
    for(i=0;i<6;i++){
        printf("%.1f, ", c[i]);
    }
    printf("\nnota geral~> %d\n", c[8]);*/

    return 0;
}
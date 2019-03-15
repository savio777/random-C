#include <stdio.h>

int main(void)
{
    int num[5], i, s, temp;

    printf("de 5 valores ints:\n");
    
    for(i=0;i<5;i++){
        scanf("%d", &num[i]);
    }

    printf("\n");

    for(i=0;i<5;i++){
        printf("%d, ", num[i]);
    }

    printf("\n");

    for(i=1;i<5;i++){
        printf("\n[%d]", i);
        for(s=0;s<5-1;s++){
            printf("%d, ", s);
            if(num[s]>num[i]){
                temp=num[s];
                num[s]=num[i];
                num[i]=temp;
            }
        }
    }

    printf("\n\n");

    for(i=0;i<5;i++){
        printf("%d, ", num[i]);
    }

    printf("\n\n");

    for(i=5;i<0;i--){
        for(s=0;s<5;s++){
            temp=num[s];
            num[s]=num[i];
            num[i]=temp;
        }
    }

    for(i=0;i<5;i++){
        printf("%d, ", num[i]);
    }

    printf("\n");

    return 0;
}
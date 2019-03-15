#include <stdio.h>

int main(void)
{
    int i;

    for(i=1000;i<2001;i++){
        if(i%11==5){
            printf("%d\n", i);
        }
    }

    return 0;
}
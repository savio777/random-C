#include <stdio.h>

int main(void)
{
    int i, s=1;
    char flag = 'a';
   
    do{
        if(flag=='a'){
            for(i=1;i<11;i++){
                printf("%d + %d = %d\n", s, i, s+i);
                if(s==11){
                    flag='b';
                    s=1;
                }
            }
        }else if(flag=='b'){
            for(i=1;i<11;i++){
                printf("%d - %d = %d\n", s, i, s-i);
                if(s==11){
                    flag='c';
                    s=1;
                }
            }
        }else if(flag=='c'){
            for(i=1;i<11;i++){
                printf("%d * %d = %d\n", s, i, s*i);
                if(s==11){
                    flag='d';
                    s=1;
                }
            }
        }else if(flag=='d'){
            for(i=1;i<11;i++){
                printf("%d / %d = %.1f\n", s, i, (float)s/i);
                if(s==10){
                    flag='s';
                }
            }
        }
        printf("\n");
        s++;
    }while((s<=11)&&(flag!='s'));
    

    return 0;
}
#include <iostream>
#include <unistd.h>  // sleep
#include <stdio.h>   // clear~> printf("\e[H\e[2J");
#include <stdlib.h>

using namespace std;

int main(void)
{
    int h,m,s;
    
    cout<<"~acertar relogio~ ('h' depois 'm' depois 's')"<<endl;

    cin>>h>>m>>s;

    while(true){
	system("clear");
        cout<<h<<":"<<m<<":"<<s<<endl;
        s++;
        //system("clear");
        //printf("\e[H\e[2J");

        sleep(1);

        if(s==60){
            s=0;
            m++;
        }
        if(m==60){
            m=0;
            h++;
        }
        if(h==24){
            h=0;
            m=0;
            s=0;
        }
    }

    return 0;
}

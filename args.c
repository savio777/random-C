#include <stdio.h>

int main(int argi, char * argc[])
{
	int i;
	
	//printf("%d\n", argi);  // teste

	if(argi>1){
		for(i=1;i<argi;i++){  // o primeiro argumento é o nome do proprio programa
			printf("arg[%d]=%s\n",i,argc[i]);	
		}
	}else{
		printf("de argumentos\n");
	}

	return 0;
}

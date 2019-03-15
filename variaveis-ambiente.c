#include <stdio.h>


int main(int argc, char * argv[], char * env[]){
	int i;

	//printf("%s\n", getenv("HOME"));  // só funciona com stdlib.h e só retorna a variavel que passar como parametro
	
	for(i=0;env[i]!=NULL;i++){
		printf("%s\n",env[i]);
	
	}	


	return 0;
}

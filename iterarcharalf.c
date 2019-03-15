#include <stdio.h>

int main(void)
{
	char c=' ';

	for(c='A';c<='z';c++){
		
		if((c>=91)&&(c<=96)){
			continue;
		}
		printf("%d - %c\n",c,c);
	}

	return 0;
}

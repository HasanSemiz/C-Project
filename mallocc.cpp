#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *p;
	p=(char*)malloc(11*sizeof(char));
	
	if(p==NULL)
	{
		printf("yeterli alan yok");
	}
	
	
	strcpy(p,"Hasan Semiz");
	
	printf("%s",p);
	free(p);
	return 0;
	
	
	
	
	
	
}

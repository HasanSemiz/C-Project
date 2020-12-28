#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char*p;
	p=(char*)malloc(5*sizeof(char));
	if(p==NULL)
	{
		printf("alan yok");
	}
	strcpy(p,"Hasan\n");
	printf("%s",p);

	
	if(p==NULL)
	{
		printf("alan yok");
	}
	strcpy(p,"Hasan Semiz");
	printf("%s",p);
	free(p);
	return 0;
	
	
}

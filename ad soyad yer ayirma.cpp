#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *ptr;

	ptr=(char*)malloc(20*sizeof(char));
	
	if(ptr==NULL)
	printf("yer yok");
	
	strcpy(ptr,"hasansemiz");

	printf("sonuc=%s\n",ptr);
	
	return 0;
	
}

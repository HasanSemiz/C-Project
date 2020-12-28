#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *ptr;
	
	ptr=(char*)malloc(8*sizeof(char));
    if(ptr==NULL)
	printf("yer yok");	
	strcpy(ptr,"hasan");
	printf("icerik=%s\n",ptr);
	ptr=(char*)realloc(ptr,20*sizeof(char));
	if(ptr==NULL)
	printf("yer yok");	
	strcpy(ptr,"hasan semiz");
	printf("sonuc=%s\n",ptr);
	free(ptr);
    
	
	
	
	
}

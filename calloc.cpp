#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,i;
	float *ptr;
	printf("eleman sayisini yaziniz=");
	scanf("%d",&x);
	ptr=(float*)calloc(x,sizeof(float));
	
	if(ptr==NULL ){
		printf("alan yok");
		exit(0);
	}
	
	for(i=0;i<x;i++){
	
	printf("%d. elaman degeri giriniz=",i+1);
	scanf("%f",ptr+i);
      }
     for(i=1;i<x;i++)
	 {
	 if(*ptr<*(ptr+i))
	 *ptr=*(ptr+i);}
	 printf("%.2f",*ptr);
	
	return 0;
	
	
}

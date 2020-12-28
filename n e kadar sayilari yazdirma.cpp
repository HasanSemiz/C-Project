#include <stdio.h>
int main()
{
	int x,y=0,z=1;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	for(y=0;y<x;y++){
		printf("%5d",z);
		z++;
	}
	return 0;
	
}

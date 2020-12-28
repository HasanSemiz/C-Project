#include <stdio.h>
#define n 5
int main()
{
	int i,max=0;
	int a[n]={1,8,3,4,5};
	for(i=0;i<5;i++){
	
	if(a[i]>max)
	max=a[i];
	}printf("max=%d",max);
	return 0;
}

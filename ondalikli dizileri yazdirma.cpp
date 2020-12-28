#include <stdio.h>
#define N 5
int main()
{
	int i;
	double a[N]={1.2,2.5,3.3,4.4,5.5};
	for(i=0;i<N;i++)
	printf("a[%d]=%.2lf\n",i,a[i]);
	return 0;
	
}

#include <stdio.h>
int main()
{
	int x;
	int *p,**k,***m;
	x=5;
	p=&x;
	k=&p;
	m=&k;
	printf("x in degeri=%d\n",x);	
	printf("x in adresi=%p\n",p);
	printf("p pointer tuttugu adresteki deger=%d\n",*p);
     printf("p in adresi=%p\n",k);
	printf("k pointerin tuttugu adresteki tuttugu adresin degeri=%d\n",**k);
	printf("k in adresi=%p\n",m);
	printf("m pointerin tuttugu adresteki adresin adresinin degeri=%p",***m);
	
}

#include <stdio.h>
int main()
{
	int a,n,i,toplam=1,j,x=0;
	printf("taban ve kuvvet giriniz=");
	scanf("%d",&a);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	for(j=1;j<=i;j++)
	{
	toplam=a*toplam;
	} x=toplam;

	printf("sonuc=%d",x);
	return 0;
}


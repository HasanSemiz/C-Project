#include <stdio.h>
int main()
{
	int x,y,toplam=0,k=0,sayac=0;
	printf("not giriniz(durmak icin -1)=)");
	scanf("%d",&x);
	while(x!=-1){
	k=k+sayac;
	sayac++;
	toplam=toplam+x;
	printf("not giriniz=");
	scanf("%d",&x);}
   y=toplam/sayac;
printf("ortalama=%d",y);
return 0;}

#include <stdio.h>

int basamak(int x)
{
	int toplam;
	if(x>0)
	toplam=x%10+basamak(x/10);
	else 
	return 0;
	
	
}



int main()
{
	int x;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	printf("sonuc=%d",basamak(x));
	return 0;
	
	
	
}

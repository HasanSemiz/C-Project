#include <stdio.h>


int topla(int x)
{
	int toplam=0;
	if(x>0)
	toplam=x+topla(x-1);
	else 
	
	return 0;
}



int main()
{
	int x;
	printf("bir sayi giriniz=");
	scanf("%d",&x);
	printf("sonuc=%d",topla(x));
	return 0;
	
	
	
	
	
}

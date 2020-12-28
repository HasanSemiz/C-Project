#include <stdio.h>

int obeb(int x, int y)
{

	if(y>0)
		return obeb(y,x%y);
	else return x;
	
	
	
}

int main()
{
	int x,y;
	printf("iki sayi giriniz=");
	scanf("%d%d",&x,&y);
	printf("sonuc=%d",obeb(x,y));
	return 0;
	
}

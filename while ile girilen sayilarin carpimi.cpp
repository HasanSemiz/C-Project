#include <stdio.h>
int main()
{
	int x,toplam=1;
	printf("bir sayi giriniz:(durmak icin -1)");
	scanf("%d",&x);
	while(x!=-1)
	{ toplam=x*toplam;
	printf("bir sayi giriniz:(durmak icin -1)");
	scanf("%d",&x);
	}
	printf("%d",toplam);
	return 0;
}

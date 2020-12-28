#include <stdio.h>
 int main()
 {
 	int x,y=1,sonuc=1;
 	printf("bir sayi giriniz=");
 	scanf("%d",&x);
 	while(y<=x)
 	{ sonuc=sonuc*y;
 	 y++;
	 }
	 printf("sonuc=%d",sonuc);
	 return 0; }

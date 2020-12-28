#include <stdio.h>
#include <math.h>
int main()
 {
 	int x,y,z,t;
 	printf("kenar uzunlugu giriniz");
 	scanf("%d",&x);
 	printf("1 alan hesabý\n 2 cevre hesabý\n secim giriniz=");
 	scanf("%d",&y);
 	switch(y)
	{
	  case 1:
	z=x*x;
	printf("%d",z); break;
      case 2: 
	t=4*x;
	printf("%d",t); break;

 	default: printf("gecersiz"); break;}
	  return 0;
 }

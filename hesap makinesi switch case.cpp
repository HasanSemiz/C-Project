#include <stdio.h>
#include <math.h>
int main()
{
  double x,y,a,b,c,d;
  int secim;
  
  printf("islem seciniz \n1 toplama\n2 cikarma\n3 carpma\n4 bolme\nsecim=");
  scanf("%d",&secim);
  printf("bir sayi giriniz:");
  scanf("%lf",&x);
  printf("bir sayi giriniz:");
  scanf("%lf",&y);
  
  switch(secim)
  {
  	case 1:
  		a=x+y;
  		printf("sonuc=%2lf",a);
  		break;
  	case 2:
  		b=x-y;
  		printf("sonuc=%2lf",b);
  		break;
  	case 3:
  		c=x*y;
  		printf("sonuc=%2lf",c);
  		break;
  	case 4:
  		d=x/y;
  		printf("sonuc=%.2lf",d);
  		break;
  	default:
  		printf("yanlýs secim");
  		break;
  }
  return 0;
}

#include <stdio.h>

int fonksiyon(int x)
{
	if(x<=0)
	
	return 0;
	else
	   return fonksiyon(x-1)+2;
	  
	
}
  int main()
  {
  int x,y;
  printf("bir sayi giriniz=");
  scanf("%d",&x);
  y=fonksiyon(x);
  printf("fonksiyon(%d)=%d",x,y);
  return 0;
}

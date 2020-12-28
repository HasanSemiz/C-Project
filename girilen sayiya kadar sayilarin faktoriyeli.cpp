#include <stdio.h>
int main()
{
  int x,i,j,toplam;
  printf("sayi giriniz=");
  scanf("%d",&x);
  for(i=x;i>0;i--)
    {toplam=1;
	for(j=i;j>0;j--)
 {
   toplam=toplam*j;}
  printf("%d nin faktoriyeli=%d\n",i,toplam);}
  
  return 0;
	
	
	
}

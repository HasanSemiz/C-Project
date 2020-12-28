#include <stdio.h>
int main()
{ int x,y=1,toplam=0;
  printf("bir sayi giriniz=");
  scanf("%d",&x);
  while(y<=x){
  
  toplam=toplam+y;
  y++;}
  printf("sonuc=%d",toplam);
  return 0;
	
	
	
	
}

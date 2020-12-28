#include <stdio.h>

int main ()
{ int ikincienb;
int enb;
int i,dizi[10];
   enb=dizi[0];
     ikincienb=dizi[1];
       for(i=0;i<10;i++)
  {
  printf("%d. sayiyi gir:",i+1); 
  scanf("%d",&dizi[i]);
  }
  
  for(i=0;i<10;i++)
  {if(dizi[i]>enb)
  	enb=dizi[i];
  
  }for(int i=0;i<10;i++){
  
  if(dizi[i]>ikincienb && dizi[i]!=enb)
 ikincienb=dizi[i];

}
printf("en buyuk deger:%d\nen buyuk ikinci deger:%d",enb,ikincienb);

return 0;
}
  
  

 

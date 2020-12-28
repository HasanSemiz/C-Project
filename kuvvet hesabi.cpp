#include <stdio.h>
int main()
{ int x,y,z=0,sonuc=1;
 printf("taban giriniz=");
 scanf("%d",&x);
 printf("kuvvet giriniz=");
 scanf("%d",&y);
 while(z<y){
 z++;
 sonuc=sonuc*x;
 }
 printf("sonuc=%d",sonuc);
 return 0;
 
 

}

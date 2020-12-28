#include <stdio.h>

int main()
{ int sayi=100,yuzler,onlar,birler,x;
  while(sayi<1000)
 {
   birler=sayi%10;
  x=sayi/10;
  onlar=x%10;
  yuzler=sayi/100;
  if(sayi==birler*birler*birler+onlar*onlar*onlar+yuzler*yuzler*yuzler)
  {
  printf("%5d",sayi);
  sayi++;}
  else sayi++;}
  return 0;}
  
  
  

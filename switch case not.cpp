#include <stdio.h>
int main()
{ int sayi;
printf("not giriniz=");
scanf("%d",&sayi);
switch(sayi){

case 1: printf("kaldi"); break;
case 2: printf("idare"); break;
case 3: printf("orta"); break;
case 4: printf("iyi"); break;
case 5: printf("pekiyi"); break;
default : printf("gecersiz"); break; }

return 0;}

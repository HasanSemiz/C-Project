#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=1+rand()%100,sayac=1,n;

	while(sayac<=10){
	
	printf("bir sayi giriniz=");
	scanf("%d",&n);
	if(x==n){
	
	
	printf("TEBRIKLER sayiyi %d. denemede buldunuz",sayac);
	break;}
	
	else if(sayac!=10) 
	{
	
	printf("UZGUNUM sayiyi %d. denemede bulamadiniz tekrar deneyiniz\n",sayac);
	sayac++;}
	else{
	
	 printf("UZGUNUM sayiyi 10. denemede bulamadiniz");sayac++;}
}
	printf("\n%d",x);
	return 0;
	
}

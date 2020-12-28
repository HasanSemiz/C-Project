#include <stdio.h>
int main()

 {
 	int i[10],j; //10 elemanlý bir dizi ve bir bilinmeyen tanýmlandý//
 	int *iptr;// iptr adýnda bir pointer tanýmladýk//
 	for(j=0;j<10;j++)
 	i[j]=j; //for döngüsü ile i dizisinin elemanlarýna dizideki sýra deðerlerini atadýk//
 	for(j=0;j<10;j++)
	 printf("i[%d]=%d",j,i[j]);// for döngüsü ile i dizisini ekrana yazdýrdýk//
 	iptr=i;//iptr ye i dizisini atadýk yani þuanda iptr i[0] a eþit//
 	for(j=0;j<10;j++)
 	{printf("%d\n",*iptr); 
	 iptr++;} //for döngüsü yardýmýyla iptr deðerlerini ekrana yazdýrcaz iptr i[0] a eþitti yani þuanda i dizisinin tüm elemanlarýnýn deðerlerini yazdýrcaz//
 	         // deðer yazdýrýyoruz çünkü iptr nin baþýnda * iþareti var eðer & olsaydý adreslerini yazdýracaktýk//
 	         //iptr++ yaparak döngüde iptr adresinide arttýrdýk //
 	 iptr=i; //iptr yi tekrar i ye eþitledik çünkü en son iptr indis 9 da kalmýþtý//
	  for(j=0;j<10;j++)
 	{
	 printf("%p\n",iptr); 
	iptr++;}
	 //burda ise iptr nin adresini yazdýrdýk ekrana for döngüsü ile istersek &i[j] de yapabilirdik printf içinde bir þey farketmiyor printf de %p ile yazdýrdýk çünkü adres yazdýrýyoruz//
	
	 printf("%d\n\n\n",*(iptr-1));// son degeri yazdýrdýk çünkü iptr çýktýðýnda 10 du 1 azalttýk dizi 9 yani eleman 10 yazdý//
	 
	 iptr=i;
	 for(j=0;j<10;j++)
	 printf("%d\n",*(iptr+j)); //burdada tekrar yazdýrýyoruz diziyi ancak burda en son iptr 9 olmuyor çünkü iptr yi arttýrmýyoruz printf de ekleme yapýp yazdýrýyoruz//
	 printf("%d",*iptr);//printf ile iptr nin degerini yazdýrdýk kaçta olduðunu öðrenmek için//
	 return 0;
 }

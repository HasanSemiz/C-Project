#include <stdio.h>
int main()

 {
 	int i[10],j; //10 elemanl� bir dizi ve bir bilinmeyen tan�mland�//
 	int *iptr;// iptr ad�nda bir pointer tan�mlad�k//
 	for(j=0;j<10;j++)
 	i[j]=j; //for d�ng�s� ile i dizisinin elemanlar�na dizideki s�ra de�erlerini atad�k//
 	for(j=0;j<10;j++)
	 printf("i[%d]=%d",j,i[j]);// for d�ng�s� ile i dizisini ekrana yazd�rd�k//
 	iptr=i;//iptr ye i dizisini atad�k yani �uanda iptr i[0] a e�it//
 	for(j=0;j<10;j++)
 	{printf("%d\n",*iptr); 
	 iptr++;} //for d�ng�s� yard�m�yla iptr de�erlerini ekrana yazd�rcaz iptr i[0] a e�itti yani �uanda i dizisinin t�m elemanlar�n�n de�erlerini yazd�rcaz//
 	         // de�er yazd�r�yoruz ��nk� iptr nin ba��nda * i�areti var e�er & olsayd� adreslerini yazd�racakt�k//
 	         //iptr++ yaparak d�ng�de iptr adresinide artt�rd�k //
 	 iptr=i; //iptr yi tekrar i ye e�itledik ��nk� en son iptr indis 9 da kalm��t�//
	  for(j=0;j<10;j++)
 	{
	 printf("%p\n",iptr); 
	iptr++;}
	 //burda ise iptr nin adresini yazd�rd�k ekrana for d�ng�s� ile istersek &i[j] de yapabilirdik printf i�inde bir �ey farketmiyor printf de %p ile yazd�rd�k ��nk� adres yazd�r�yoruz//
	
	 printf("%d\n\n\n",*(iptr-1));// son degeri yazd�rd�k ��nk� iptr ��kt���nda 10 du 1 azaltt�k dizi 9 yani eleman 10 yazd�//
	 
	 iptr=i;
	 for(j=0;j<10;j++)
	 printf("%d\n",*(iptr+j)); //burdada tekrar yazd�r�yoruz diziyi ancak burda en son iptr 9 olmuyor ��nk� iptr yi artt�rm�yoruz printf de ekleme yap�p yazd�r�yoruz//
	 printf("%d",*iptr);//printf ile iptr nin degerini yazd�rd�k ka�ta oldu�unu ��renmek i�in//
	 return 0;
 }

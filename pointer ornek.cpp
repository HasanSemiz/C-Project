#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
 {   srand(time(NULL)); //random fonksiyonu i�in her zaman farkl� de�er verilsin diye yapt�k//
 	int elm; //elm ad�nda bir int tan�mlad�k//
 	int month[12]; //month ad�nda 12 elemanl� bir dizi tan�mlad�k //
 	int *iptr; // iptr ad�nda bir pointer tan�mlad�k//
 	
	 for(int i=0;i<12;i++)  // for dong�s� yard�m�yla month dizisinin her eleman�na random say� atad�k//
 	    month[i]={1+rand()%50};
 	
	 for(int i=0;i<12;i++) //for d�ng�s� ile month dizisinin her eleman�n� ekrana yazd�rd�k//
 	    printf("month[%d]=%d\n",i,month[i]);
 	
	iptr=month; //iptr yi month a e�itledik ve �uan iptr month[0]//
	elm=iptr[3]; //elm yi iptr[3] e e�itledik iptr month[0] di �uan elm month[3] oldu//
 	
	    printf("elm=%d\n",elm); //elm yi ekrana yazd�rd�k//
 	
	iptr=month+3; //iptr yi month[3] e e�itledik �uan iptr month[3]//
 	iptr=&month[3]; //iptr yi tekrar month[3] e e�itledik yani bu �ekildede e�itleme oluyor//
 	elm=(iptr+2)[2]; //elm yi iptr+2[2] ye e�itledik en son iptr month[3] d� 4 ilerletince elm iptr month[7] ye e�it oldu �uan iptr hala month[3] e�it ancak elm mont[7] oldu//
 	
	   printf("elm=%d\n",elm); //elm yi ekrana yazd�rd�k//
 	
	elm=*(month+3); //elm yi month[3] deki de�ere e�itledik//
 	
	    printf("elm=%d\n",elm); //elm yi ekrana yazd�rd�k//
 	
	iptr=month; //iptr yi month a e�itledik iptr en son month[3] d� �uanda month[0] oldu//
 	elm=*(iptr+2); //elm yi iptr+2 deki de�ere e�itledik iptr month[0]di 2 ilerletince elm month[2] oldu//
 	
	   printf("elm=%d\n",elm); //elm yi ekrana yazd�rd�k//
 	
	elm=*(month+1); //elm yi month[1] de�erine e�itledik//
 	
	    printf("elm=%d\n",elm); //elm yi ekrana yazd�rd�k//
	    
 	return 0;
 	
 }

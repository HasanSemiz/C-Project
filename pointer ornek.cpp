#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
 {   srand(time(NULL)); //random fonksiyonu için her zaman farklý deðer verilsin diye yaptýk//
 	int elm; //elm adýnda bir int tanýmladýk//
 	int month[12]; //month adýnda 12 elemanlý bir dizi tanýmladýk //
 	int *iptr; // iptr adýnda bir pointer tanýmladýk//
 	
	 for(int i=0;i<12;i++)  // for dongüsü yardýmýyla month dizisinin her elemanýna random sayý atadýk//
 	    month[i]={1+rand()%50};
 	
	 for(int i=0;i<12;i++) //for döngüsü ile month dizisinin her elemanýný ekrana yazdýrdýk//
 	    printf("month[%d]=%d\n",i,month[i]);
 	
	iptr=month; //iptr yi month a eþitledik ve þuan iptr month[0]//
	elm=iptr[3]; //elm yi iptr[3] e eþitledik iptr month[0] di þuan elm month[3] oldu//
 	
	    printf("elm=%d\n",elm); //elm yi ekrana yazdýrdýk//
 	
	iptr=month+3; //iptr yi month[3] e eþitledik þuan iptr month[3]//
 	iptr=&month[3]; //iptr yi tekrar month[3] e eþitledik yani bu þekildede eþitleme oluyor//
 	elm=(iptr+2)[2]; //elm yi iptr+2[2] ye eþitledik en son iptr month[3] dü 4 ilerletince elm iptr month[7] ye eþit oldu þuan iptr hala month[3] eþit ancak elm mont[7] oldu//
 	
	   printf("elm=%d\n",elm); //elm yi ekrana yazdýrdýk//
 	
	elm=*(month+3); //elm yi month[3] deki deðere eþitledik//
 	
	    printf("elm=%d\n",elm); //elm yi ekrana yazdýrdýk//
 	
	iptr=month; //iptr yi month a eþitledik iptr en son month[3] dü þuanda month[0] oldu//
 	elm=*(iptr+2); //elm yi iptr+2 deki deðere eþitledik iptr month[0]di 2 ilerletince elm month[2] oldu//
 	
	   printf("elm=%d\n",elm); //elm yi ekrana yazdýrdýk//
 	
	elm=*(month+1); //elm yi month[1] deðerine eþitledik//
 	
	    printf("elm=%d\n",elm); //elm yi ekrana yazdýrdýk//
	    
 	return 0;
 	
 }

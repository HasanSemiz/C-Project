#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct personel{
	char adi[20];
	struct personel *sonraki;
	};
typedef struct personel dugum;
dugum *head,*oncekidgm,*silinecek,*yeni;


void ara(char *aranan)
{
	dugum *p;
	p=head;
	oncekidgm= head;
	while(p->sonraki!=NULL)
	{
		p=p->sonraki;
		if(strcmp(p->adi,aranan)>=0)
		break;
		oncekidgm=p;
		
		}
	
}

void ekle(char *s)
{
	yeni=(dugum*)malloc(sizeof(dugum));
	strcpy(yeni->adi,s);
	ara(yeni->adi);
	yeni->sonraki=oncekidgm->sonraki;
	oncekidgm->sonraki=yeni;
	
}
void sil(char *s)
{
	ara(s);
	silinecek=oncekidgm->sonraki;
	oncekidgm->sonraki=silinecek->sonraki;
	free(silinecek);
	
}
void listele(void)
{
	dugum *p;
	p=head;
	p=p->sonraki;
	while(p!=NULL)
	{
		printf("%s\n",p->adi);
		p=p->sonraki;
	}
		
}
 
 void enuzunbul(void)
 {
 	
 	dugum *p,*enuzun;
 	p=head;
 	p=p->sonraki;
 	enuzun=p;
 	while(p!=NULL)
 	{
 		if(strlen(p->adi)>=strlen(enuzun->adi))
 		{
 			enuzun=p;
		 }
		 p=p->sonraki;
	 }
 	
 	printf("En uzun=%s\n Uzunluk=%d",enuzun->adi,strlen(enuzun->adi));
 	getchar;
 	 }
 	 
 	 int main()
 	 {
 	 	
 	 	char sec;
 	 	char s[21];
 	 	head=(dugum*)malloc(sizeof(dugum));
 	 	strcpy(head->adi,"listenin basi");
 	 	head->sonraki=NULL;
 	 	do {
 	 		system("cls");
 	 		listele();
 	 		printf("\n\n1=Ekle\n2=Sil\n3=En uzun isim\n4=cikis\n");
 	 		sec=getche();
 	 		
 	 		switch(sec)
 	 		{
 	 			case '1': printf("\nAdi="); gets(s);
 	 			ekle(s); break;
 	 			case '2': printf("\nAdi="); gets(s);
 	 			sil(s); break;
				case '3': enuzunbul(); break;
				case '4': exit(0); break;
			}
			  }
 	 		
 	 		while(1);
 	 		
		  }
 	 	
 	 	
 	 	
 	 	
 	 
 	 	
 	 	
 	 	
 	 	
	  



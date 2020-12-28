#include <stdio.h>
 int main()
 {
 	int x,y=1;
 	printf("bir sayi giriniz=");
 	scanf("%d",&x);
 	while (y<=x){
	 
 	if(x%y==0)
	 {printf("%5d",y); 
	 y++;}
 	else y++; }
	 
	 return 0;
 }


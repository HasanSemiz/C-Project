#include <stdio.h>
int main()
 {
 	int a,x,y;
 	printf("bir sayi giriniz=");
 	scanf("%d",&x);
 	a=0;
	 while(a<100){
	 a++;
 	y=a*a*a-a*a;
 	if(y==x) printf("%d",a);}
 	return 0;
 	
 }

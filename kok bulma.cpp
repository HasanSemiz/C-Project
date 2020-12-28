#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,x,x1,x2,y;
	printf("x^2 nin katsayisini giriniz=");
	scanf("%lf",&a);
	printf("x in katsayisini giriniz=");
	scanf("%lf",&b);
	printf("sabit degeri giriniz=");
	scanf("%lf",&c);
	y=((b*b)-(4*a*c));
	if(y>0){
	
	 x=sqrt(y); 
	 x1=(-b-x)/2*a; 
	 x2=(-b+x)/2*a; 
	 printf("x1=%.2lf\n x2=%.2lf",x1,x2);}
	else if(y==0){
	
	x=sqrt(y); 
	x1=(-b-x)/2*a; 
	printf("tek kok vardir\nx1=%.2lf",x1);}
	else{
	
	printf("kok yoktur");}
	
	return 0;
}

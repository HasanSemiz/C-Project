#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a,b,top1,top2;
	srand(time(NULL));
	a=1+rand()%6;
	b=1+rand()%6;
	top1=a+b;
	if(top1==7||top1==11)
	   printf("Tebrikler kazandiniz");
	
	     else if(top1==2||top1==3||top1==12)
	        printf("Uzgunum kaybettiniz");
	          else {
			  top2=top1;
	           a=1+rand()%6;
	           b=1+rand()%6;
	           top1=a+b;
	           while(top1!=7&&top1==top2)
	            {           top2=top1;
				            a=1+rand()%6;
	                        b=1+rand()%6;
	                        top1=a+b;
	                        
					 }
					 if(top1==7)
					 {
					 printf("Uzgunum kaybettiniz");}
					 else {
					 printf("Tebrikler kazandiniz");}
			     
		}
			    
				return 0;
}

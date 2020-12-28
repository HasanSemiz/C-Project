#include <stdio.h>
 int main()
  {
  	int a[100],b[100],c[100],x,i;
  	 printf("eleman sayisini giriniz=");
  	  scanf("%d",&x);
  	   for(i=0;i<x;i++)
  	    {
  	    	printf("a[%d]=",i);
  	    	 scanf("%d",&a[i]);
  	    	 
		  }
		for(i=0;i<x;i++)
		 {
		 	printf("b[%d]=",i);
		 	 scanf("%d",&b[i]);
		 }
		  for(i=0;i<x;i++)
		   {c[i]=a[i]+b[i];
		    printf("c[%d]=%d\n",i,c[i]);
		   }
		   return 0;
  }

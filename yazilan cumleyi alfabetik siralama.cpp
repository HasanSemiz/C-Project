#include <stdio.h>

int main()
 {
 	char a[100];
 	char b;
 	int k=0;
 	printf("kelime giriniz=");
 	gets(a);
 	while(a[k]!='\0')
 	k++;
 	
 	 for(int i=0;i<k;i++)
 	 for(int j=i+1;j<k;j++)
 	 if(a[i]>a[j])
 	 {
	    b=a[i];
 	  a[i]=a[j];
 	  a[j]=b; }
 	  puts(a);
 	  return 0;}

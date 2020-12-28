#include <stdio.h>
int main(void)
 {
 	int i;
 	int *iptr;
 	i=5;
 	iptr=&i;
 	printf("i nin adresi %p\n",&i);
 	printf("iptr nin adresi %p\n",iptr);
 	 printf("i degeri %d\n",i);
 	 printf("iptr degeri %d\n",*iptr);
 	 return 0;
 	
 	
 	
 	
 	
 }

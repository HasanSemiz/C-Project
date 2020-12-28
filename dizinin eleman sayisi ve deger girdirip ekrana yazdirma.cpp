#include <stdio.h>
int main()
{ int a[100];
  int i,n;
  printf("eleman sayisi giriniz=");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {printf("a[%d]. elemanýn degerini giriniz=",i+1);
   scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    printf("%3d",a[i]);
	  return 0;
}

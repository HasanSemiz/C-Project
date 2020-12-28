#include <stdio.h>
int main()
{
	int i,j;
	char *ilkbaharaylar[3]= {"mart","nisan","mayis"};
	char *yazaylar[3]= {"haziran","temmuz","agustos"};
	char *sonbaharaylar[3]= {"eylul","ekim","kasim"};
	char *kisaylar[3]= {"aralik","ocak","subat"};
	char **table[4];
	table[0]=ilkbaharaylar;
	table[1]=yazaylar;
	table[2]=sonbaharaylar;
	table[3]=kisaylar;
	
	for(i=0;i<4;i++)
	 {
	 for(j=0;j<3;j++)
	     printf("%s\n",table[i][j]);
		 
	  } 
	     return 0;
	
	
}

// aaaBBcdd
// 3212

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
	char *chr, c;
	int i=0, j=0;
	chr=(char*)malloc(sizeof(char)*1000);
	
	printf("Stringi giriniz: ");
	gets(chr);
	
	c=*chr;

	while(1)
	{	
		if(*chr=='\0')
		{
			printf("%d", j);
			break;
		}

		if(*chr==c)
			j++;
	
		else
		{
			printf("%d",j);
			c=*chr;
			j=1;
		}
		chr++;
	}
	
	getch();
	return 0;
}

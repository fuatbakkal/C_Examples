#include <stdio.h>
#include <conio.h>

int metuz(char *p)
{
	char *q=p;
	
	while(*q!=0) // 0=NULL
		q++;
		
	return q-p;
}

int main(void)
{
	char kar[10];
	
	printf("\n Metni gir: ");
	gets(kar);
	
	printf("\n Metin uzunlugu: %d", metuz(kar));
	
	getch();
	return 0;
}

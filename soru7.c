#include <stdio.h>
#include <conio.h>

int main()
{
	int nufus, yuzde, hedef, yil;
	
	printf(" Sunaki nufusu girin: ");
	scanf("%d", &nufus);
	
	printf("\n Artis yuzdesini girin: ");
	scanf("%d", &yuzde);

	printf("\n Hedef nufusu girin: ");
	scanf("%d", &hedef);
	
	for(yil=0; nufus<hedef; yil++)
	{
		nufus+=(nufus*yuzde)/100;
	}
	
	printf("\n %d nufusuna %d yilda ulasirsiniz.", hedef, yil);
	
	getch();
	return 0;
}

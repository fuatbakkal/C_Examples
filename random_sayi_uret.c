#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int sayiuret(int x, int y)
{
	int sayi;
	sayi=rand()%(y-x+1) + x;
		
	return sayi;
}

int main()
{
	unsigned i;
	int sayi;

	srand (time(NULL)); //Rastgele sayı için gerekli. Sadece main fonksiyonunda işe yarar.

	for(i=1; i<=280; i++)
	{
		sayi=sayiuret(3,15); //[3,15] aralığındaki sayıları üretir.
		printf("%d\n", sayi);
	}

	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void asal_mi(int *, int *);

int main(void)
{
	int kac_tane, sayac=1, sayi=2, sonuc;
	
	printf(" Kac tane yazdirilsin: ");
	scanf("%d", &kac_tane);
	printf("\n");
	
	do
	{
		asal_mi(&sayi, &sonuc);
		
		if(sonuc==1)
		{
			printf(" %2d. asal sayi: %2d\n", sayac, sayi);
			sayac++;
		}
		sayi++;
	} while(sayac<=kac_tane);
	
	getch();
	return 0;
}

void asal_mi(int *sayi, int *sonuc)
{
	int i, sayac=0;
	
	for(i=1; i<=*sayi; i++)
	{
		if(*sayi%i==0)
		{
			sayac++;
		}
	}
	
	if(sayac==2)
		*sonuc=1;
		
	else
		*sonuc=0;
}


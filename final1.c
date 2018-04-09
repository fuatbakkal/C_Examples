#include <stdio.h>
#include <conio.h>

int kac_basamakli(int);
int asal_mi(int);
int kuvvet(int, int);
int sagdan_soldan(int, char);

int main(void)
{
	int sayi, donus;
	char secim;
	
	printf("\n Sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	do {
	printf(" Sagdan bakmak icin a, soldan bakmak icin b gir: ");
	secim=getch();
	printf("\n");
	} while(secim!='a' && secim!='b');
	
	sagdan_soldan(sayi,secim);
	
	getch();
	return 0;
}

int kac_basamakli(int x)
{
	int i=0;

	do
	{
		x/=10;
		i++;
	} while(x>0);
	
	return i;
}

int asal_mi(int sayi)
{
	int i, sayac=0;
	
	for(i=1; i<=sayi; i++)
	{
		if(sayi%i==0)
			sayac++;
	}
	
	if(sayac==2)
		return 1;
		
	return 0;
}

int kuvvet(int x, int y)
{
	int i, kuvvet=1;
	
	for(i=1; i<=y; i++)
		kuvvet*=x;
	
	return kuvvet;
}

int sagdan_soldan(int sayi, char secim)
{
	int basamak_sayisi, bsd, bsm, sayac=0, donus=0;
	
	basamak_sayisi=kac_basamakli(sayi);
	bsd=kac_basamakli(sayi)-1;
	
	switch(secim)
	{
	case 'a':
		do
		{
			if(asal_mi(sayi)==1)
			{
				printf("\n %d asaldir.", sayi);
				sayac++;
			}
			
			else if(asal_mi(sayi)==0)
				printf("\n %d asal degildir.", sayi);
			
			sayi=sayi/10;
		} while(sayi>0);
		
		if(sayac==basamak_sayisi)
		{
			donus=1;
			//return 1;
		}
		
		printf("\n Donen deger: %d", donus);
		return 0;
	break;
	
	case 'b':
		do
		{
			if(asal_mi(sayi)==1)
			{
				printf("\n %d asaldir.", sayi);
				sayac++;
			}
			
			else if(asal_mi(sayi)==0)
				printf("\n %d asal degildir.", sayi);
			
			bsm=sayi/kuvvet(10,bsd);
			sayi=sayi-bsm*kuvvet(10,bsd);
			bsd--;
			
		} while(bsd>=0);
		
		if(sayac==basamak_sayisi)
		{
			donus=1;
			//return 1;
		}
		
		printf("\n Donen deger: %d", donus);
		return 0;
	break;
	
	default: printf("\n Hatali secim!");
	}
}

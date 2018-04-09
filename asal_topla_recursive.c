#include<stdio.h>
#include<conio.h>

int asal_mi(int);
int asal_topla(int);

int main(void)
{
	int sayi, sonuc;
	
	printf("\n Kaca kadar toplansin: ");
	scanf("%d", &sayi);
	
	printf("\n 0'dan %d'e kadar olan asal sayilarin toplami: %d\n", sayi, asal_topla(sayi));
	
	getch();
	return 0;
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
		
	else
		return 0;
}

int asal_topla(int sayi)
{
	int toplam;

	while((asal_mi(sayi)==0) && sayi>0)
		sayi--;
		
	if(sayi<0)
		toplam=0;

	else
		toplam=sayi+asal_topla(sayi-1);

	return toplam;
}

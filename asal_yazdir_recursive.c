#include <stdio.h>
#include<conio.h>

int asal_mi(int);
void listele(int);

int main(void)
{
	int sayi, sonuc;
	
	printf(" Kaca kadar yazilsin: ");
	scanf("%d", &sayi);
	
	printf("\n %d'e kadar olan asal sayilar:\n", sayi);
	listele(sayi);
	
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

int k=2; //Global deðiþken

void listele(int sayi)
{
	if(k<=sayi)
	{
		if(asal_mi(k)==1)
			printf(" %d", k);
		
		k++;
		listele(sayi);
	}
}

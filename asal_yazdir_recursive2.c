#include<stdio.h>
#include<conio.h>

int asal_mi(int);
void listele(int, int);

int main(void)
{
	int ilk_sayi, son_sayi;
	
	printf("\n Kactan baslasin: ");
	scanf("%d", &ilk_sayi);
	
	printf(" Kaca kadar yazilsin: ");
	scanf("%d", &son_sayi);
	
	printf("\n %d'dan %d'e kadar olan asal sayilar:\n", ilk_sayi, son_sayi);
	
	listele(ilk_sayi, son_sayi);
	
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

void listele(int k, int n)
{
	if(k>n)
		return;
	
	if(asal_mi(k)==1)
		printf(" %d", k);
	
	listele(k+1, n);
}
